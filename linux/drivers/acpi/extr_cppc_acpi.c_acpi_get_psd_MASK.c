
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int count; int * elements; } ;
union acpi_object {scalar_t__ num_entries; scalar_t__ revision; scalar_t__ coord_type; TYPE_1__ package; } ;
struct cpc_desc {int cpu_id; union acpi_object domain_info; } ;
struct acpi_psd_package {scalar_t__ num_entries; scalar_t__ revision; scalar_t__ coord_type; TYPE_1__ package; } ;
struct acpi_buffer {int member_0; char* member_1; int length; union acpi_object* pointer; } ;
typedef scalar_t__ acpi_status ;
typedef int acpi_handle ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_1 (int ,char*,int *,struct acpi_buffer*,int ) ;
 scalar_t__ FUNC_2 (int *,struct acpi_buffer*,struct acpi_buffer*) ;
 int FUNC_3 (union acpi_object*) ;
 int FUNC_4 (char*,...) ;

__attribute__((used)) static int FUNC_5(struct cpc_desc *VAR_11, acpi_handle VAR_12)
{
 int VAR_13 = -VAR_9;
 acpi_status VAR_14 = VAR_5;
 struct acpi_buffer VAR_15 = {VAR_0, ((void*)0)};
 struct acpi_buffer VAR_16 = {sizeof("NNNNN"), "NNNNN"};
 struct acpi_buffer VAR_17 = {0, ((void*)0)};
 union acpi_object *VAR_18 = ((void*)0);
 struct acpi_psd_package *VAR_19;

 VAR_14 = FUNC_1(VAR_12, "_PSD", ((void*)0),
         &VAR_15, VAR_3);
 if (VAR_14 == VAR_4)
  return 0;
 if (FUNC_0(VAR_14))
  return -VAR_10;

 VAR_18 = VAR_15.pointer;
 if (!VAR_18 || VAR_18->package.count != 1) {
  FUNC_4("Invalid _PSD data\n");
  goto end;
 }

 VAR_19 = &(VAR_11->domain_info);

 VAR_17.length = sizeof(struct acpi_psd_package);
 VAR_17.pointer = VAR_19;

 VAR_14 = FUNC_2(&(VAR_18->package.elements[0]),
  &VAR_16, &VAR_17);
 if (FUNC_0(VAR_14)) {
  FUNC_4("Invalid _PSD data for CPU:%d\n", VAR_11->cpu_id);
  goto end;
 }

 if (VAR_19->num_entries != VAR_1) {
  FUNC_4("Unknown _PSD:num_entries for CPU:%d\n", VAR_11->cpu_id);
  goto end;
 }

 if (VAR_19->revision != VAR_2) {
  FUNC_4("Unknown _PSD:revision for CPU: %d\n", VAR_11->cpu_id);
  goto end;
 }

 if (VAR_19->coord_type != VAR_7 &&
     VAR_19->coord_type != VAR_8 &&
     VAR_19->coord_type != VAR_6) {
  FUNC_4("Invalid _PSD:coord_type for CPU:%d\n", VAR_11->cpu_id);
  goto end;
 }

 VAR_13 = 0;
end:
 FUNC_3(VAR_15.pointer);
 return VAR_13;
}
