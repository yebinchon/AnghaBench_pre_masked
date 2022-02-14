
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int oe_len; int oe_off; int oe_objno; } ;
struct rbd_obj_request {int num_img_extents; int img_extents; TYPE_1__ ex; TYPE_2__* img_request; } ;
struct TYPE_6__ {int object_size; } ;
struct rbd_device {int parent_overlap; TYPE_3__ layout; } ;
struct TYPE_5__ {struct rbd_device* rbd_dev; } ;


 int FUNC_0 (TYPE_3__*,int ,int ,int ,int *,int *) ;
 int FUNC_1 (int ,int *,int ) ;

__attribute__((used)) static int FUNC_2(struct rbd_obj_request *VAR_0,
        bool VAR_1)
{
 struct rbd_device *VAR_2 = VAR_0->img_request->rbd_dev;
 int VAR_3;

 if (!VAR_2->parent_overlap)
  return 0;

 VAR_3 = FUNC_0(&VAR_2->layout, VAR_0->ex.oe_objno,
      VAR_1 ? 0 : VAR_0->ex.oe_off,
      VAR_1 ? VAR_2->layout.object_size :
       VAR_0->ex.oe_len,
      &VAR_0->img_extents,
      &VAR_0->num_img_extents);
 if (VAR_3)
  return VAR_3;

 FUNC_1(VAR_0->img_extents, &VAR_0->num_img_extents,
        VAR_2->parent_overlap);
 return 0;
}
