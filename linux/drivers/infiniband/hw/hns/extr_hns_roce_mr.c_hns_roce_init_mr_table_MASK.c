
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hns_roce_mr_table {int mtpt_bitmap; int mtt_buddy; int mtt_cqe_buddy; int mtt_srqwqe_buddy; int mtt_idx_buddy; } ;
struct TYPE_2__ {scalar_t__ num_srqwqe_segs; scalar_t__ num_idx_segs; scalar_t__ num_cqe_segs; scalar_t__ num_mtt_segs; int reserved_mrws; scalar_t__ num_mtpts; } ;
struct hns_roce_dev {TYPE_1__ caps; struct hns_roce_mr_table mr_table; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,scalar_t__,scalar_t__,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 scalar_t__ FUNC_4 (struct hns_roce_dev*,int ) ;
 int FUNC_5 (scalar_t__) ;

int FUNC_6(struct hns_roce_dev *VAR_1)
{
 struct hns_roce_mr_table *VAR_2 = &VAR_1->mr_table;
 int VAR_3;

 VAR_3 = FUNC_1(&VAR_2->mtpt_bitmap,
       VAR_1->caps.num_mtpts,
       VAR_1->caps.num_mtpts - 1,
       VAR_1->caps.reserved_mrws, 0);
 if (VAR_3)
  return VAR_3;

 VAR_3 = FUNC_3(&VAR_2->mtt_buddy,
      FUNC_5(VAR_1->caps.num_mtt_segs));
 if (VAR_3)
  goto err_buddy;

 if (FUNC_4(VAR_1, VAR_0)) {
  VAR_3 = FUNC_3(&VAR_2->mtt_cqe_buddy,
       FUNC_5(VAR_1->caps.num_cqe_segs));
  if (VAR_3)
   goto err_buddy_cqe;
 }

 if (VAR_1->caps.num_srqwqe_segs) {
  VAR_3 = FUNC_3(&VAR_2->mtt_srqwqe_buddy,
       FUNC_5(VAR_1->caps.num_srqwqe_segs));
  if (VAR_3)
   goto err_buddy_srqwqe;
 }

 if (VAR_1->caps.num_idx_segs) {
  VAR_3 = FUNC_3(&VAR_2->mtt_idx_buddy,
       FUNC_5(VAR_1->caps.num_idx_segs));
  if (VAR_3)
   goto err_buddy_idx;
 }

 return 0;

err_buddy_idx:
 if (VAR_1->caps.num_srqwqe_segs)
  FUNC_2(&VAR_2->mtt_srqwqe_buddy);

err_buddy_srqwqe:
 if (FUNC_4(VAR_1, VAR_0))
  FUNC_2(&VAR_2->mtt_cqe_buddy);

err_buddy_cqe:
 FUNC_2(&VAR_2->mtt_buddy);

err_buddy:
 FUNC_0(&VAR_2->mtpt_bitmap);
 return VAR_3;
}
