
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct generic_pm_domain {int flags; int * lock_ops; int mlock; int slock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct generic_pm_domain *VAR_3)
{
 if (VAR_3->flags & VAR_0) {
  FUNC_1(&VAR_3->slock);
  VAR_3->lock_ops = &VAR_2;
 } else {
  FUNC_0(&VAR_3->mlock);
  VAR_3->lock_ops = &VAR_1;
 }
}
