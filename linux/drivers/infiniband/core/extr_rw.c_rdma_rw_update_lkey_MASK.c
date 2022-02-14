
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int lkey; } ;
struct TYPE_4__ {int key; } ;
struct rdma_rw_reg_ctx {TYPE_3__* mr; TYPE_2__ sge; TYPE_1__ reg_wr; } ;
struct TYPE_6__ {int need_inval; int lkey; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*,int ) ;

__attribute__((used)) static void FUNC_2(struct rdma_rw_reg_ctx *VAR_0, bool VAR_1)
{
 VAR_0->mr->need_inval = VAR_1;
 FUNC_1(VAR_0->mr, FUNC_0(VAR_0->mr->lkey));
 VAR_0->reg_wr.key = VAR_0->mr->lkey;
 VAR_0->sge.lkey = VAR_0->mr->lkey;
}
