
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int done; } ;
struct TYPE_4__ {TYPE_1__ cqe; scalar_t__ offset; scalar_t__ dma; } ;
struct srpt_recv_ioctx {TYPE_2__ ioctx; } ;
struct srpt_rdma_ch {int qp; } ;
struct srpt_device {int srq; scalar_t__ use_srq; int lkey; } ;
struct ib_sge {int lkey; int length; scalar_t__ addr; } ;
struct ib_recv_wr {int num_sge; struct ib_sge* sg_list; int * next; TYPE_1__* wr_cqe; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,struct ib_recv_wr*,int *) ;
 int FUNC_2 (int ,struct ib_recv_wr*,int *) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_3(struct srpt_device *VAR_2, struct srpt_rdma_ch *VAR_3,
     struct srpt_recv_ioctx *VAR_4)
{
 struct ib_sge VAR_5;
 struct ib_recv_wr VAR_6;

 FUNC_0(!VAR_2);
 VAR_5.addr = VAR_4->ioctx.dma + VAR_4->ioctx.offset;
 VAR_5.length = VAR_0;
 VAR_5.lkey = VAR_2->lkey;

 VAR_4->ioctx.cqe.done = VAR_1;
 VAR_6.wr_cqe = &VAR_4->ioctx.cqe;
 VAR_6.next = ((void*)0);
 VAR_6.sg_list = &VAR_5;
 VAR_6.num_sge = 1;

 if (VAR_2->use_srq)
  return FUNC_2(VAR_2->srq, &VAR_6, ((void*)0));
 else
  return FUNC_1(VAR_3->qp, &VAR_6, ((void*)0));
}
