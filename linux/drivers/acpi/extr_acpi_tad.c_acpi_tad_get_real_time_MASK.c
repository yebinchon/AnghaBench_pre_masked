
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int length; scalar_t__ pointer; } ;
union acpi_object {scalar_t__ type; TYPE_1__ buffer; } ;
struct device {int dummy; } ;
struct acpi_tad_rt {int valid; } ;
struct acpi_buffer {union acpi_object* pointer; int member_0; } ;
typedef int acpi_status ;
typedef int acpi_handle ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (union acpi_object*) ;
 int FUNC_2 (struct device*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ,char*,int *,struct acpi_buffer*) ;
 int FUNC_4 (struct acpi_tad_rt*,struct acpi_tad_rt*,int) ;
 int FUNC_5 (struct device*) ;
 int FUNC_6 (struct device*) ;

__attribute__((used)) static int FUNC_7(struct device *VAR_3, struct acpi_tad_rt *VAR_4)
{
 acpi_handle VAR_5 = FUNC_2(VAR_3);
 struct acpi_buffer VAR_6 = { VAR_0 };
 union acpi_object *VAR_7;
 struct acpi_tad_rt *VAR_8;
 acpi_status VAR_9;
 int VAR_10 = -VAR_2;

 FUNC_5(VAR_3);

 VAR_9 = FUNC_3(VAR_5, "_GRT", ((void*)0), &VAR_6);

 FUNC_6(VAR_3);

 if (FUNC_0(VAR_9))
  goto out_free;

 VAR_7 = VAR_6.pointer;
 if (VAR_7->type != VAR_1)
  goto out_free;

 if (VAR_7->buffer.length != sizeof(*VAR_4))
  goto out_free;

 VAR_8 = (struct acpi_tad_rt *)(VAR_7->buffer.pointer);
 if (!VAR_8->valid)
  goto out_free;

 FUNC_4(VAR_4, VAR_8, sizeof(*VAR_4));
 VAR_10 = 0;

out_free:
 FUNC_1(VAR_6.pointer);
 return VAR_10;
}
