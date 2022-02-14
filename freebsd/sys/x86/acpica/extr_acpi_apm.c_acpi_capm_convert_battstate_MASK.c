
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_battinfo {int state; int cap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_0(struct acpi_battinfo *VAR_4)
{
 int VAR_5;

 VAR_5 = VAR_3;

 if (VAR_4->state & VAR_2) {
  if (VAR_4->cap >= 50)
   VAR_5 = 0;
  else
   VAR_5 = 1;
 }
 if (VAR_4->state & VAR_1)
  VAR_5 = 2;
 if (VAR_4->state & VAR_0)
  VAR_5 = 3;


 if (VAR_5 == VAR_3) {
  if (VAR_4->cap >= 50)
   VAR_5 = 0;
  else
   VAR_5 = 1;
 }

 return (VAR_5);
}
