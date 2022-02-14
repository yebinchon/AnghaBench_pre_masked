
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int oe_len; int oe_off; } ;
struct rbd_obj_request {int flags; TYPE_1__ ex; int num_img_extents; } ;
struct ceph_osd_request {struct rbd_obj_request* r_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ceph_osd_request*,int,int ,int ,int ,int ,int ) ;
 int FUNC_1 (struct ceph_osd_request*,int,int ,int ) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (struct rbd_obj_request*) ;
 int FUNC_4 (struct rbd_obj_request*) ;

__attribute__((used)) static void FUNC_5(struct ceph_osd_request *VAR_2,
     int VAR_3)
{
 struct rbd_obj_request *VAR_4 = VAR_2->r_priv;

 if (FUNC_3(VAR_4) && !VAR_4->num_img_extents) {
  FUNC_2(VAR_4->flags & VAR_1);
  FUNC_1(VAR_2, VAR_3, VAR_0, 0);
 } else {
  FUNC_0(VAR_2, VAR_3,
           FUNC_4(VAR_4),
           VAR_4->ex.oe_off, VAR_4->ex.oe_len,
           0, 0);
 }
}
