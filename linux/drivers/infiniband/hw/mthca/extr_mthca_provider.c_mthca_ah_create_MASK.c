
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rdma_ah_attr {int dummy; } ;
struct mthca_ah {int dummy; } ;
struct ib_udata {int dummy; } ;
struct ib_ah {int pd; int device; } ;


 int FUNC_0 (int ,int ,struct rdma_ah_attr*,struct mthca_ah*) ;
 struct mthca_ah* FUNC_1 (struct ib_ah*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct ib_ah *VAR_0, struct rdma_ah_attr *VAR_1,
      u32 VAR_2, struct ib_udata *VAR_3)

{
 struct mthca_ah *VAR_4 = FUNC_1(VAR_0);

 return FUNC_0(FUNC_2(VAR_0->device), FUNC_3(VAR_0->pd), VAR_1,
          VAR_4);
}
