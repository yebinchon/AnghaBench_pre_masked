
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kinfo_proc {int p_pctcpu; } ;


 scalar_t__ VAR_0 ;
 double FUNC_0 (int ) ;

double FUNC_1(const struct kinfo_proc *VAR_1) {
   if (VAR_0 == 0)
      return (0.0);



   return (100.0 * ((double)(VAR_1->p_pctcpu) / VAR_0));
}
