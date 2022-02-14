
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int invalidate_rkey; } ;
struct TYPE_7__ {int * next; TYPE_2__ ex; int opcode; } ;
struct TYPE_5__ {int wr; } ;
struct rdma_rw_reg_ctx {TYPE_3__ inv_wr; TYPE_1__ reg_wr; TYPE_4__* mr; } ;
struct TYPE_8__ {int lkey; scalar_t__ need_inval; } ;


 int VAR_0 ;

__attribute__((used)) static inline int FUNC_0(struct rdma_rw_reg_ctx *VAR_1)
{
 int VAR_2 = 0;

 if (VAR_1->mr->need_inval) {
  VAR_1->inv_wr.opcode = VAR_0;
  VAR_1->inv_wr.ex.invalidate_rkey = VAR_1->mr->lkey;
  VAR_1->inv_wr.next = &VAR_1->reg_wr.wr;
  VAR_2++;
 } else {
  VAR_1->inv_wr.next = ((void*)0);
 }

 return VAR_2;
}
