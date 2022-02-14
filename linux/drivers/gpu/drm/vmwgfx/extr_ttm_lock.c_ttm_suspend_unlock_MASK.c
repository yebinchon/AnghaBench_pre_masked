
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ttm_lock {int lock; int queue; int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct ttm_lock *VAR_1)
{
 FUNC_0(&VAR_1->lock);
 VAR_1->flags &= ~VAR_0;
 FUNC_2(&VAR_1->queue);
 FUNC_1(&VAR_1->lock);
}
