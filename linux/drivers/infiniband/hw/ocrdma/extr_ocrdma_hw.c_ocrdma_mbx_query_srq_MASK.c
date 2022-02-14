
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dbid; } ;
struct TYPE_4__ {int device; } ;
struct ocrdma_srq {TYPE_1__ rq; TYPE_2__ ibsrq; } ;
struct ocrdma_query_srq_rsp {int srq_lmt_max_sge; int max_rqe_pdid; } ;
struct ocrdma_query_srq {int id; } ;
struct ocrdma_mqe {int dummy; } ;
struct ocrdma_dev {int dummy; } ;
struct ib_srq_attr {int max_sge; int max_wr; int srq_limit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct ocrdma_dev* FUNC_0 (int ) ;
 int FUNC_1 (struct ocrdma_query_srq*) ;
 struct ocrdma_query_srq* FUNC_2 (int ,int) ;
 int FUNC_3 (struct ocrdma_dev*,struct ocrdma_mqe*) ;

int FUNC_4(struct ocrdma_srq *VAR_5, struct ib_srq_attr *VAR_6)
{
 int VAR_7 = -VAR_0;
 struct ocrdma_query_srq *VAR_8;
 struct ocrdma_dev *VAR_9 = FUNC_0(VAR_5->ibsrq.device);

 VAR_8 = FUNC_2(VAR_1, sizeof(*VAR_8));
 if (!VAR_8)
  return VAR_7;
 VAR_8->id = VAR_5->rq.dbid;
 VAR_7 = FUNC_3(VAR_9, (struct ocrdma_mqe *)VAR_8);
 if (VAR_7 == 0) {
  struct ocrdma_query_srq_rsp *VAR_10 =
      (struct ocrdma_query_srq_rsp *)VAR_8;
  VAR_6->max_sge =
      VAR_10->srq_lmt_max_sge &
      VAR_3;
  VAR_6->max_wr =
      VAR_10->max_rqe_pdid >> VAR_2;
  VAR_6->srq_limit = VAR_10->srq_lmt_max_sge >>
      VAR_4;
 }
 FUNC_1(VAR_8);
 return VAR_7;
}
