
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rdma_ah_attr {scalar_t__ type; } ;
struct ib_udata {int dummy; } ;
struct ib_pd {int device; } ;
struct ib_gid_attr {int dummy; } ;
struct ib_ah {int dummy; } ;


 struct ib_ah* FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct ib_ah* FUNC_1 (struct ib_pd*,struct rdma_ah_attr*,int ,struct ib_udata*) ;
 int FUNC_2 (int ,struct rdma_ah_attr*) ;
 int FUNC_3 (int ,struct rdma_ah_attr*,struct ib_gid_attr const**) ;
 int FUNC_4 (struct rdma_ah_attr*,struct ib_gid_attr const*) ;

struct ib_ah *FUNC_5(struct ib_pd *VAR_2,
      struct rdma_ah_attr *VAR_3,
      struct ib_udata *VAR_4)
{
 const struct ib_gid_attr *VAR_5;
 struct ib_ah *VAR_6;
 int VAR_7;

 VAR_7 = FUNC_3(VAR_2->device, VAR_3, &VAR_5);
 if (VAR_7)
  return FUNC_0(VAR_7);

 if (VAR_3->type == VAR_0) {
  VAR_7 = FUNC_2(VAR_2->device, VAR_3);
  if (VAR_7) {
   VAR_6 = FUNC_0(VAR_7);
   goto out;
  }
 }

 VAR_6 = FUNC_1(VAR_2, VAR_3, VAR_1, VAR_4);

out:
 FUNC_4(VAR_3, VAR_5);
 return VAR_6;
}
