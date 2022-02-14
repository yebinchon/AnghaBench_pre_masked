
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rbd_obj_request {TYPE_1__* img_request; } ;
struct ceph_osd_request {struct rbd_obj_request* r_priv; } ;
struct TYPE_2__ {int op_type; } ;


 int FUNC_0 () ;



 int FUNC_1 (struct ceph_osd_request*,int) ;
 int FUNC_2 (struct ceph_osd_request*,int) ;
 int FUNC_3 (struct ceph_osd_request*,int) ;

__attribute__((used)) static void FUNC_4(struct ceph_osd_request *VAR_0,
        int VAR_1)
{
 struct rbd_obj_request *VAR_2 = VAR_0->r_priv;

 switch (VAR_2->img_request->op_type) {
 case 129:
  FUNC_2(VAR_0, VAR_1);
  break;
 case 130:
  FUNC_1(VAR_0, VAR_1);
  break;
 case 128:
  FUNC_3(VAR_0, VAR_1);
  break;
 default:
  FUNC_0();
 }
}
