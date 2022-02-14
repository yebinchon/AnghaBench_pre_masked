
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct srp_target_port {int lkey; } ;
struct srp_rdma_ch {int qp; struct srp_target_port* target; } ;
struct TYPE_3__ {int done; } ;
struct srp_iu {scalar_t__ num_sge; TYPE_2__* sge; TYPE_1__ cqe; int dma; } ;
struct ib_send_wr {scalar_t__ num_sge; int send_flags; int opcode; TYPE_2__* sg_list; TYPE_1__* wr_cqe; int * next; } ;
struct TYPE_4__ {int length; int lkey; int addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,struct ib_send_wr*,int *) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_2(struct srp_rdma_ch *VAR_5, struct srp_iu *VAR_6, int VAR_7)
{
 struct srp_target_port *VAR_8 = VAR_5->target;
 struct ib_send_wr VAR_9;

 if (FUNC_0(VAR_6->num_sge > VAR_3))
  return -VAR_0;

 VAR_6->sge[0].addr = VAR_6->dma;
 VAR_6->sge[0].length = VAR_7;
 VAR_6->sge[0].lkey = VAR_8->lkey;

 VAR_6->cqe.done = VAR_4;

 VAR_9.next = ((void*)0);
 VAR_9.wr_cqe = &VAR_6->cqe;
 VAR_9.sg_list = &VAR_6->sge[0];
 VAR_9.num_sge = VAR_6->num_sge;
 VAR_9.opcode = VAR_2;
 VAR_9.send_flags = VAR_1;

 return FUNC_1(VAR_5->qp, &VAR_9, ((void*)0));
}
