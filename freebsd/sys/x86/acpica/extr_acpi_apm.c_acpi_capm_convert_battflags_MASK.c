
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_battinfo {int cap; int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int
FUNC_0(struct acpi_battinfo *VAR_8)
{
 int VAR_9;

 VAR_9 = 0;

 if (VAR_8->cap >= 50)
  VAR_9 |= VAR_5;
 else {
  if (VAR_8->state & VAR_1)
   VAR_9 |= VAR_4;
  else
   VAR_9 |= VAR_6;
 }
 if (VAR_8->state & VAR_0)
  VAR_9 |= VAR_3;
 if (VAR_8->state == VAR_2)
  VAR_9 = VAR_7;

 return (VAR_9);
}
