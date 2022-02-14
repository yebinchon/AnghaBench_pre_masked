
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int done; } ;
struct srp_request {TYPE_2__ reg_cqe; } ;
struct srp_rdma_ch {int qp; } ;
struct TYPE_3__ {int invalidate_rkey; } ;
struct ib_send_wr {TYPE_2__* wr_cqe; TYPE_1__ ex; int send_flags; int num_sge; int * next; int opcode; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct ib_send_wr*,int *) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_1(struct srp_request *VAR_2, struct srp_rdma_ch *VAR_3,
  u32 VAR_4)
{
 struct ib_send_wr VAR_5 = {
  .opcode = VAR_0,
  .next = ((void*)0),
  .num_sge = 0,
  .send_flags = 0,
  .ex.invalidate_rkey = VAR_4,
 };

 VAR_5.wr_cqe = &VAR_2->reg_cqe;
 VAR_2->reg_cqe.done = VAR_1;
 return FUNC_0(VAR_3->qp, &VAR_5, ((void*)0));
}
