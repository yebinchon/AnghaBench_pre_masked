
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct hns_roce_mtt {int mtt_type; scalar_t__ first_seg; } ;
struct hns_roce_hem_table {int dummy; } ;
struct TYPE_4__ {int mtt_ba_pg_sz; int cqe_ba_pg_sz; int srqwqe_ba_pg_sz; int idx_ba_pg_sz; int mtt_hop_num; } ;
struct TYPE_3__ {struct hns_roce_hem_table mtt_idx_table; struct hns_roce_hem_table mtt_srqwqe_table; struct hns_roce_hem_table mtt_cqe_table; struct hns_roce_hem_table mtt_table; } ;
struct hns_roce_dev {TYPE_2__ caps; TYPE_1__ mr_table; } ;
typedef int dma_addr_t ;
typedef int __le64 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int * FUNC_1 (struct hns_roce_dev*,struct hns_roce_hem_table*,scalar_t__,int *) ;

__attribute__((used)) static int FUNC_2(struct hns_roce_dev *VAR_5,
        struct hns_roce_mtt *VAR_6, u32 VAR_7,
        u32 VAR_8, u64 *VAR_9)
{
 struct hns_roce_hem_table *VAR_10;
 dma_addr_t VAR_11;
 __le64 *VAR_12;
 u32 VAR_13;
 u32 VAR_14;

 switch (VAR_6->mtt_type) {
 case 128:
  VAR_10 = &VAR_5->mr_table.mtt_table;
  VAR_13 = 1 << (VAR_5->caps.mtt_ba_pg_sz + VAR_4);
  break;
 case 131:
  VAR_10 = &VAR_5->mr_table.mtt_cqe_table;
  VAR_13 = 1 << (VAR_5->caps.cqe_ba_pg_sz + VAR_4);
  break;
 case 129:
  VAR_10 = &VAR_5->mr_table.mtt_srqwqe_table;
  VAR_13 = 1 << (VAR_5->caps.srqwqe_ba_pg_sz + VAR_4);
  break;
 case 130:
  VAR_10 = &VAR_5->mr_table.mtt_idx_table;
  VAR_13 = 1 << (VAR_5->caps.idx_ba_pg_sz + VAR_4);
  break;
 default:
  return -VAR_0;
 }


 if (VAR_7 / (VAR_13 / sizeof(u64)) !=
  (VAR_7 + VAR_8 - 1) / (VAR_13 / sizeof(u64)))
  return -VAR_0;

 if (VAR_7 & (VAR_2 - 1))
  return -VAR_0;

 VAR_12 = FUNC_1(VAR_5, VAR_10,
    VAR_6->first_seg +
    VAR_7 / VAR_2,
    &VAR_11);
 if (!VAR_12)
  return -VAR_1;


 for (VAR_14 = 0; VAR_14 < VAR_8; ++VAR_14) {
  if (!VAR_5->caps.mtt_hop_num)
   VAR_12[VAR_14] = FUNC_0(VAR_9[VAR_14] >> VAR_3);
  else
   VAR_12[VAR_14] = FUNC_0(VAR_9[VAR_14]);
 }

 return 0;
}
