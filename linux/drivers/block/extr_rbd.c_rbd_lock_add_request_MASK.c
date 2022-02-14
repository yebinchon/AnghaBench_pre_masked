
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rbd_img_request {int lock_item; struct rbd_device* rbd_dev; } ;
struct rbd_device {scalar_t__ lock_state; int lock_lists_lock; int running_list; int acquiring_list; int lock_rwsem; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static bool FUNC_6(struct rbd_img_request *VAR_1)
{
 struct rbd_device *VAR_2 = VAR_1->rbd_dev;
 bool VAR_3;

 FUNC_2(&VAR_2->lock_rwsem);
 VAR_3 = VAR_2->lock_state == VAR_0;
 FUNC_4(&VAR_2->lock_lists_lock);
 FUNC_3(FUNC_1(&VAR_1->lock_item));
 if (!VAR_3)
  FUNC_0(&VAR_1->lock_item, &VAR_2->acquiring_list);
 else
  FUNC_0(&VAR_1->lock_item, &VAR_2->running_list);
 FUNC_5(&VAR_2->lock_lists_lock);
 return VAR_3;
}
