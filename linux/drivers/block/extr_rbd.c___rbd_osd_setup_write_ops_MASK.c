
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_5__ {int oe_len; int oe_off; } ;
struct rbd_obj_request {int flags; TYPE_2__ ex; TYPE_3__* img_request; } ;
struct TYPE_4__ {int object_size; } ;
struct rbd_device {TYPE_1__ layout; } ;
struct ceph_osd_request {struct rbd_obj_request* r_priv; } ;
struct TYPE_6__ {struct rbd_device* rbd_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ceph_osd_request*,int ,int ,int ) ;
 int FUNC_1 (struct ceph_osd_request*,int,int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_2 (struct rbd_obj_request*) ;
 int FUNC_3 (struct ceph_osd_request*,int) ;
 int FUNC_4 (struct rbd_device*) ;

__attribute__((used)) static void FUNC_5(struct ceph_osd_request *VAR_3,
          int VAR_4)
{
 struct rbd_obj_request *VAR_5 = VAR_3->r_priv;
 struct rbd_device *VAR_6 = VAR_5->img_request->rbd_dev;
 u16 VAR_7;

 if (!FUNC_4(VAR_6) ||
     !(VAR_5->flags & VAR_2)) {
  FUNC_0(VAR_3, VAR_4++,
        VAR_6->layout.object_size,
        VAR_6->layout.object_size);
 }

 if (FUNC_2(VAR_5))
  VAR_7 = VAR_1;
 else
  VAR_7 = VAR_0;

 FUNC_1(VAR_3, VAR_4, VAR_7,
          VAR_5->ex.oe_off, VAR_5->ex.oe_len, 0, 0);
 FUNC_3(VAR_3, VAR_4);
}
