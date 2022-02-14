
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct ib_qp_cap {scalar_t__ max_send_wr; scalar_t__ max_send_sge; scalar_t__ max_inline_data; } ;
struct TYPE_8__ {int wqe_shift; int wqe_cnt; scalar_t__ max_gs; scalar_t__ max_post; scalar_t__ offset; } ;
struct TYPE_7__ {int offset; int wqe_cnt; int wqe_shift; } ;
struct TYPE_6__ {int sge_cnt; int sge_shift; int offset; } ;
struct hns_roce_qp {int buff_size; TYPE_4__ sq; TYPE_3__ rq; TYPE_2__ sge; } ;
struct TYPE_5__ {scalar_t__ max_wqes; scalar_t__ max_sq_sg; scalar_t__ max_sq_inline; scalar_t__ min_wqes; int mtt_buf_pg_sz; int max_sq_desc_sz; } ;
struct hns_roce_dev {TYPE_1__ caps; struct device* dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int,scalar_t__) ;
 int VAR_1 ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__) ;
 void* FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct hns_roce_dev*,struct hns_roce_qp*) ;

__attribute__((used)) static int FUNC_6(struct hns_roce_dev *VAR_2,
           struct ib_qp_cap *VAR_3,
           struct hns_roce_qp *VAR_4)
{
 struct device *VAR_5 = VAR_2->dev;
 u32 VAR_6;
 u32 VAR_7;
 int VAR_8;
 int VAR_9;

 if (VAR_3->max_send_wr > VAR_2->caps.max_wqes ||
     VAR_3->max_send_sge > VAR_2->caps.max_sq_sg ||
     VAR_3->max_inline_data > VAR_2->caps.max_sq_inline) {
  FUNC_1(VAR_5, "SQ WR or sge or inline data error!\n");
  return -VAR_0;
 }

 VAR_4->sq.wqe_shift = FUNC_2(VAR_2->caps.max_sq_desc_sz);

 if (VAR_2->caps.min_wqes)
  VAR_7 = FUNC_3(VAR_3->max_send_wr, VAR_2->caps.min_wqes);
 else
  VAR_7 = VAR_3->max_send_wr;

 VAR_4->sq.wqe_cnt = FUNC_4(VAR_7);
 if ((u32)VAR_4->sq.wqe_cnt > VAR_2->caps.max_wqes) {
  FUNC_1(VAR_5, "while setting kernel sq size, sq.wqe_cnt too large\n");
  return -VAR_0;
 }


 VAR_7 = FUNC_3(1U, VAR_3->max_send_sge);
 if (VAR_2->caps.max_sq_sg <= 2)
  VAR_4->sq.max_gs = FUNC_4(VAR_7);
 else
  VAR_4->sq.max_gs = VAR_7;

 VAR_9 = FUNC_5(VAR_2, VAR_4);
 if (VAR_9) {
  FUNC_1(VAR_5, "set extend sge parameters fail\n");
  return VAR_9;
 }


 VAR_6 = 1 << (VAR_2->caps.mtt_buf_pg_sz + VAR_1);
 VAR_4->sq.offset = 0;
 VAR_8 = FUNC_0(VAR_4->sq.wqe_cnt << VAR_4->sq.wqe_shift,
     VAR_6);

 if (VAR_2->caps.max_sq_sg > 2 && VAR_4->sge.sge_cnt) {
  VAR_4->sge.sge_cnt = FUNC_3(VAR_6/(1 << VAR_4->sge.sge_shift),
     (u32)VAR_4->sge.sge_cnt);
  VAR_4->sge.offset = VAR_8;
  VAR_8 += FUNC_0(VAR_4->sge.sge_cnt <<
       VAR_4->sge.sge_shift, VAR_6);
 }

 VAR_4->rq.offset = VAR_8;
 VAR_8 += FUNC_0((VAR_4->rq.wqe_cnt << VAR_4->rq.wqe_shift),
      VAR_6);
 VAR_4->buff_size = VAR_8;


 VAR_3->max_send_wr = VAR_4->sq.max_post = VAR_4->sq.wqe_cnt;
 VAR_3->max_send_sge = VAR_4->sq.max_gs;


 VAR_3->max_inline_data = 0;

 return 0;
}
