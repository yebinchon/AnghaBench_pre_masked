
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int oe_len; int oe_off; } ;
struct rbd_obj_request {TYPE_1__ ex; } ;
struct ceph_osd_request {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct ceph_osd_request*) ;
 int FUNC_1 (struct ceph_osd_request*) ;
 struct ceph_osd_request* FUNC_2 (struct rbd_obj_request*,int *,int) ;
 int FUNC_3 (struct ceph_osd_request*,int ) ;
 int FUNC_4 (struct ceph_osd_request*,int ,int ,int ,int ,int ,int ) ;
 int FUNC_5 (struct ceph_osd_request*) ;
 int FUNC_6 (struct ceph_osd_request*,int ) ;
 int FUNC_7 (struct ceph_osd_request*) ;

__attribute__((used)) static int FUNC_8(struct rbd_obj_request *VAR_2)
{
 struct ceph_osd_request *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_2(VAR_2, ((void*)0), 1);
 if (FUNC_0(VAR_3))
  return FUNC_1(VAR_3);

 FUNC_4(VAR_3, 0, VAR_0,
          VAR_2->ex.oe_off, VAR_2->ex.oe_len, 0, 0);
 FUNC_6(VAR_3, 0);
 FUNC_5(VAR_3);

 VAR_4 = FUNC_3(VAR_3, VAR_1);
 if (VAR_4)
  return VAR_4;

 FUNC_7(VAR_3);
 return 0;
}
