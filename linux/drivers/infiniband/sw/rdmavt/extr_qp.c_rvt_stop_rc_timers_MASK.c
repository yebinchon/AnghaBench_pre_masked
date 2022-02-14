
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rvt_qp {int s_flags; int s_rnr_timer; int s_timer; int s_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct rvt_qp *VAR_2)
{
 FUNC_2(&VAR_2->s_lock);

 if (VAR_2->s_flags & (VAR_0 | VAR_1)) {
  VAR_2->s_flags &= ~(VAR_0 | VAR_1);
  FUNC_0(&VAR_2->s_timer);
  FUNC_1(&VAR_2->s_rnr_timer);
 }
}
