
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union acpi_object {scalar_t__ type; } ;
struct acpi_fan {char fif; } ;
struct acpi_device {int dev; int handle; } ;
struct acpi_buffer {int member_0; char* member_1; union acpi_object* pointer; } ;
typedef int acpi_status ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct acpi_fan* FUNC_1 (struct acpi_device*) ;
 int FUNC_2 (int ,char*,int *,struct acpi_buffer*) ;
 int FUNC_3 (union acpi_object*,struct acpi_buffer*,struct acpi_buffer*) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (union acpi_object*) ;

__attribute__((used)) static int FUNC_6(struct acpi_device *VAR_3)
{
 struct acpi_buffer VAR_4 = { VAR_0, ((void*)0) };
 struct acpi_fan *VAR_5 = FUNC_1(VAR_3);
 struct acpi_buffer VAR_6 = { sizeof("NNNN"), "NNNN" };
 struct acpi_buffer VAR_7 = { sizeof(VAR_5->fif), &VAR_5->fif };
 union acpi_object *VAR_8;
 acpi_status VAR_9;

 VAR_9 = FUNC_2(VAR_3->handle, "_FIF", ((void*)0), &VAR_4);
 if (FUNC_0(VAR_9))
  return VAR_9;

 VAR_8 = VAR_4.pointer;
 if (!VAR_8 || VAR_8->type != VAR_1) {
  FUNC_4(&VAR_3->dev, "Invalid _FIF data\n");
  VAR_9 = -VAR_2;
  goto err;
 }

 VAR_9 = FUNC_3(VAR_8, &VAR_6, &VAR_7);
 if (FUNC_0(VAR_9)) {
  FUNC_4(&VAR_3->dev, "Invalid _FIF element\n");
  VAR_9 = -VAR_2;
 }

err:
 FUNC_5(VAR_8);
 return VAR_9;
}
