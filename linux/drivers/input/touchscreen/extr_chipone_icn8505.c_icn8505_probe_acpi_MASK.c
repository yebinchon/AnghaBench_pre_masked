
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* pointer; } ;
union acpi_object {scalar_t__ type; TYPE_1__ string; } ;
struct icn8505_data {int firmware_name; } ;
struct device {int dummy; } ;
struct acpi_device {int handle; } ;
struct acpi_buffer {union acpi_object* pointer; int * member_1; int member_0; } ;
typedef int acpi_status ;


 int VAR_0 ;
 struct acpi_device* FUNC_0 (struct device*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,char*,int *,struct acpi_buffer*) ;
 int FUNC_3 (struct device*,char*,...) ;
 int FUNC_4 (union acpi_object*) ;
 int FUNC_5 (int ,int,char*,char const*) ;

__attribute__((used)) static int FUNC_6(struct icn8505_data *VAR_3, struct device *VAR_4)
{
 struct acpi_buffer VAR_5 = { VAR_0, ((void*)0) };
 const char *VAR_6 = "unknown";
 struct acpi_device *VAR_7;
 union acpi_object *VAR_8;
 acpi_status VAR_9;

 VAR_7 = FUNC_0(VAR_4);
 if (!VAR_7)
  return -VAR_2;

 VAR_9 = FUNC_2(VAR_7->handle, "_SUB", ((void*)0), &VAR_5);
 if (FUNC_1(VAR_9)) {
  VAR_8 = VAR_5.pointer;
  if (VAR_8->type == VAR_1)
   VAR_6 = VAR_8->string.pointer;
  else
   FUNC_3(VAR_4, "Warning ACPI _SUB did not return a string\n");
 } else {
  FUNC_3(VAR_4, "Warning ACPI _SUB failed: %#x\n", VAR_9);
  VAR_5.pointer = ((void*)0);
 }

 FUNC_5(VAR_3->firmware_name, sizeof(VAR_3->firmware_name),
   "chipone/icn8505-%s.fw", VAR_6);

 FUNC_4(VAR_5.pointer);
 return 0;
}
