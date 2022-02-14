
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ tv_sec; scalar_t__ tv_usec; } ;
struct kinfo_proc {int ki_pctcpu; scalar_t__ ki_runtime; TYPE_1__ ki_start; } ;
struct TYPE_4__ {scalar_t__ tv_sec; scalar_t__ tv_usec; } ;


 struct kinfo_proc* FUNC_0 (struct kinfo_proc*) ;
 double FUNC_1 (int ) ;
 double VAR_0 ;
 TYPE_2__ VAR_1 ;

__attribute__((used)) static double
FUNC_2(struct kinfo_proc *VAR_2)
{
 const struct kinfo_proc *VAR_3;

 if (VAR_0 != 0) {
  VAR_3 = FUNC_0(VAR_2);
  if (VAR_3 != ((void*)0))
   return ((double)(VAR_2->ki_runtime - VAR_3->ki_runtime)
       / VAR_0);






  else if (VAR_2->ki_start.tv_sec > VAR_1.tv_sec ||
      (VAR_2->ki_start.tv_sec == VAR_1.tv_sec &&
      VAR_2->ki_start.tv_usec >= VAR_1.tv_usec))
   return ((double)VAR_2->ki_runtime / VAR_0);
 }
 return (FUNC_1(VAR_2->ki_pctcpu));
}
