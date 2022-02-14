
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rxe_task {int destroyed; scalar_t__ state; int tasklet; int state_lock; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct rxe_task *VAR_1)
{
 unsigned long VAR_2;
 bool VAR_3;





 VAR_1->destroyed = 1;

 do {
  FUNC_0(&VAR_1->state_lock, VAR_2);
  VAR_3 = (VAR_1->state == VAR_0);
  FUNC_1(&VAR_1->state_lock, VAR_2);
 } while (!VAR_3);

 FUNC_2(&VAR_1->tasklet);
}
