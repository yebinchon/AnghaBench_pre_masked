
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ttm_lock {int queue; int lock; int flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct ttm_lock*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int *) ;

int FUNC_7(struct ttm_lock *VAR_1, bool VAR_2)
{
 int VAR_3 = 0;

 if (VAR_2) {
  VAR_3 = FUNC_5(VAR_1->queue,
            FUNC_0(VAR_1));
  if (FUNC_3(VAR_3 != 0)) {
   FUNC_1(&VAR_1->lock);
   VAR_1->flags &= ~VAR_0;
   FUNC_6(&VAR_1->queue);
   FUNC_2(&VAR_1->lock);
  }
 } else
  FUNC_4(VAR_1->queue, FUNC_0(VAR_1));

 return VAR_3;
}
