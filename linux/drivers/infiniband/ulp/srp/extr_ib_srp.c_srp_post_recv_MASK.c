
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct srp_target_port {int lkey; } ;
struct srp_rdma_ch {int qp; struct srp_target_port* target; } ;
struct TYPE_2__ {int done; } ;
struct srp_iu {TYPE_1__ cqe; int size; int dma; } ;
struct ib_sge {int lkey; int length; int addr; } ;
struct ib_recv_wr {int num_sge; struct ib_sge* sg_list; TYPE_1__* wr_cqe; int * next; } ;


 int FUNC_0 (int ,struct ib_recv_wr*,int *) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(struct srp_rdma_ch *VAR_1, struct srp_iu *VAR_2)
{
 struct srp_target_port *VAR_3 = VAR_1->target;
 struct ib_recv_wr VAR_4;
 struct ib_sge VAR_5;

 VAR_5.addr = VAR_2->dma;
 VAR_5.length = VAR_2->size;
 VAR_5.lkey = VAR_3->lkey;

 VAR_2->cqe.done = VAR_0;

 VAR_4.next = ((void*)0);
 VAR_4.wr_cqe = &VAR_2->cqe;
 VAR_4.sg_list = &VAR_5;
 VAR_4.num_sge = 1;

 return FUNC_0(VAR_1->qp, &VAR_4, ((void*)0));
}
