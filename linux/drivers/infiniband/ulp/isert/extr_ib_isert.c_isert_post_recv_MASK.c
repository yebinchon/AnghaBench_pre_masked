
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isert_conn {int qp; } ;
struct iser_rx_desc {int in_use; int rx_sg; int rx_cqe; } ;
struct ib_recv_wr {int num_sge; int * next; int * sg_list; int * wr_cqe; } ;


 int FUNC_0 (int ,struct ib_recv_wr*,int *) ;
 int FUNC_1 (char*,int) ;

__attribute__((used)) static int
FUNC_2(struct isert_conn *VAR_0, struct iser_rx_desc *VAR_1)
{
 struct ib_recv_wr VAR_2;
 int VAR_3;

 if (!VAR_1->in_use) {




  return 0;
 }

 VAR_1->in_use = 0;
 VAR_2.wr_cqe = &VAR_1->rx_cqe;
 VAR_2.sg_list = &VAR_1->rx_sg;
 VAR_2.num_sge = 1;
 VAR_2.next = ((void*)0);

 VAR_3 = FUNC_0(VAR_0->qp, &VAR_2, ((void*)0));
 if (VAR_3)
  FUNC_1("ib_post_recv() failed with ret: %d\n", VAR_3);

 return VAR_3;
}
