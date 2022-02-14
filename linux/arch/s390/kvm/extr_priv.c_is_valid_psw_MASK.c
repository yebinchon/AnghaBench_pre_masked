
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mask; int addr; } ;
typedef TYPE_1__ psw_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

int FUNC_0(psw_t *VAR_6)
{
 if (VAR_6->mask & VAR_5)
  return 0;
 if ((VAR_6->mask & VAR_2) == VAR_3) {
  if (VAR_6->addr & ~VAR_1)
   return 0;
 }
 if (!(VAR_6->mask & VAR_2) && (VAR_6->addr & ~VAR_0))
  return 0;
 if ((VAR_6->mask & VAR_2) == VAR_4)
  return 0;
 if (VAR_6->addr & 1)
  return 0;
 return 1;
}
