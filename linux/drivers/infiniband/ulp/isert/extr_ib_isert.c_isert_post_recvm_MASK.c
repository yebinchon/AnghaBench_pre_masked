
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct isert_conn {struct ib_recv_wr* rx_wr; int qp; struct iser_rx_desc* rx_descs; } ;
struct iser_rx_desc {int in_use; int rx_sg; int rx_cqe; } ;
struct ib_recv_wr {int num_sge; struct ib_recv_wr* next; int * sg_list; int * wr_cqe; } ;


 int FUNC_0 (int ,struct ib_recv_wr*,int *) ;
 int FUNC_1 (char*,int) ;

__attribute__((used)) static int
FUNC_2(struct isert_conn *VAR_0, u32 VAR_1)
{
 struct ib_recv_wr *VAR_2;
 int VAR_3, VAR_4;
 struct iser_rx_desc *VAR_5;

 for (VAR_2 = VAR_0->rx_wr, VAR_3 = 0; VAR_3 < VAR_1; VAR_3++, VAR_2++) {
  VAR_5 = &VAR_0->rx_descs[VAR_3];

  VAR_2->wr_cqe = &VAR_5->rx_cqe;
  VAR_2->sg_list = &VAR_5->rx_sg;
  VAR_2->num_sge = 1;
  VAR_2->next = VAR_2 + 1;
  VAR_5->in_use = 0;
 }
 VAR_2--;
 VAR_2->next = ((void*)0);

 VAR_4 = FUNC_0(VAR_0->qp, VAR_0->rx_wr, ((void*)0));
 if (VAR_4)
  FUNC_1("ib_post_recv() failed with ret: %d\n", VAR_4);

 return VAR_4;
}
