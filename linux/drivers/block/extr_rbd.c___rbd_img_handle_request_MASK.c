
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rbd_img_request {int op_type; int flags; int state_mutex; struct rbd_device* rbd_dev; } ;
struct rbd_device {int lock_rwsem; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct rbd_img_request*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct rbd_img_request*,int*) ;
 int FUNC_7 (struct rbd_img_request*) ;
 int FUNC_8 (struct rbd_device*,char*,char*,int ,int) ;
 scalar_t__ FUNC_9 (int ,int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static bool FUNC_11(struct rbd_img_request *VAR_1,
         int *VAR_2)
{
 struct rbd_device *VAR_3 = VAR_1->rbd_dev;
 bool VAR_4;

 if (FUNC_3(VAR_1)) {
  FUNC_0(&VAR_3->lock_rwsem);
  FUNC_1(&VAR_1->state_mutex);
  VAR_4 = FUNC_6(VAR_1, VAR_2);
  if (VAR_4)
   FUNC_7(VAR_1);
  FUNC_2(&VAR_1->state_mutex);
  FUNC_10(&VAR_3->lock_rwsem);
 } else {
  FUNC_1(&VAR_1->state_mutex);
  VAR_4 = FUNC_6(VAR_1, VAR_2);
  FUNC_2(&VAR_1->state_mutex);
 }

 if (VAR_4 && *VAR_2) {
  FUNC_5(*VAR_2 < 0);
  FUNC_8(VAR_3, "%s%s result %d",
        FUNC_9(VAR_0, &VAR_1->flags) ? "child " : "",
        FUNC_4(VAR_1->op_type), *VAR_2);
 }
 return VAR_4;
}
