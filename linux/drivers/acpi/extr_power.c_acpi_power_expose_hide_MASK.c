
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_head {int dummy; } ;
struct attribute_group {int dummy; } ;
struct acpi_device {int dummy; } ;


 int FUNC_0 (struct acpi_device*,struct list_head*,struct attribute_group const*) ;
 int FUNC_1 (struct acpi_device*,struct list_head*,struct attribute_group const*) ;

__attribute__((used)) static void FUNC_2(struct acpi_device *VAR_0,
       struct list_head *VAR_1,
       const struct attribute_group *VAR_2,
       bool VAR_3)
{
 if (VAR_3)
  FUNC_0(VAR_0, VAR_1, VAR_2);
 else
  FUNC_1(VAR_0, VAR_1, VAR_2);
}
