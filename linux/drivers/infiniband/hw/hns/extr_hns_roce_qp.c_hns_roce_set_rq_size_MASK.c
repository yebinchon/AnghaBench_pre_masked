
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct ib_qp_cap {unsigned int max_recv_wr; int max_recv_sge; } ;
struct TYPE_4__ {scalar_t__ wqe_cnt; int max_gs; scalar_t__ max_post; void* wqe_shift; } ;
struct hns_roce_qp {TYPE_2__ rq; } ;
struct TYPE_3__ {unsigned int max_wqes; int max_rq_sg; int min_wqes; int max_rq_desc_sz; } ;
struct hns_roce_dev {TYPE_1__ caps; struct device* dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*,...) ;
 void* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (unsigned int,int) ;
 void* FUNC_3 (scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct hns_roce_dev *VAR_1,
    struct ib_qp_cap *VAR_2, bool VAR_3, int VAR_4,
    struct hns_roce_qp *VAR_5)
{
 struct device *VAR_6 = VAR_1->dev;
 u32 VAR_7;


 if (VAR_2->max_recv_wr > VAR_1->caps.max_wqes ||
     VAR_2->max_recv_sge > VAR_1->caps.max_rq_sg) {
  FUNC_0(VAR_6, "RQ WR or sge error!max_recv_wr=%d max_recv_sge=%d\n",
   VAR_2->max_recv_wr, VAR_2->max_recv_sge);
  return -VAR_0;
 }


 if (!VAR_4) {
  VAR_5->rq.wqe_cnt = 0;
  VAR_5->rq.max_gs = 0;
  VAR_2->max_recv_wr = 0;
  VAR_2->max_recv_sge = 0;
 } else {
  if (VAR_3 && (!VAR_2->max_recv_wr || !VAR_2->max_recv_sge)) {
   FUNC_0(VAR_6, "user space no need config max_recv_wr max_recv_sge\n");
   return -VAR_0;
  }

  if (VAR_1->caps.min_wqes)
   VAR_7 = FUNC_2(VAR_2->max_recv_wr, VAR_1->caps.min_wqes);
  else
   VAR_7 = VAR_2->max_recv_wr;

  VAR_5->rq.wqe_cnt = FUNC_3(VAR_7);

  if ((u32)VAR_5->rq.wqe_cnt > VAR_1->caps.max_wqes) {
   FUNC_0(VAR_6, "while setting rq size, rq.wqe_cnt too large\n");
   return -VAR_0;
  }

  VAR_7 = FUNC_2(1U, VAR_2->max_recv_sge);
  VAR_5->rq.max_gs = FUNC_3(VAR_7);
  if (VAR_1->caps.max_rq_sg <= 2)
   VAR_5->rq.wqe_shift =
     FUNC_1(VAR_1->caps.max_rq_desc_sz);
  else
   VAR_5->rq.wqe_shift =
     FUNC_1(VAR_1->caps.max_rq_desc_sz
           * VAR_5->rq.max_gs);
 }

 VAR_2->max_recv_wr = VAR_5->rq.max_post = VAR_5->rq.wqe_cnt;
 VAR_2->max_recv_sge = VAR_5->rq.max_gs;

 return 0;
}
