
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int oe_len; int oe_off; int oe_objno; } ;
struct rbd_obj_request {TYPE_1__ ex; int state_mutex; struct rbd_img_request* img_request; } ;
struct rbd_img_request {int op_type; struct rbd_device* rbd_dev; } ;
struct rbd_device {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct rbd_img_request*) ;
 int FUNC_5 (struct rbd_obj_request*,int*) ;
 int FUNC_6 (struct rbd_obj_request*,int*) ;
 int FUNC_7 (struct rbd_device*,char*,int ,int ,int ,int ,int) ;

__attribute__((used)) static bool FUNC_8(struct rbd_obj_request *VAR_0,
         int *VAR_1)
{
 struct rbd_img_request *VAR_2 = VAR_0->img_request;
 struct rbd_device *VAR_3 = VAR_2->rbd_dev;
 bool VAR_4;

 FUNC_0(&VAR_0->state_mutex);
 if (!FUNC_4(VAR_2))
  VAR_4 = FUNC_5(VAR_0, VAR_1);
 else
  VAR_4 = FUNC_6(VAR_0, VAR_1);
 FUNC_1(&VAR_0->state_mutex);

 if (VAR_4 && *VAR_1) {
  FUNC_3(*VAR_1 < 0);
  FUNC_7(VAR_3, "%s at objno %llu %llu~%llu result %d",
    FUNC_2(VAR_2->op_type), VAR_0->ex.oe_objno,
    VAR_0->ex.oe_off, VAR_0->ex.oe_len, *VAR_1);
 }
 return VAR_4;
}
