
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc {int p_flag2; int p_fctl0; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;

int
FUNC_0(struct proc *VAR_6, int VAR_7)
{

 if ((VAR_6->p_flag2 & VAR_1) != 0 ||
     (VAR_6->p_fctl0 & VAR_0) != 0)
  return (VAR_4);
 if (((VAR_6->p_flag2 & VAR_2) != 0 || VAR_5) &&
     VAR_7 != VAR_3)
   return (VAR_7);
 return (VAR_4);
}
