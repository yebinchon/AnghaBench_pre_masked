
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct isert_conn {int qp; TYPE_4__* login_req_buf; TYPE_2__* device; int login_req_dma; } ;
struct ib_sge {int num_sge; struct ib_sge* sg_list; TYPE_3__* wr_cqe; int lkey; int length; int addr; } ;
struct ib_recv_wr {int num_sge; struct ib_recv_wr* sg_list; TYPE_3__* wr_cqe; int lkey; int length; int addr; } ;
struct TYPE_7__ {int done; } ;
struct TYPE_8__ {TYPE_3__ rx_cqe; } ;
struct TYPE_6__ {TYPE_1__* pd; } ;
struct TYPE_5__ {int local_dma_lkey; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct ib_sge*,int *) ;
 int FUNC_1 (char*,int ,int ,int ) ;
 int FUNC_2 (char*,int) ;
 int VAR_1 ;
 int FUNC_3 (struct ib_sge*,int ,int) ;

__attribute__((used)) static int
FUNC_4(struct isert_conn *VAR_2)
{
 struct ib_recv_wr VAR_3;
 struct ib_sge VAR_4;
 int VAR_5;

 FUNC_3(&VAR_4, 0, sizeof(struct ib_sge));
 VAR_4.addr = VAR_2->login_req_dma;
 VAR_4.length = VAR_0;
 VAR_4.lkey = VAR_2->device->pd->local_dma_lkey;

 FUNC_1("Setup sge: addr: %llx length: %d 0x%08x\n",
  VAR_4.addr, VAR_4.length, VAR_4.lkey);

 VAR_2->login_req_buf->rx_cqe.done = VAR_1;

 FUNC_3(&VAR_3, 0, sizeof(struct ib_recv_wr));
 VAR_3.wr_cqe = &VAR_2->login_req_buf->rx_cqe;
 VAR_3.sg_list = &VAR_4;
 VAR_3.num_sge = 1;

 VAR_5 = FUNC_0(VAR_2->qp, &VAR_3, ((void*)0));
 if (VAR_5)
  FUNC_2("ib_post_recv() failed: %d\n", VAR_5);

 return VAR_5;
}
