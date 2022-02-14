
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_gtdt_watchdog {int timer_flags; } ;
struct acpi_gtdt_header {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline bool FUNC_0(void *VAR_2)
{
 struct acpi_gtdt_header *VAR_3 = VAR_2;
 struct acpi_gtdt_watchdog *VAR_4 = VAR_2;

 if (VAR_3->type != VAR_0)
  return 0;

 return !(VAR_4->timer_flags & VAR_1);
}
