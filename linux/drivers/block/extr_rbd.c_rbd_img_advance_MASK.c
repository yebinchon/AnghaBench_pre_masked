
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int result; int num_pending; } ;
struct rbd_img_request {int state; TYPE_1__ pending; struct rbd_device* rbd_dev; } ;
struct rbd_device {int dummy; } ;


 int FUNC_0 () ;




 int FUNC_1 (struct rbd_device*) ;
 int FUNC_2 (struct rbd_img_request*) ;
 int FUNC_3 (TYPE_1__*,int*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct rbd_img_request*) ;
 int FUNC_6 (struct rbd_img_request*) ;

__attribute__((used)) static bool FUNC_7(struct rbd_img_request *VAR_0, int *VAR_1)
{
 struct rbd_device *VAR_2 = VAR_0->rbd_dev;
 int VAR_3;

again:
 switch (VAR_0->state) {
 case 129:
  FUNC_4(!*VAR_1);

  VAR_3 = FUNC_5(VAR_0);
  if (VAR_3 < 0) {
   *VAR_1 = VAR_3;
   return 1;
  }
  VAR_0->state = 131;
  if (VAR_3 > 0)
   goto again;
  return 0;
 case 131:
  if (*VAR_1)
   return 1;

  FUNC_4(!FUNC_2(VAR_0) ||
      FUNC_1(VAR_2));

  FUNC_6(VAR_0);
  if (!VAR_0->pending.num_pending) {
   *VAR_1 = VAR_0->pending.result;
   VAR_0->state = 130;
   goto again;
  }
  VAR_0->state = 128;
  return 0;
 case 128:
  if (!FUNC_3(&VAR_0->pending, VAR_1))
   return 0;

 case 130:
  return 1;
 default:
  FUNC_0();
 }
}
