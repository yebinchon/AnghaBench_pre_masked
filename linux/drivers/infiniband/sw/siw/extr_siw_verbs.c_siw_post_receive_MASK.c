
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct siw_rqe {int num_sge; scalar_t__ flags; int sge; int id; } ;
struct TYPE_2__ {scalar_t__ state; size_t rq_size; int rq_max_sges; } ;
struct siw_qp {size_t rq_put; int state_lock; int rq_lock; TYPE_1__ attrs; struct siw_rqe* recvq; int kernel_verbs; scalar_t__ srq; } ;
struct ib_recv_wr {int num_sge; struct ib_recv_wr* next; int sg_list; int wr_id; } ;
struct ib_qp {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (struct siw_qp*,char*,...) ;
 int FUNC_3 () ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 struct siw_qp* FUNC_6 (struct ib_qp*) ;
 int FUNC_7 (int *) ;

int FUNC_8(struct ib_qp *VAR_6, const struct ib_recv_wr *VAR_7,
       const struct ib_recv_wr **VAR_8)
{
 struct siw_qp *VAR_9 = FUNC_6(VAR_6);
 unsigned long VAR_10;
 int VAR_11 = 0;

 if (VAR_9->srq) {
  *VAR_8 = VAR_7;
  return -VAR_3;
 }




 if (!FUNC_0(&VAR_9->state_lock)) {
  *VAR_8 = VAR_7;
  return -VAR_2;
 }
 if (!VAR_9->kernel_verbs) {
  FUNC_2(VAR_9, "no kernel post_recv for user mapped sq\n");
  FUNC_7(&VAR_9->state_lock);
  *VAR_8 = VAR_7;
  return -VAR_0;
 }
 if (VAR_9->attrs.state > VAR_4) {
  FUNC_7(&VAR_9->state_lock);
  *VAR_8 = VAR_7;
  return -VAR_0;
 }




 FUNC_4(&VAR_9->rq_lock, VAR_10);

 while (VAR_7) {
  u32 VAR_12 = VAR_9->rq_put % VAR_9->attrs.rq_size;
  struct siw_rqe *VAR_13 = &VAR_9->recvq[VAR_12];

  if (VAR_13->flags) {
   FUNC_2(VAR_9, "RQ full\n");
   VAR_11 = -VAR_1;
   break;
  }
  if (VAR_7->num_sge > VAR_9->attrs.rq_max_sges) {
   FUNC_2(VAR_9, "too many sge's: %d\n", VAR_7->num_sge);
   VAR_11 = -VAR_0;
   break;
  }
  VAR_13->id = VAR_7->wr_id;
  VAR_13->num_sge = VAR_7->num_sge;
  FUNC_1(VAR_7->sg_list, VAR_13->sge, VAR_7->num_sge);


  FUNC_3();

  VAR_13->flags = VAR_5;

  VAR_9->rq_put++;
  VAR_7 = VAR_7->next;
 }
 FUNC_5(&VAR_9->rq_lock, VAR_10);

 FUNC_7(&VAR_9->state_lock);

 if (VAR_11 < 0) {
  FUNC_2(VAR_9, "error %d\n", VAR_11);
  *VAR_8 = VAR_7;
 }
 return VAR_11 > 0 ? 0 : VAR_11;
}
