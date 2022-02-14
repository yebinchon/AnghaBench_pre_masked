
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rbd_obj_request {int flags; } ;
struct ceph_osd_request {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ceph_osd_request*) ;
 int FUNC_1 (struct ceph_osd_request*) ;
 int VAR_1 ;
 int FUNC_2 (struct ceph_osd_request*,int ) ;
 int FUNC_3 (struct rbd_obj_request*) ;
 struct ceph_osd_request* FUNC_4 (struct rbd_obj_request*,int) ;
 int FUNC_5 (struct ceph_osd_request*) ;
 int FUNC_6 (struct ceph_osd_request*,int ) ;
 int FUNC_7 (struct ceph_osd_request*,int) ;
 int FUNC_8 (struct ceph_osd_request*) ;

__attribute__((used)) static int FUNC_9(struct rbd_obj_request *VAR_2)
{
 struct ceph_osd_request *VAR_3;
 int VAR_4 = FUNC_3(VAR_2);
 int VAR_5 = 0;
 int VAR_6;

 if (VAR_2->flags & VAR_1)
  VAR_4++;

 VAR_3 = FUNC_4(VAR_2, VAR_4);
 if (FUNC_0(VAR_3))
  return FUNC_1(VAR_3);

 if (VAR_2->flags & VAR_1) {
  VAR_6 = FUNC_6(VAR_3, VAR_5++);
  if (VAR_6)
   return VAR_6;
 }

 FUNC_7(VAR_3, VAR_5);
 FUNC_5(VAR_3);

 VAR_6 = FUNC_2(VAR_3, VAR_0);
 if (VAR_6)
  return VAR_6;

 FUNC_8(VAR_3);
 return 0;
}
