
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i40iw_cm_core {scalar_t__ disconn_wq; scalar_t__ event_wq; int ht_lock; int tcp_timer; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 scalar_t__ FUNC_4 (int *) ;

void FUNC_5(struct i40iw_cm_core *VAR_0)
{
 unsigned long VAR_1;

 if (!VAR_0)
  return;

 FUNC_2(&VAR_0->ht_lock, VAR_1);
 if (FUNC_4(&VAR_0->tcp_timer))
  FUNC_0(&VAR_0->tcp_timer);
 FUNC_3(&VAR_0->ht_lock, VAR_1);

 if (VAR_0->event_wq)
  FUNC_1(VAR_0->event_wq);
 if (VAR_0->disconn_wq)
  FUNC_1(VAR_0->disconn_wq);
}
