
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct siw_srq {size_t rq_put; size_t num_rqe; int max_sge; int lock; struct siw_rqe* recvq; int kernel_verbs; } ;
struct siw_rqe {int num_sge; scalar_t__ flags; int sge; int id; } ;
struct ib_srq {int pd; } ;
struct ib_recv_wr {int num_sge; struct ib_recv_wr* next; int sg_list; int wr_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 () ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 struct siw_srq* FUNC_5 (struct ib_srq*) ;
 scalar_t__ FUNC_6 (int) ;

int FUNC_7(struct ib_srq *VAR_3, const struct ib_recv_wr *VAR_4,
        const struct ib_recv_wr **VAR_5)
{
 struct siw_srq *VAR_6 = FUNC_5(VAR_3);
 unsigned long VAR_7;
 int VAR_8 = 0;

 if (FUNC_6(!VAR_6->kernel_verbs)) {
  FUNC_1(VAR_3->pd,
      "[SRQ]: no kernel post_recv for mapped srq\n");
  VAR_8 = -VAR_0;
  goto out;
 }





 FUNC_3(&VAR_6->lock, VAR_7);

 while (VAR_4) {
  u32 VAR_9 = VAR_6->rq_put % VAR_6->num_rqe;
  struct siw_rqe *VAR_10 = &VAR_6->recvq[VAR_9];

  if (VAR_10->flags) {
   FUNC_1(VAR_3->pd, "SRQ full\n");
   VAR_8 = -VAR_1;
   break;
  }
  if (FUNC_6(VAR_4->num_sge > VAR_6->max_sge)) {
   FUNC_1(VAR_3->pd,
       "[SRQ]: too many sge's: %d\n", VAR_4->num_sge);
   VAR_8 = -VAR_0;
   break;
  }
  VAR_10->id = VAR_4->wr_id;
  VAR_10->num_sge = VAR_4->num_sge;
  FUNC_0(VAR_4->sg_list, VAR_10->sge, VAR_4->num_sge);


  FUNC_2();

  VAR_10->flags = VAR_2;

  VAR_6->rq_put++;
  VAR_4 = VAR_4->next;
 }
 FUNC_4(&VAR_6->lock, VAR_7);
out:
 if (FUNC_6(VAR_8 < 0)) {
  FUNC_1(VAR_3->pd, "[SRQ]: error %d\n", VAR_8);
  *VAR_5 = VAR_4;
 }
 return VAR_8;
}
