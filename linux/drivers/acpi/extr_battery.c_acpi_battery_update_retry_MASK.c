
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_battery {int dummy; } ;


 int FUNC_0 (struct acpi_battery*,int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct acpi_battery *VAR_0)
{
 int VAR_1, VAR_2;

 for (VAR_1 = 5; VAR_1; VAR_1--) {
  VAR_2 = FUNC_0(VAR_0, 0);
  if (!VAR_2)
   break;

  FUNC_1(20);
 }
 return VAR_2;
}
