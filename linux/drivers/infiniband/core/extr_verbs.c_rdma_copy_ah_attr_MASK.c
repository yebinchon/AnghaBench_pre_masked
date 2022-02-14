
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ sgid_attr; } ;
struct rdma_ah_attr {TYPE_1__ grh; } ;


 int FUNC_0 (scalar_t__) ;

void FUNC_1(struct rdma_ah_attr *VAR_0,
         const struct rdma_ah_attr *VAR_1)
{
 *VAR_0 = *VAR_1;
 if (VAR_0->grh.sgid_attr)
  FUNC_0(VAR_0->grh.sgid_attr);
}
