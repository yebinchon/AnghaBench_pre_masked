
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hns_roce_hem_table {int dummy; } ;
struct hns_roce_buddy {int dummy; } ;
struct hns_roce_mr_table {struct hns_roce_hem_table mtt_idx_table; struct hns_roce_buddy mtt_idx_buddy; struct hns_roce_hem_table mtt_srqwqe_table; struct hns_roce_buddy mtt_srqwqe_buddy; struct hns_roce_hem_table mtt_cqe_table; struct hns_roce_buddy mtt_cqe_buddy; struct hns_roce_hem_table mtt_table; struct hns_roce_buddy mtt_buddy; } ;
struct hns_roce_dev {int dev; struct hns_roce_mr_table mr_table; } ;


 int VAR_0 ;




 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct hns_roce_buddy*,int,unsigned long*) ;
 int FUNC_2 (struct hns_roce_buddy*,unsigned long,int) ;
 scalar_t__ FUNC_3 (struct hns_roce_dev*,struct hns_roce_hem_table*,unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct hns_roce_dev *VAR_1, int VAR_2,
        unsigned long *VAR_3, u32 VAR_4)
{
 struct hns_roce_mr_table *VAR_5 = &VAR_1->mr_table;
 struct hns_roce_hem_table *VAR_6;
 struct hns_roce_buddy *VAR_7;
 int VAR_8;

 switch (VAR_4) {
 case 128:
  VAR_7 = &VAR_5->mtt_buddy;
  VAR_6 = &VAR_5->mtt_table;
  break;
 case 131:
  VAR_7 = &VAR_5->mtt_cqe_buddy;
  VAR_6 = &VAR_5->mtt_cqe_table;
  break;
 case 129:
  VAR_7 = &VAR_5->mtt_srqwqe_buddy;
  VAR_6 = &VAR_5->mtt_srqwqe_table;
  break;
 case 130:
  VAR_7 = &VAR_5->mtt_idx_buddy;
  VAR_6 = &VAR_5->mtt_idx_table;
  break;
 default:
  FUNC_0(VAR_1->dev, "Unsupport MTT table type: %d\n",
   VAR_4);
  return -VAR_0;
 }

 VAR_8 = FUNC_1(VAR_7, VAR_2, VAR_3);
 if (VAR_8 == -1)
  return -1;

 if (FUNC_3(VAR_1, VAR_6, *VAR_3,
         *VAR_3 + (1 << VAR_2) - 1)) {
  FUNC_2(VAR_7, *VAR_3, VAR_2);
  return -1;
 }

 return 0;
}
