
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u64 ;
typedef int u32 ;
struct hns_roce_hem_table {scalar_t__ type; size_t* bt_l0_dma_addr; size_t* bt_l1_dma_addr; struct hns_roce_hem** hem; } ;
struct hns_roce_hem_mhop {int l0_idx; int l1_idx; int l2_idx; int hop_num; int bt_chunk_size; } ;
struct hns_roce_hem_iter {int dummy; } ;
struct hns_roce_hem {int dummy; } ;
struct hns_roce_dev {int dummy; } ;
struct hns_roce_cmd_mailbox {int dma; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct hns_roce_cmd_mailbox*) ;
 int FUNC_1 (struct hns_roce_cmd_mailbox*) ;
 scalar_t__ FUNC_2 (int,int) ;
 int FUNC_3 (struct hns_roce_dev*,scalar_t__,int) ;
 struct hns_roce_cmd_mailbox* FUNC_4 (struct hns_roce_dev*) ;
 int FUNC_5 (struct hns_roce_dev*,struct hns_roce_hem_table*,unsigned long*,struct hns_roce_hem_mhop*) ;
 int FUNC_6 (struct hns_roce_dev*,scalar_t__) ;
 int FUNC_7 (struct hns_roce_dev*,size_t,int ,int,int ,int,int ) ;
 int FUNC_8 (struct hns_roce_dev*,struct hns_roce_cmd_mailbox*) ;
 size_t FUNC_9 (struct hns_roce_hem_iter*) ;
 int FUNC_10 (struct hns_roce_hem*,struct hns_roce_hem_iter*) ;
 int FUNC_11 (struct hns_roce_hem_iter*) ;
 int FUNC_12 (struct hns_roce_hem_iter*) ;

__attribute__((used)) static int FUNC_13(struct hns_roce_dev *VAR_4,
          struct hns_roce_hem_table *VAR_5, int VAR_6,
          int VAR_7)
{
 struct hns_roce_cmd_mailbox *VAR_8;
 struct hns_roce_hem_iter VAR_9;
 struct hns_roce_hem_mhop VAR_10;
 struct hns_roce_hem *VAR_11;
 unsigned long VAR_12 = VAR_6;
 int VAR_13, VAR_14, VAR_15;
 int VAR_16 = 0;
 u64 VAR_17 = 0;
 u64 VAR_18 = 0;
 u64 VAR_19 = 0;
 u32 VAR_20;
 u32 VAR_21;
 int VAR_22;

 if (!FUNC_6(VAR_4, VAR_5->type))
  return 0;

 FUNC_5(VAR_4, VAR_5, &VAR_12, &VAR_10);
 VAR_13 = VAR_10.l0_idx;
 VAR_14 = VAR_10.l1_idx;
 VAR_15 = VAR_10.l2_idx;
 VAR_21 = VAR_10.hop_num;
 VAR_20 = VAR_10.bt_chunk_size / 8;

 if (VAR_21 == 2) {
  VAR_17 = VAR_13 * VAR_20 * VAR_20 + VAR_14 * VAR_20 +
     VAR_15;
  VAR_18 = VAR_13 * VAR_20 + VAR_14;
 } else if (VAR_21 == 1) {
  VAR_17 = VAR_13 * VAR_20 + VAR_14;
 } else if (VAR_21 == VAR_3) {
  VAR_17 = VAR_13;
 }

 VAR_22 = FUNC_3(VAR_4, VAR_5->type, VAR_7);
 if (VAR_22 == -VAR_0)
  return 0;

 VAR_8 = FUNC_4(VAR_4);
 if (FUNC_0(VAR_8))
  return FUNC_1(VAR_8);

 if (VAR_5->type == VAR_1)
  VAR_6 = VAR_10.l0_idx;

 if (FUNC_2(VAR_21, VAR_7)) {
  VAR_11 = VAR_5->hem[VAR_17];
  for (FUNC_10(VAR_11, &VAR_9);
       !FUNC_11(&VAR_9); FUNC_12(&VAR_9)) {
   VAR_19 = FUNC_9(&VAR_9);


   VAR_16 = FUNC_7(VAR_4, VAR_19, VAR_8->dma,
      VAR_6, 0, VAR_22,
      VAR_2);
  }
 } else {
  if (VAR_7 == 0)
   VAR_19 = VAR_5->bt_l0_dma_addr[VAR_13];
  else if (VAR_7 == 1 && VAR_21 == 2)
   VAR_19 = VAR_5->bt_l1_dma_addr[VAR_18];


  VAR_16 = FUNC_7(VAR_4, VAR_19, VAR_8->dma, VAR_6,
     0, VAR_22, VAR_2);
 }

 FUNC_8(VAR_4, VAR_8);
 return VAR_16;
}
