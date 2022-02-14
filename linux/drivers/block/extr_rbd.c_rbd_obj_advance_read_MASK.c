
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int oe_len; } ;
struct rbd_obj_request {int read_state; TYPE_2__ ex; int num_img_extents; TYPE_1__* img_request; } ;
struct rbd_device {int parent_overlap; } ;
struct TYPE_3__ {struct rbd_device* rbd_dev; } ;


 int FUNC_0 () ;
 int VAR_0 ;



 int FUNC_1 (int) ;
 int FUNC_2 (struct rbd_obj_request*,int) ;
 int FUNC_3 (struct rbd_obj_request*) ;
 int FUNC_4 (struct rbd_obj_request*) ;
 int FUNC_5 (struct rbd_obj_request*) ;
 int FUNC_6 (struct rbd_obj_request*) ;
 int FUNC_7 (struct rbd_obj_request*,int,int) ;

__attribute__((used)) static bool FUNC_8(struct rbd_obj_request *VAR_1, int *VAR_2)
{
 struct rbd_device *VAR_3 = VAR_1->img_request->rbd_dev;
 int VAR_4;

again:
 switch (VAR_1->read_state) {
 case 128:
  FUNC_1(!*VAR_2);

  if (!FUNC_4(VAR_1)) {
   *VAR_2 = -VAR_0;
   VAR_1->read_state = 130;
   goto again;
  }

  VAR_4 = FUNC_6(VAR_1);
  if (VAR_4) {
   *VAR_2 = VAR_4;
   return 1;
  }
  VAR_1->read_state = 130;
  return 0;
 case 130:
  if (*VAR_2 == -VAR_0 && VAR_3->parent_overlap) {

   VAR_4 = FUNC_2(VAR_1, 0);
   if (VAR_4) {
    *VAR_2 = VAR_4;
    return 1;
   }
   if (VAR_1->num_img_extents) {
    VAR_4 = FUNC_5(VAR_1);
    if (VAR_4) {
     *VAR_2 = VAR_4;
     return 1;
    }
    VAR_1->read_state = 129;
    return 0;
   }
  }






  if (*VAR_2 == -VAR_0) {
   FUNC_7(VAR_1, 0, VAR_1->ex.oe_len);
   *VAR_2 = 0;
  } else if (*VAR_2 >= 0) {
   if (*VAR_2 < VAR_1->ex.oe_len)
    FUNC_7(VAR_1, *VAR_2,
      VAR_1->ex.oe_len - *VAR_2);
   else
    FUNC_1(*VAR_2 == VAR_1->ex.oe_len);
   *VAR_2 = 0;
  }
  return 1;
 case 129:




  if (!*VAR_2) {
   u32 VAR_5 = FUNC_3(VAR_1);

   if (VAR_5 < VAR_1->ex.oe_len)
    FUNC_7(VAR_1, VAR_5,
         VAR_1->ex.oe_len - VAR_5);
  }
  return 1;
 default:
  FUNC_0();
 }
}
