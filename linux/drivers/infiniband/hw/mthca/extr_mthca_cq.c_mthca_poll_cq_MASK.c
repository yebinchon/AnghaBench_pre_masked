
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mthca_qp {int dummy; } ;
struct mthca_dev {int dummy; } ;
struct mthca_cq_buf {int dummy; } ;
struct TYPE_3__ {int cqe; } ;
struct mthca_cq {int cons_index; int lock; TYPE_2__* resize_buf; TYPE_1__ ibcq; struct mthca_cq_buf buf; } ;
struct ib_wc {int dummy; } ;
struct ib_cq {int device; } ;
struct TYPE_4__ {scalar_t__ state; int cqe; struct mthca_cq_buf buf; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct mthca_cq_buf*,int) ;
 int FUNC_2 (struct mthca_dev*) ;
 int FUNC_3 (struct mthca_dev*,struct mthca_cq*,struct mthca_qp**,int*,struct ib_wc*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 struct mthca_cq* FUNC_6 (struct ib_cq*) ;
 struct mthca_dev* FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (struct mthca_dev*,struct mthca_cq*,int) ;
 int FUNC_10 () ;

int FUNC_11(struct ib_cq *VAR_3, int VAR_4,
    struct ib_wc *VAR_5)
{
 struct mthca_dev *VAR_6 = FUNC_7(VAR_3->device);
 struct mthca_cq *VAR_7 = FUNC_6(VAR_3);
 struct mthca_qp *VAR_8 = ((void*)0);
 unsigned long VAR_9;
 int VAR_10 = 0;
 int VAR_11 = 0;
 int VAR_12;

 FUNC_4(&VAR_7->lock, VAR_9);

 VAR_12 = 0;
repoll:
 while (VAR_12 < VAR_4) {
  VAR_10 = FUNC_3(VAR_6, VAR_7, &VAR_8,
         &VAR_11, VAR_5 + VAR_12);
  if (VAR_10)
   break;
  ++VAR_12;
 }

 if (VAR_11) {
  FUNC_10();
  FUNC_9(VAR_6, VAR_7, VAR_11);
 }







 if (FUNC_8(VAR_10 == -VAR_2 && VAR_7->resize_buf &&
       VAR_7->resize_buf->state == VAR_0)) {







  if (!FUNC_2(VAR_6))
   VAR_7->cons_index &= VAR_7->ibcq.cqe;

  if (FUNC_0(FUNC_1(&VAR_7->resize_buf->buf,
         VAR_7->cons_index & VAR_7->resize_buf->cqe))) {
   struct mthca_cq_buf VAR_13;
   int VAR_14;

   VAR_13 = VAR_7->buf;
   VAR_14 = VAR_7->ibcq.cqe;
   VAR_7->buf = VAR_7->resize_buf->buf;
   VAR_7->ibcq.cqe = VAR_7->resize_buf->cqe;

   VAR_7->resize_buf->buf = VAR_13;
   VAR_7->resize_buf->cqe = VAR_14;
   VAR_7->resize_buf->state = VAR_1;

   goto repoll;
  }
 }

 FUNC_5(&VAR_7->lock, VAR_9);

 return VAR_10 == 0 || VAR_10 == -VAR_2 ? VAR_12 : VAR_10;
}
