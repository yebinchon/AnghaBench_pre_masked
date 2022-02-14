
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rbd_img_request {int lock_item; struct rbd_device* rbd_dev; } ;
struct rbd_device {scalar_t__ lock_state; int releasing_wait; int lock_lists_lock; int running_list; int lock_rwsem; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct rbd_img_request *VAR_1)
{
 struct rbd_device *VAR_2 = VAR_1->rbd_dev;
 bool VAR_3;

 FUNC_3(&VAR_2->lock_rwsem);
 FUNC_5(&VAR_2->lock_lists_lock);
 FUNC_4(!FUNC_2(&VAR_1->lock_item));
 FUNC_1(&VAR_1->lock_item);
 VAR_3 = (VAR_2->lock_state == VAR_0 &&
         FUNC_2(&VAR_2->running_list));
 FUNC_6(&VAR_2->lock_lists_lock);
 if (VAR_3)
  FUNC_0(&VAR_2->releasing_wait);
}
