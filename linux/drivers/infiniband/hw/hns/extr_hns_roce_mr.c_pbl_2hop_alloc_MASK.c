
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct hns_roce_mr {int l0_chunk_last_num; int * pbl_l1_dma_addr; int * pbl_bt_l0; int * pbl_bt_l1; } ;
struct hns_roce_dev {struct device* dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,int,int *,int ) ;
 int FUNC_1 (struct hns_roce_dev*,struct hns_roce_mr*,int,int,int ) ;

__attribute__((used)) static int FUNC_2(struct hns_roce_dev *VAR_2, int VAR_3,
          struct hns_roce_mr *VAR_4, u32 VAR_5)
{
 struct device *VAR_6 = VAR_2->dev;
 int VAR_7;
 u64 VAR_8;
 u64 VAR_9 = 0;
 u64 VAR_10;
 int VAR_11;

 VAR_8 = (VAR_3 + VAR_5 / 8 - 1) / (VAR_5 / 8);


 for (VAR_11 = 0; VAR_11 < VAR_5 / 8; VAR_11++) {
  if (VAR_9 + 1 < VAR_8) {
   VAR_10 = VAR_5;
  } else {
   VAR_7 = VAR_11 * (VAR_5 / 8);
   VAR_10 = (VAR_3 - VAR_7) * 8;
  }
  VAR_4->pbl_bt_l1[VAR_11] = FUNC_0(VAR_6, VAR_10,
         &(VAR_4->pbl_l1_dma_addr[VAR_11]),
         VAR_1);
  if (!VAR_4->pbl_bt_l1[VAR_11]) {
   FUNC_1(VAR_2, VAR_4, 1, VAR_11, 0);
   return -VAR_0;
  }

  *(VAR_4->pbl_bt_l0 + VAR_11) = VAR_4->pbl_l1_dma_addr[VAR_11];

  VAR_9++;
  if (VAR_9 >= VAR_8)
   break;
 }

 VAR_4->l0_chunk_last_num = VAR_11 + 1;

 return 0;
}
