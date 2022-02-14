
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rdma_ah_attr {int dummy; } ;
struct ib_pd {int device; } ;
struct ib_gid_attr {int dummy; } ;
struct ib_ah {int dummy; } ;


 struct ib_ah* FUNC_0 (int) ;
 struct ib_ah* FUNC_1 (struct ib_pd*,struct rdma_ah_attr*,int ,int *) ;
 int FUNC_2 (int ,struct rdma_ah_attr*,struct ib_gid_attr const**) ;
 int FUNC_3 (struct rdma_ah_attr*,struct ib_gid_attr const*) ;

struct ib_ah *FUNC_4(struct ib_pd *VAR_0, struct rdma_ah_attr *VAR_1,
        u32 VAR_2)
{
 const struct ib_gid_attr *VAR_3;
 struct ib_ah *VAR_4;
 int VAR_5;

 VAR_5 = FUNC_2(VAR_0->device, VAR_1, &VAR_3);
 if (VAR_5)
  return FUNC_0(VAR_5);

 VAR_4 = FUNC_1(VAR_0, VAR_1, VAR_2, ((void*)0));

 FUNC_3(VAR_1, VAR_3);
 return VAR_4;
}
