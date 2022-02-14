
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmw_marker_queue {int lock; int lag_time; scalar_t__ lag; int head; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;

void FUNC_3(struct vmw_marker_queue *VAR_0)
{
 FUNC_0(&VAR_0->head);
 VAR_0->lag = 0;
 VAR_0->lag_time = FUNC_1();
 FUNC_2(&VAR_0->lock);
}
