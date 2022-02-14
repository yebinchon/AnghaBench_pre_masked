
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rbd_obj_request {int num_img_extents; int img_extents; TYPE_1__* img_request; } ;
struct rbd_device {int parent_overlap; } ;
struct TYPE_2__ {struct rbd_device* rbd_dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct rbd_obj_request*,int ) ;
 int FUNC_3 (struct rbd_obj_request*) ;
 int FUNC_4 (struct rbd_obj_request*) ;
 int FUNC_5 (struct rbd_obj_request*,int ) ;

__attribute__((used)) static int FUNC_6(struct rbd_obj_request *VAR_1)
{
 struct rbd_device *VAR_2 = VAR_1->img_request->rbd_dev;
 int VAR_3;

 FUNC_1(VAR_1->num_img_extents);
 FUNC_0(VAR_1->img_extents, &VAR_1->num_img_extents,
        VAR_2->parent_overlap);
 if (!VAR_1->num_img_extents) {






  return FUNC_2(VAR_1, VAR_0);
 }

 VAR_3 = FUNC_5(VAR_1, FUNC_3(VAR_1));
 if (VAR_3)
  return VAR_3;

 return FUNC_4(VAR_1);
}
