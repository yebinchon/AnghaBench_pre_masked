
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct acpi_resource_vendor_typed {int byte_length; scalar_t__ byte_data; } ;
struct TYPE_2__ {struct acpi_resource_vendor_typed vendor_typed; } ;
struct acpi_resource {TYPE_1__ data; } ;
struct acpi_buffer {struct acpi_resource* pointer; int * member_1; int member_0; } ;
typedef int acpi_status ;
typedef int acpi_handle ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int *,struct acpi_buffer*) ;
 int VAR_3 ;
 int FUNC_2 (struct acpi_resource*) ;
 int FUNC_3 (int *,scalar_t__,int) ;

__attribute__((used)) static acpi_status FUNC_4(acpi_handle VAR_4, u64 *VAR_5, u64 *VAR_6)
{
 acpi_status VAR_7;
 struct acpi_buffer VAR_8 = { VAR_0, ((void*)0) };
 struct acpi_resource *VAR_9;
 struct acpi_resource_vendor_typed *VAR_10;

 VAR_7 = FUNC_1(VAR_4, VAR_2, &VAR_3,
  &VAR_8);

 VAR_9 = VAR_8.pointer;
 VAR_10 = &VAR_9->data.vendor_typed;

 if (FUNC_0(VAR_7) || VAR_10->byte_length < 16) {
  VAR_7 = VAR_1;
  goto exit;
 }

 FUNC_3(VAR_5, VAR_10->byte_data, sizeof(*VAR_5));
 FUNC_3(VAR_6, VAR_10->byte_data + 8, sizeof(*VAR_6));

  exit:
 FUNC_2(VAR_8.pointer);
 return VAR_7;
}
