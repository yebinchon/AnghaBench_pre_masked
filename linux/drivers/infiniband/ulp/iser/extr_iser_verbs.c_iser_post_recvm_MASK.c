
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int done; } ;
struct iser_rx_desc {int rx_sg; TYPE_1__ cqe; } ;
struct ib_conn {int post_recv_buf_count; struct ib_recv_wr* rx_wr; int qp; } ;
struct iser_conn {unsigned int rx_desc_head; unsigned int qp_max_recv_dtos_mask; struct iser_rx_desc* rx_descs; struct ib_conn ib_conn; } ;
struct ib_recv_wr {int num_sge; struct ib_recv_wr* next; int * sg_list; TYPE_1__* wr_cqe; } ;


 int FUNC_0 (int ,struct ib_recv_wr*,int *) ;
 int FUNC_1 (char*,int) ;
 int VAR_0 ;

int FUNC_2(struct iser_conn *VAR_1, int VAR_2)
{
 struct ib_conn *VAR_3 = &VAR_1->ib_conn;
 unsigned int VAR_4 = VAR_1->rx_desc_head;
 struct iser_rx_desc *VAR_5;
 struct ib_recv_wr *VAR_6;
 int VAR_7, VAR_8;

 for (VAR_6 = VAR_3->rx_wr, VAR_7 = 0; VAR_7 < VAR_2; VAR_7++, VAR_6++) {
  VAR_5 = &VAR_1->rx_descs[VAR_4];
  VAR_5->cqe.done = VAR_0;
  VAR_6->wr_cqe = &VAR_5->cqe;
  VAR_6->sg_list = &VAR_5->rx_sg;
  VAR_6->num_sge = 1;
  VAR_6->next = VAR_6 + 1;
  VAR_4 = (VAR_4 + 1) & VAR_1->qp_max_recv_dtos_mask;
 }

 VAR_6--;
 VAR_6->next = ((void*)0);

 VAR_3->post_recv_buf_count += VAR_2;
 VAR_8 = FUNC_0(VAR_3->qp, VAR_3->rx_wr, ((void*)0));
 if (VAR_8) {
  FUNC_1("ib_post_recv failed ret=%d\n", VAR_8);
  VAR_3->post_recv_buf_count -= VAR_2;
 } else
  VAR_1->rx_desc_head = VAR_4;

 return VAR_8;
}
