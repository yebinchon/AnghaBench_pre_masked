
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rbd_obj_request {TYPE_2__* img_request; int num_img_extents; } ;
struct TYPE_4__ {TYPE_1__* snapc; } ;
struct TYPE_3__ {int num_snaps; } ;


 scalar_t__ FUNC_0 (struct rbd_obj_request*) ;

__attribute__((used)) static bool FUNC_1(struct rbd_obj_request *VAR_0)
{
 if (!VAR_0->num_img_extents ||
     (FUNC_0(VAR_0) &&
      !VAR_0->img_request->snapc->num_snaps))
  return 0;

 return 1;
}
