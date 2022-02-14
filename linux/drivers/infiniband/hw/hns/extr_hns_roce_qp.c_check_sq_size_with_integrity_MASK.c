
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct ib_qp_cap {scalar_t__ max_send_sge; } ;
struct hns_roce_ib_create_qp {int log_sq_bb_count; scalar_t__ log_sq_stride; } ;
struct TYPE_2__ {scalar_t__ max_wqes; scalar_t__ max_sq_sg; int max_sq_desc_sz; } ;
struct hns_roce_dev {int ib_dev; TYPE_1__ caps; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,char*,...) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct hns_roce_dev *VAR_2,
     struct ib_qp_cap *VAR_3,
     struct hns_roce_ib_create_qp *VAR_4)
{
 u32 VAR_5 = FUNC_2(VAR_2->caps.max_sq_desc_sz);
 u8 VAR_6 = FUNC_1(VAR_5);


 if ((u32)(1 << VAR_4->log_sq_bb_count) > VAR_2->caps.max_wqes ||
      VAR_4->log_sq_stride > VAR_6 ||
      VAR_4->log_sq_stride < VAR_1) {
  FUNC_0(&VAR_2->ib_dev, "check SQ size error!\n");
  return -VAR_0;
 }

 if (VAR_3->max_send_sge > VAR_2->caps.max_sq_sg) {
  FUNC_0(&VAR_2->ib_dev, "SQ sge error! max_send_sge=%d\n",
     VAR_3->max_send_sge);
  return -VAR_0;
 }

 return 0;
}
