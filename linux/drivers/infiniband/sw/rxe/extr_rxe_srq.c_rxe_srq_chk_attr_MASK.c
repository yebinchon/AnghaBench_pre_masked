
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* queue; } ;
struct rxe_srq {scalar_t__ limit; TYPE_3__ rq; scalar_t__ error; } ;
struct TYPE_8__ {scalar_t__ max_srq_wr; scalar_t__ max_srq_sge; } ;
struct rxe_dev {TYPE_4__ attr; } ;
struct ib_srq_attr {scalar_t__ max_wr; scalar_t__ srq_limit; scalar_t__ max_sge; } ;
typedef enum ib_srq_attr_mask { ____Placeholder_ib_srq_attr_mask } ib_srq_attr_mask ;
struct TYPE_6__ {TYPE_1__* buf; } ;
struct TYPE_5__ {scalar_t__ index_mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (char*,...) ;

int FUNC_1(struct rxe_dev *VAR_6, struct rxe_srq *VAR_7,
       struct ib_srq_attr *VAR_8, enum ib_srq_attr_mask VAR_9)
{
 if (VAR_7 && VAR_7->error) {
  FUNC_0("srq in error state\n");
  goto err1;
 }

 if (VAR_9 & VAR_3) {
  if (VAR_8->max_wr > VAR_6->attr.max_srq_wr) {
   FUNC_0("max_wr(%d) > max_srq_wr(%d)\n",
    VAR_8->max_wr, VAR_6->attr.max_srq_wr);
   goto err1;
  }

  if (VAR_8->max_wr <= 0) {
   FUNC_0("max_wr(%d) <= 0\n", VAR_8->max_wr);
   goto err1;
  }

  if (VAR_7 && VAR_7->limit && (VAR_8->max_wr < VAR_7->limit)) {
   FUNC_0("max_wr (%d) < srq->limit (%d)\n",
    VAR_8->max_wr, VAR_7->limit);
   goto err1;
  }

  if (VAR_8->max_wr < VAR_5)
   VAR_8->max_wr = VAR_5;
 }

 if (VAR_9 & VAR_2) {
  if (VAR_8->srq_limit > VAR_6->attr.max_srq_wr) {
   FUNC_0("srq_limit(%d) > max_srq_wr(%d)\n",
    VAR_8->srq_limit, VAR_6->attr.max_srq_wr);
   goto err1;
  }

  if (VAR_7 && (VAR_8->srq_limit > VAR_7->rq.queue->buf->index_mask)) {
   FUNC_0("srq_limit (%d) > cur limit(%d)\n",
    VAR_8->srq_limit,
     VAR_7->rq.queue->buf->index_mask);
   goto err1;
  }
 }

 if (VAR_9 == VAR_1) {
  if (VAR_8->max_sge > VAR_6->attr.max_srq_sge) {
   FUNC_0("max_sge(%d) > max_srq_sge(%d)\n",
    VAR_8->max_sge, VAR_6->attr.max_srq_sge);
   goto err1;
  }

  if (VAR_8->max_sge < VAR_4)
   VAR_8->max_sge = VAR_4;
 }

 return 0;

err1:
 return -VAR_0;
}
