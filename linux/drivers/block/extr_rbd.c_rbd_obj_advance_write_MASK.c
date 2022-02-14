
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rbd_obj_request {int write_state; int flags; int copyup_state; TYPE_1__* img_request; } ;
struct rbd_device {int dummy; } ;
struct TYPE_2__ {struct rbd_device* rbd_dev; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;






 int FUNC_1 (int) ;
 int FUNC_2 (struct rbd_obj_request*,int*) ;
 int FUNC_3 (struct rbd_obj_request*) ;
 int FUNC_4 (struct rbd_obj_request*) ;
 int FUNC_5 (struct rbd_obj_request*) ;
 int FUNC_6 (struct rbd_obj_request*) ;
 int FUNC_7 (struct rbd_device*,char*,int) ;

__attribute__((used)) static bool FUNC_8(struct rbd_obj_request *VAR_4, int *VAR_5)
{
 struct rbd_device *VAR_6 = VAR_4->img_request->rbd_dev;
 int VAR_7;

again:
 switch (VAR_4->write_state) {
 case 129:
  FUNC_1(!*VAR_5);

  if (FUNC_3(VAR_4))
   return 1;

  VAR_7 = FUNC_6(VAR_4);
  if (VAR_7 < 0) {
   *VAR_5 = VAR_7;
   return 1;
  }
  VAR_4->write_state = 130;
  if (VAR_7 > 0)
   goto again;
  return 0;
 case 130:
  if (*VAR_5) {
   FUNC_7(VAR_6, "pre object map update failed: %d",
     *VAR_5);
   return 1;
  }
  VAR_7 = FUNC_4(VAR_4);
  if (VAR_7) {
   *VAR_5 = VAR_7;
   return 1;
  }
  VAR_4->write_state = 132;
  return 0;
 case 132:
  if (*VAR_5 == -VAR_0) {
   if (VAR_4->flags & VAR_2) {
    *VAR_5 = 0;
    VAR_4->copyup_state = VAR_1;
    VAR_4->write_state = 128;
    goto again;
   }




   if (VAR_4->flags & VAR_3)
    *VAR_5 = 0;
  }
  if (*VAR_5)
   return 1;

  VAR_4->write_state = 133;
  goto again;
 case 128:
  if (!FUNC_2(VAR_4, VAR_5))
   return 0;

 case 133:
  if (*VAR_5) {
   FUNC_7(VAR_6, "copyup failed: %d", *VAR_5);
   return 1;
  }
  VAR_7 = FUNC_5(VAR_4);
  if (VAR_7 < 0) {
   *VAR_5 = VAR_7;
   return 1;
  }
  VAR_4->write_state = 131;
  if (VAR_7 > 0)
   goto again;
  return 0;
 case 131:
  if (*VAR_5)
   FUNC_7(VAR_6, "post object map update failed: %d",
     *VAR_5);
  return 1;
 default:
  FUNC_0();
 }
}
