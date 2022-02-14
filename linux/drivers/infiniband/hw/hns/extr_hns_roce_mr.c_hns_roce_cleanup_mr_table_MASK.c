
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hns_roce_mr_table {int mtpt_bitmap; int mtt_cqe_buddy; int mtt_buddy; int mtt_srqwqe_buddy; int mtt_idx_buddy; } ;
struct TYPE_2__ {scalar_t__ num_srqwqe_segs; scalar_t__ num_idx_segs; } ;
struct hns_roce_dev {TYPE_1__ caps; struct hns_roce_mr_table mr_table; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct hns_roce_dev*,int ) ;

void FUNC_3(struct hns_roce_dev *VAR_1)
{
 struct hns_roce_mr_table *VAR_2 = &VAR_1->mr_table;

 if (VAR_1->caps.num_idx_segs)
  FUNC_1(&VAR_2->mtt_idx_buddy);
 if (VAR_1->caps.num_srqwqe_segs)
  FUNC_1(&VAR_2->mtt_srqwqe_buddy);
 FUNC_1(&VAR_2->mtt_buddy);
 if (FUNC_2(VAR_1, VAR_0))
  FUNC_1(&VAR_2->mtt_cqe_buddy);
 FUNC_0(&VAR_2->mtpt_bitmap);
}
