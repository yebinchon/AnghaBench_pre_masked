
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int max_gs; int max; int wqe_shift; void* last; int lock; } ;
struct mthca_qp {int refcount; int sq_policy; int send_wqe_offset; TYPE_1__ rq; TYPE_1__ sq; scalar_t__ resp_depth; scalar_t__ atomic_rd_en; int state; int mutex; int wait; } ;
struct mthca_pd {int dummy; } ;
struct mthca_next_seg {void* nda_op; void* ee_nds; } ;
struct mthca_dev {int dummy; } ;
struct mthca_data_seg {void* lkey; } ;
struct mthca_cq {int dummy; } ;
struct ib_udata {int dummy; } ;
typedef enum ib_sig_type { ____Placeholder_ib_sig_type } ib_sig_type ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int) ;
 void* FUNC_1 (struct mthca_qp*,int) ;
 void* FUNC_2 (struct mthca_qp*,int) ;
 void* FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct mthca_dev*,struct mthca_pd*,struct mthca_qp*) ;
 int FUNC_6 (struct mthca_dev*,struct mthca_qp*) ;
 int FUNC_7 (struct mthca_dev*,struct mthca_pd*,struct mthca_qp*,struct ib_udata*) ;
 int FUNC_8 (struct mthca_dev*,struct mthca_qp*) ;
 scalar_t__ FUNC_9 (struct mthca_dev*) ;
 int FUNC_10 (struct mthca_dev*,struct mthca_qp*) ;
 int FUNC_11 (struct mthca_dev*,struct mthca_qp*) ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;

__attribute__((used)) static int FUNC_15(struct mthca_dev *VAR_2,
     struct mthca_pd *VAR_3,
     struct mthca_cq *VAR_4,
     struct mthca_cq *VAR_5,
     enum ib_sig_type VAR_6,
     struct mthca_qp *VAR_7,
     struct ib_udata *VAR_8)
{
 int VAR_9;
 int VAR_10;
 struct mthca_next_seg *VAR_11;

 VAR_7->refcount = 1;
 FUNC_4(&VAR_7->wait);
 FUNC_13(&VAR_7->mutex);
 VAR_7->state = VAR_0;
 VAR_7->atomic_rd_en = 0;
 VAR_7->resp_depth = 0;
 VAR_7->sq_policy = VAR_6;
 FUNC_12(&VAR_7->sq);
 FUNC_12(&VAR_7->rq);

 FUNC_14(&VAR_7->sq.lock);
 FUNC_14(&VAR_7->rq.lock);

 VAR_9 = FUNC_10(VAR_2, VAR_7);
 if (VAR_9)
  return VAR_9;

 VAR_9 = FUNC_7(VAR_2, VAR_3, VAR_7, VAR_8);
 if (VAR_9) {
  FUNC_11(VAR_2, VAR_7);
  return VAR_9;
 }

 FUNC_5(VAR_2, VAR_3, VAR_7);






 if (VAR_8)
  return 0;

 VAR_9 = FUNC_6(VAR_2, VAR_7);
 if (VAR_9) {
  FUNC_8(VAR_2, VAR_7);
  FUNC_11(VAR_2, VAR_7);
  return VAR_9;
 }

 if (FUNC_9(VAR_2)) {
  struct mthca_data_seg *VAR_12;
  int VAR_13 = (sizeof (struct mthca_next_seg) +
       VAR_7->rq.max_gs * sizeof (struct mthca_data_seg)) / 16;

  for (VAR_10 = 0; VAR_10 < VAR_7->rq.max; ++VAR_10) {
   VAR_11 = FUNC_1(VAR_7, VAR_10);
   VAR_11->nda_op = FUNC_0(((VAR_10 + 1) & (VAR_7->rq.max - 1)) <<
         VAR_7->rq.wqe_shift);
   VAR_11->ee_nds = FUNC_0(VAR_13);

   for (VAR_12 = (void *) (VAR_11 + 1);
        (void *) VAR_12 < (void *) VAR_11 + (1 << VAR_7->rq.wqe_shift);
        ++VAR_12)
    VAR_12->lkey = FUNC_0(VAR_1);
  }

  for (VAR_10 = 0; VAR_10 < VAR_7->sq.max; ++VAR_10) {
   VAR_11 = FUNC_2(VAR_7, VAR_10);
   VAR_11->nda_op = FUNC_0((((VAR_10 + 1) & (VAR_7->sq.max - 1)) <<
          VAR_7->sq.wqe_shift) +
         VAR_7->send_wqe_offset);
  }
 } else {
  for (VAR_10 = 0; VAR_10 < VAR_7->rq.max; ++VAR_10) {
   VAR_11 = FUNC_1(VAR_7, VAR_10);
   VAR_11->nda_op = FUNC_3((((VAR_10 + 1) % VAR_7->rq.max) <<
           VAR_7->rq.wqe_shift) | 1);
  }

 }

 VAR_7->sq.last = FUNC_2(VAR_7, VAR_7->sq.max - 1);
 VAR_7->rq.last = FUNC_1(VAR_7, VAR_7->rq.max - 1);

 return 0;
}
