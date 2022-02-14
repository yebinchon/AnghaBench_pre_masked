
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ oe_len; int oe_off; } ;
struct rbd_obj_request {TYPE_2__ ex; TYPE_1__* img_request; } ;
struct TYPE_6__ {scalar_t__ object_size; } ;
struct rbd_device {TYPE_3__ layout; } ;
struct TYPE_4__ {struct rbd_device* rbd_dev; } ;



__attribute__((used)) static bool FUNC_0(struct rbd_obj_request *VAR_0)
{
 struct rbd_device *VAR_1 = VAR_0->img_request->rbd_dev;

 return !VAR_0->ex.oe_off &&
        VAR_0->ex.oe_len == VAR_1->layout.object_size;
}
