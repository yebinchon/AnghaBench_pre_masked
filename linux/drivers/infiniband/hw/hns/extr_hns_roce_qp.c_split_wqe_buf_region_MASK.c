
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int offset; } ;
struct TYPE_6__ {scalar_t__ sge_cnt; int offset; } ;
struct TYPE_5__ {int offset; } ;
struct hns_roce_qp {int buff_size; TYPE_4__ rq; TYPE_2__ sge; TYPE_1__ sq; } ;
struct TYPE_7__ {int wqe_rq_hop_num; int wqe_sge_hop_num; int wqe_sq_hop_num; } ;
struct hns_roce_dev {TYPE_3__ caps; } ;
struct hns_roce_buf_region {int dummy; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (struct hns_roce_buf_region*,int ,int,int) ;

__attribute__((used)) static int FUNC_2(struct hns_roce_dev *VAR_0,
    struct hns_roce_qp *VAR_1,
    struct hns_roce_buf_region *VAR_2,
    int VAR_3, int VAR_4)
{
 int VAR_5 = 1 << VAR_4;
 bool VAR_6;
 int VAR_7 = 0;
 int VAR_8;
 int VAR_9;

 if (VAR_1->buff_size < 1 || VAR_3 < 1)
  return VAR_7;

 if (VAR_1->sge.sge_cnt > 0)
  VAR_6 = 1;
 else
  VAR_6 = 0;


 if (VAR_6)
  VAR_8 = VAR_1->sge.offset - VAR_1->sq.offset;
 else
  VAR_8 = VAR_1->rq.offset - VAR_1->sq.offset;

 if (VAR_8 > 0 && VAR_7 < VAR_3) {
  VAR_9 = FUNC_0(VAR_8, VAR_5);
  FUNC_1(&VAR_2[VAR_7],
      VAR_0->caps.wqe_sq_hop_num,
      VAR_1->sq.offset / VAR_5,
      VAR_9);
  VAR_7++;
 }


 if (VAR_6) {
  VAR_8 = VAR_1->rq.offset - VAR_1->sge.offset;
  if (VAR_8 > 0 && VAR_7 < VAR_3) {
   VAR_9 = FUNC_0(VAR_8, VAR_5);
   FUNC_1(&VAR_2[VAR_7],
       VAR_0->caps.wqe_sge_hop_num,
       VAR_1->sge.offset / VAR_5,
       VAR_9);
   VAR_7++;
  }
 }


 VAR_8 = VAR_1->buff_size - VAR_1->rq.offset;
 if (VAR_8 > 0) {
  VAR_9 = FUNC_0(VAR_8, VAR_5);
  FUNC_1(&VAR_2[VAR_7],
      VAR_0->caps.wqe_rq_hop_num,
      VAR_1->rq.offset / VAR_5,
      VAR_9);
  VAR_7++;
 }

 return VAR_7;
}
