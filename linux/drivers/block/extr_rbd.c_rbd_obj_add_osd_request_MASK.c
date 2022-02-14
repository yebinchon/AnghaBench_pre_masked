
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rbd_obj_request {TYPE_1__* img_request; } ;
struct ceph_osd_request {int dummy; } ;
struct TYPE_2__ {int snapc; } ;


 struct ceph_osd_request* FUNC_0 (struct rbd_obj_request*,int ,int) ;

__attribute__((used)) static struct ceph_osd_request *
FUNC_1(struct rbd_obj_request *VAR_0, int VAR_1)
{
 return FUNC_0(VAR_0, VAR_0->img_request->snapc,
      VAR_1);
}
