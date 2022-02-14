
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rdma_nl_cbs {int dummy; } ;
struct TYPE_2__ {int cb_table; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (unsigned int,int ) ;
 TYPE_1__* VAR_0 ;
 int FUNC_3 (int *,struct rdma_nl_cbs const*) ;

void FUNC_4(unsigned int VAR_1,
        const struct rdma_nl_cbs VAR_2[])
{
 if (FUNC_1(!FUNC_2(VAR_1, 0)) ||
     FUNC_1(FUNC_0(VAR_0[VAR_1].cb_table)))
  return;


 FUNC_3(&VAR_0[VAR_1].cb_table, VAR_2);
}
