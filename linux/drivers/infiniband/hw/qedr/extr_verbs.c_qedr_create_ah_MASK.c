
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rdma_ah_attr {int dummy; } ;
struct qedr_ah {int attr; } ;
struct ib_udata {int dummy; } ;
struct ib_ah {int dummy; } ;


 struct qedr_ah* FUNC_0 (struct ib_ah*) ;
 int FUNC_1 (int *,struct rdma_ah_attr*) ;

int FUNC_2(struct ib_ah *VAR_0, struct rdma_ah_attr *VAR_1, u32 VAR_2,
     struct ib_udata *VAR_3)
{
 struct qedr_ah *VAR_4 = FUNC_0(VAR_0);

 FUNC_1(&VAR_4->attr, VAR_1);

 return 0;
}
