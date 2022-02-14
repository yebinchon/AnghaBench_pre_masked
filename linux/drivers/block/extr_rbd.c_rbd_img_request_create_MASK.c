
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rbd_img_request {int op_type; int kref; int state_mutex; int object_extents; int lock_item; struct ceph_snap_context* snapc; int snap_id; struct rbd_device* rbd_dev; } ;
struct rbd_device {TYPE_1__* spec; } ;
struct ceph_snap_context {int dummy; } ;
typedef enum obj_operation_type { ____Placeholder_obj_operation_type } obj_operation_type ;
struct TYPE_2__ {int snap_id; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct rbd_img_request*) ;
 struct rbd_img_request* FUNC_2 (int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (struct rbd_device*) ;
 int FUNC_6 (struct rbd_img_request*) ;
 int VAR_1 ;

__attribute__((used)) static struct rbd_img_request *FUNC_7(
     struct rbd_device *VAR_2,
     enum obj_operation_type VAR_3,
     struct ceph_snap_context *VAR_4)
{
 struct rbd_img_request *VAR_5;

 VAR_5 = FUNC_2(VAR_1, VAR_0);
 if (!VAR_5)
  return ((void*)0);

 VAR_5->rbd_dev = VAR_2;
 VAR_5->op_type = VAR_3;
 if (!FUNC_6(VAR_5))
  VAR_5->snap_id = VAR_2->spec->snap_id;
 else
  VAR_5->snapc = VAR_4;

 if (FUNC_5(VAR_2))
  FUNC_1(VAR_5);

 FUNC_0(&VAR_5->lock_item);
 FUNC_0(&VAR_5->object_extents);
 FUNC_4(&VAR_5->state_mutex);
 FUNC_3(&VAR_5->kref);

 return VAR_5;
}
