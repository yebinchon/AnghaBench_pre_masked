
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ value; } ;
union acpi_object {TYPE_1__ integer; int type; } ;
typedef scalar_t__ u32 ;
struct device {int dummy; } ;
struct acpi_object_list {int count; union acpi_object* pointer; } ;
typedef int ssize_t ;
typedef int acpi_status ;
typedef int acpi_handle ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct device*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (union acpi_object*) ;
 int VAR_2 ;
 int FUNC_3 (int ,char*,struct acpi_object_list*,unsigned long long*) ;
 int FUNC_4 (struct device*) ;
 int FUNC_5 (struct device*) ;
 int FUNC_6 (char*,char*,scalar_t__) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_3, char *VAR_4, char *VAR_5,
      u32 VAR_6, const char *VAR_7)
{
 acpi_handle VAR_8 = FUNC_1(VAR_3);
 union acpi_object VAR_9[] = {
  { .type = VAR_1, },
 };
 struct acpi_object_list VAR_10 = {
  .pointer = VAR_9,
  .count = FUNC_2(VAR_9),
 };
 unsigned long long VAR_11;
 acpi_status VAR_12;

 VAR_9[0].integer.value = VAR_6;

 FUNC_4(VAR_3);

 VAR_12 = FUNC_3(VAR_8, VAR_5, &VAR_10, &VAR_11);

 FUNC_5(VAR_3);

 if (FUNC_0(VAR_12))
  return -VAR_2;

 if ((u32)VAR_11 == VAR_0)
  return FUNC_6(VAR_4, "%s\n", VAR_7);

 return FUNC_6(VAR_4, "%u\n", (u32)VAR_11);
}
