
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mthca_tavor_srq_context {int limit_watermark; } ;
struct mthca_srq {int max_gs; scalar_t__ max; int srqn; } ;
struct mthca_mailbox {struct mthca_tavor_srq_context* buf; } ;
struct mthca_dev {int dummy; } ;
struct mthca_arbel_srq_context {int limit_watermark; } ;
struct ib_srq_attr {int max_sge; scalar_t__ max_wr; void* srq_limit; } ;
struct ib_srq {int device; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct mthca_mailbox*) ;
 int FUNC_1 (struct mthca_mailbox*) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (struct mthca_dev*,int ,struct mthca_mailbox*) ;
 struct mthca_mailbox* FUNC_4 (struct mthca_dev*,int ) ;
 int FUNC_5 (struct mthca_dev*,struct mthca_mailbox*) ;
 scalar_t__ FUNC_6 (struct mthca_dev*) ;
 struct mthca_dev* FUNC_7 (int ) ;
 struct mthca_srq* FUNC_8 (struct ib_srq*) ;

int FUNC_9(struct ib_srq *VAR_1, struct ib_srq_attr *VAR_2)
{
 struct mthca_dev *VAR_3 = FUNC_7(VAR_1->device);
 struct mthca_srq *VAR_4 = FUNC_8(VAR_1);
 struct mthca_mailbox *VAR_5;
 struct mthca_arbel_srq_context *VAR_6;
 struct mthca_tavor_srq_context *VAR_7;
 int VAR_8;

 VAR_5 = FUNC_4(VAR_3, VAR_0);
 if (FUNC_0(VAR_5))
  return FUNC_1(VAR_5);

 VAR_8 = FUNC_3(VAR_3, VAR_4->srqn, VAR_5);
 if (VAR_8)
  goto out;

 if (FUNC_6(VAR_3)) {
  VAR_6 = VAR_5->buf;
  VAR_2->srq_limit = FUNC_2(VAR_6->limit_watermark);
 } else {
  VAR_7 = VAR_5->buf;
  VAR_2->srq_limit = FUNC_2(VAR_7->limit_watermark);
 }

 VAR_2->max_wr = VAR_4->max - 1;
 VAR_2->max_sge = VAR_4->max_gs;

out:
 FUNC_5(VAR_3, VAR_5);

 return VAR_8;
}
