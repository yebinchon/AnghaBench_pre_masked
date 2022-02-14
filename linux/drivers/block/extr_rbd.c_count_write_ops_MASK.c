
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rbd_obj_request {int flags; int num_img_extents; struct rbd_img_request* img_request; } ;
struct rbd_img_request {int op_type; int rbd_dev; } ;


 int FUNC_0 () ;



 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct rbd_obj_request*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct rbd_obj_request *VAR_2)
{
 struct rbd_img_request *VAR_3 = VAR_2->img_request;

 switch (VAR_3->op_type) {
 case 129:
  if (!FUNC_2(VAR_3->rbd_dev) ||
      !(VAR_2->flags & VAR_1))
   return 2;

  return 1;
 case 130:
  return 1;
 case 128:
  if (FUNC_1(VAR_2) && VAR_2->num_img_extents &&
      !(VAR_2->flags & VAR_0))
   return 2;

  return 1;
 default:
  FUNC_0();
 }
}
