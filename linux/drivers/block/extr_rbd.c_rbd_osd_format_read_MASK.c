
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rbd_obj_request {TYPE_1__* img_request; } ;
struct ceph_osd_request {int r_snapid; int r_flags; struct rbd_obj_request* r_priv; } ;
struct TYPE_2__ {int snap_id; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct ceph_osd_request *VAR_1)
{
 struct rbd_obj_request *VAR_2 = VAR_1->r_priv;

 VAR_1->r_flags = VAR_0;
 VAR_1->r_snapid = VAR_2->img_request->snap_id;
}
