
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int value; } ;
union acpi_object {TYPE_1__ integer; int type; } ;
typedef int u32 ;
struct device {int dummy; } ;
struct acpi_object_list {int count; union acpi_object* pointer; } ;
typedef int ssize_t ;
typedef int acpi_status ;
typedef int acpi_handle ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct device*) ;
 int VAR_0 ;
 int FUNC_2 (union acpi_object*) ;
 int VAR_1 ;
 int FUNC_3 (int ,char*,struct acpi_object_list*,unsigned long long*) ;
 int FUNC_4 (struct device*) ;
 int FUNC_5 (struct device*) ;
 int FUNC_6 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_2, char *VAR_3, u32 VAR_4)
{
 acpi_handle VAR_5 = FUNC_1(VAR_2);
 union acpi_object VAR_6[] = {
  { .type = VAR_0, },
 };
 struct acpi_object_list VAR_7 = {
  .pointer = VAR_6,
  .count = FUNC_2(VAR_6),
 };
 unsigned long long VAR_8;
 acpi_status VAR_9;

 VAR_6[0].integer.value = VAR_4;

 FUNC_4(VAR_2);

 VAR_9 = FUNC_3(VAR_5, "_GWS", &VAR_7, &VAR_8);

 FUNC_5(VAR_2);

 if (FUNC_0(VAR_9))
  return -VAR_1;

 return FUNC_6(VAR_3, "0x%02X\n", (u32)VAR_8);
}
