
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ttm_lock {scalar_t__ flags; scalar_t__ rw; int queue; int lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct ttm_lock *VAR_0)
{
 FUNC_1(&VAR_0->lock);
 FUNC_0(&VAR_0->queue);
 VAR_0->rw = 0;
 VAR_0->flags = 0;
}
