
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rdma_ah_attr {scalar_t__ type; } ;
struct ib_udata {int dummy; } ;
struct ib_ah {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct ib_ah*,struct rdma_ah_attr*) ;
 int FUNC_1 (struct ib_ah*,struct rdma_ah_attr*) ;
 int FUNC_2 (struct rdma_ah_attr*) ;

int FUNC_3(struct ib_ah *VAR_3, struct rdma_ah_attr *VAR_4,
        u32 VAR_5, struct ib_udata *VAR_6)

{
 if (VAR_4->type == VAR_2) {
  if (!(FUNC_2(VAR_4) & VAR_1))
   return -VAR_0;
  return FUNC_1(VAR_3, VAR_4);
 }

 FUNC_0(VAR_3, VAR_4);
 return 0;
}
