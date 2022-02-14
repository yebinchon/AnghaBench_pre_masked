
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_battery {int device; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct acpi_battery *VAR_3)
{
 if (FUNC_1(VAR_3->device)) {
  FUNC_0((VAR_1, VAR_0, "Evaluating _STA"));
  return -VAR_2;
 }
 return 0;
}
