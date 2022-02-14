
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct ib_gid_attr const* sgid_attr; } ;
struct rdma_ah_attr {TYPE_1__ grh; } ;
struct ib_gid_attr {int dummy; } ;


 int FUNC_0 (struct rdma_ah_attr*) ;

__attribute__((used)) static void FUNC_1(struct rdma_ah_attr *VAR_0,
      const struct ib_gid_attr *VAR_1)
{




 if (VAR_0->grh.sgid_attr == VAR_1)
  return;






 FUNC_0(VAR_0);
}
