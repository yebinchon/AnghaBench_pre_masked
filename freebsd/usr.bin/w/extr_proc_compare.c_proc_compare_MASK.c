
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kinfo_proc {scalar_t__ ki_pid; scalar_t__ ki_stat; scalar_t__ ki_slptime; int ki_tdflags; int ki_estcpu; } ;



 int FUNC_0 (struct kinfo_proc*) ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,int) ;

int
FUNC_2(struct kinfo_proc *VAR_2, struct kinfo_proc *VAR_3)
{

 if (VAR_2 == ((void*)0))
  return (1);



 switch (FUNC_1(FUNC_0(VAR_2), FUNC_0(VAR_3))) {
 case 129:
  return (0);
 case 128:
  return (1);
 case 130:



  if (VAR_3->ki_estcpu > VAR_2->ki_estcpu)
   return (1);
  if (VAR_2->ki_estcpu > VAR_3->ki_estcpu)
   return (0);
  return (VAR_3->ki_pid > VAR_2->ki_pid);
 }



 switch (FUNC_1(VAR_2->ki_stat == VAR_0, VAR_3->ki_stat == VAR_0)) {
 case 129:
  return (1);
 case 128:
  return (0);
 case 130:
  return (VAR_3->ki_pid > VAR_2->ki_pid);
 }



 if (VAR_3->ki_slptime > VAR_2->ki_slptime)
  return (0);
 if (VAR_2->ki_slptime > VAR_3->ki_slptime)
  return (1);



 if (VAR_2->ki_tdflags & VAR_1 && (VAR_3->ki_tdflags & VAR_1) == 0)
  return (1);
 if (VAR_3->ki_tdflags & VAR_1 && (VAR_2->ki_tdflags & VAR_1) == 0)
  return (0);
 return (VAR_3->ki_pid > VAR_2->ki_pid);
}
