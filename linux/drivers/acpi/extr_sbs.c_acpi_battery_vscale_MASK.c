
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_battery {int spec; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static inline int FUNC_1(struct acpi_battery *VAR_0)
{
 return FUNC_0((VAR_0->spec & 0x0f00) >> 8);
}
