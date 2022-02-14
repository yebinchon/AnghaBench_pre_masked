
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct socket {int dummy; } ;
struct TYPE_7__ {struct rx_srcavail_state* rdma_inflight; } ;
struct sdp_sock {int qp; TYPE_1__ tx_ring; } ;
struct rx_srcavail_state {int busy; scalar_t__ used; scalar_t__ vaddr; TYPE_4__* fmr; TYPE_2__* umem; int rkey; } ;
struct ib_sge {int lkey; int length; int addr; } ;
struct TYPE_11__ {scalar_t__ remote_addr; int rkey; } ;
struct TYPE_12__ {TYPE_5__ rdma; } ;
struct ib_send_wr {int num_sge; scalar_t__ send_flags; struct ib_sge* sg_list; TYPE_6__ wr; int wr_id; int * next; int opcode; int * member_0; } ;
struct TYPE_10__ {TYPE_3__* fmr; } ;
struct TYPE_9__ {int lkey; } ;
struct TYPE_8__ {int length; int offset; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct ib_send_wr*,struct ib_send_wr**) ;
 struct sdp_sock* FUNC_1 (struct socket*) ;

__attribute__((used)) static int FUNC_2(struct socket *VAR_3, struct rx_srcavail_state *VAR_4)
{
 struct sdp_sock *VAR_5 = FUNC_1(VAR_3);
 struct ib_send_wr *VAR_6;
 struct ib_send_wr VAR_7 = { ((void*)0) };
 struct ib_sge VAR_8;

 VAR_7.opcode = VAR_1;
 VAR_7.next = ((void*)0);
 VAR_7.wr_id = VAR_2;
 VAR_7.wr.rdma.rkey = VAR_4->rkey;
 VAR_7.send_flags = 0;

 VAR_5->tx_ring.rdma_inflight = VAR_4;

 VAR_8.addr = VAR_4->umem->offset;
 VAR_8.length = VAR_4->umem->length;
 VAR_8.lkey = VAR_4->fmr->fmr->lkey;

 VAR_7.wr.rdma.remote_addr = VAR_4->vaddr + VAR_4->used;
 VAR_7.num_sge = 1;
 VAR_7.sg_list = &VAR_8;
 VAR_4->busy++;

 VAR_7.send_flags = VAR_0;

 return FUNC_0(VAR_5->qp, &VAR_7, &VAR_6);
}
