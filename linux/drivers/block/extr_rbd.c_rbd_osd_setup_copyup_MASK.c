
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rbd_obj_request {int copyup_bvec_count; int copyup_bvecs; } ;
struct ceph_osd_request {struct rbd_obj_request* r_priv; } ;


 int FUNC_0 (struct ceph_osd_request*,int,char*,char*) ;
 int FUNC_1 (struct ceph_osd_request*,int,int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct ceph_osd_request *VAR_0, int VAR_1,
    u32 VAR_2)
{
 struct rbd_obj_request *VAR_3 = VAR_0->r_priv;
 int VAR_4;

 VAR_4 = FUNC_0(VAR_0, VAR_1, "rbd", "copyup");
 if (VAR_4)
  return VAR_4;

 FUNC_1(VAR_0, VAR_1, VAR_3->copyup_bvecs,
       VAR_3->copyup_bvec_count, VAR_2);
 return 0;
}
