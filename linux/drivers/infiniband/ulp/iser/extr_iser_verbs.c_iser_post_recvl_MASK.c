
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int lkey; int length; int addr; } ;
struct TYPE_7__ {int done; } ;
struct iser_login_desc {TYPE_4__ sge; TYPE_3__ cqe; int rsp_dma; } ;
struct ib_conn {int post_recv_buf_count; int qp; TYPE_2__* device; } ;
struct iser_conn {struct iser_login_desc login_desc; struct ib_conn ib_conn; } ;
struct ib_recv_wr {int num_sge; int * next; TYPE_4__* sg_list; TYPE_3__* wr_cqe; } ;
struct TYPE_6__ {TYPE_1__* pd; } ;
struct TYPE_5__ {int local_dma_lkey; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct ib_recv_wr*,int *) ;
 int FUNC_1 (char*,int) ;
 int VAR_1 ;

int FUNC_2(struct iser_conn *VAR_2)
{
 struct ib_conn *VAR_3 = &VAR_2->ib_conn;
 struct iser_login_desc *VAR_4 = &VAR_2->login_desc;
 struct ib_recv_wr VAR_5;
 int VAR_6;

 VAR_4->sge.addr = VAR_4->rsp_dma;
 VAR_4->sge.length = VAR_0;
 VAR_4->sge.lkey = VAR_3->device->pd->local_dma_lkey;

 VAR_4->cqe.done = VAR_1;
 VAR_5.wr_cqe = &VAR_4->cqe;
 VAR_5.sg_list = &VAR_4->sge;
 VAR_5.num_sge = 1;
 VAR_5.next = ((void*)0);

 VAR_3->post_recv_buf_count++;
 VAR_6 = FUNC_0(VAR_3->qp, &VAR_5, ((void*)0));
 if (VAR_6) {
  FUNC_1("ib_post_recv failed ret=%d\n", VAR_6);
  VAR_3->post_recv_buf_count--;
 }

 return VAR_6;
}
