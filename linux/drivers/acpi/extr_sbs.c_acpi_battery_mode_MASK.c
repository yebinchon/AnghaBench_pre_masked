
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_battery {int mode; } ;



__attribute__((used)) static inline int FUNC_0(struct acpi_battery *VAR_0)
{
 return (VAR_0->mode & 0x8000);
}
