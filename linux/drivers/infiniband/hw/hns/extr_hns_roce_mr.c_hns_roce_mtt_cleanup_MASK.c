
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hns_roce_mtt {scalar_t__ order; int mtt_type; int first_seg; } ;
struct hns_roce_mr_table {int mtt_idx_table; int mtt_idx_buddy; int mtt_srqwqe_table; int mtt_srqwqe_buddy; int mtt_cqe_table; int mtt_cqe_buddy; int mtt_table; int mtt_buddy; } ;
struct hns_roce_dev {int dev; struct hns_roce_mr_table mr_table; } ;






 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int *,int ,scalar_t__) ;
 int FUNC_2 (struct hns_roce_dev*,int *,int ,int ) ;

void FUNC_3(struct hns_roce_dev *VAR_0, struct hns_roce_mtt *VAR_1)
{
 struct hns_roce_mr_table *VAR_2 = &VAR_0->mr_table;

 if (VAR_1->order < 0)
  return;

 switch (VAR_1->mtt_type) {
 case 128:
  FUNC_1(&VAR_2->mtt_buddy, VAR_1->first_seg,
        VAR_1->order);
  FUNC_2(VAR_0, &VAR_2->mtt_table,
     VAR_1->first_seg,
     VAR_1->first_seg + (1 << VAR_1->order) - 1);
  break;
 case 131:
  FUNC_1(&VAR_2->mtt_cqe_buddy, VAR_1->first_seg,
        VAR_1->order);
  FUNC_2(VAR_0, &VAR_2->mtt_cqe_table,
     VAR_1->first_seg,
     VAR_1->first_seg + (1 << VAR_1->order) - 1);
  break;
 case 129:
  FUNC_1(&VAR_2->mtt_srqwqe_buddy, VAR_1->first_seg,
        VAR_1->order);
  FUNC_2(VAR_0, &VAR_2->mtt_srqwqe_table,
     VAR_1->first_seg,
     VAR_1->first_seg + (1 << VAR_1->order) - 1);
  break;
 case 130:
  FUNC_1(&VAR_2->mtt_idx_buddy, VAR_1->first_seg,
        VAR_1->order);
  FUNC_2(VAR_0, &VAR_2->mtt_idx_table,
     VAR_1->first_seg,
     VAR_1->first_seg + (1 << VAR_1->order) - 1);
  break;
 default:
  FUNC_0(VAR_0->dev,
   "Unsupport mtt type %d, clean mtt failed\n",
   VAR_1->mtt_type);
  break;
 }
}
