
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct TYPE_2__ {int oe_len; int oe_off; } ;
struct rbd_obj_request {int flags; TYPE_1__ ex; scalar_t__ num_img_extents; } ;
struct ceph_osd_request {struct rbd_obj_request* r_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ceph_osd_request*,int,scalar_t__,int ,int ,int ,int ) ;
 int FUNC_1 (struct ceph_osd_request*,int ,int ,int ) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (struct rbd_obj_request*) ;
 scalar_t__ FUNC_4 (struct rbd_obj_request*) ;

__attribute__((used)) static void FUNC_5(struct ceph_osd_request *VAR_5,
     int VAR_6)
{
 struct rbd_obj_request *VAR_7 = VAR_5->r_priv;
 u16 VAR_8;

 if (FUNC_3(VAR_7)) {
  if (VAR_7->num_img_extents) {
   if (!(VAR_7->flags & VAR_3))
    FUNC_1(VAR_5, VAR_6++,
      VAR_0, 0);
   VAR_8 = VAR_2;
  } else {
   FUNC_2(VAR_7->flags & VAR_4);
   FUNC_1(VAR_5, VAR_6++,
     VAR_1, 0);
   VAR_8 = 0;
  }
 } else {
  VAR_8 = FUNC_4(VAR_7);
 }

 if (VAR_8)
  FUNC_0(VAR_5, VAR_6, VAR_8,
           VAR_7->ex.oe_off, VAR_7->ex.oe_len,
           0, 0);
}
