
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned long long u64 ;
typedef void* u32 ;
struct hns_roce_mr {unsigned long long iova; unsigned long long size; int * pbl_buf; scalar_t__ pbl_dma_addr; scalar_t__ pbl_l0_dma_addr; int * pbl_l1_dma_addr; int * pbl_l2_dma_addr; int * pbl_bt_l0; int * pbl_bt_l1; int * pbl_bt_l2; int key; scalar_t__ enabled; void* access; void* pd; } ;
struct TYPE_4__ {int pbl_hop_num; } ;
struct TYPE_3__ {int mtpt_bitmap; } ;
struct hns_roce_dev {TYPE_2__ caps; TYPE_1__ mr_table; struct device* dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (struct device*,int,scalar_t__*,int ) ;
 int FUNC_1 (int *,unsigned long*) ;
 int FUNC_2 (struct hns_roce_dev*,int,struct hns_roce_mr*) ;
 int FUNC_3 (unsigned long) ;

__attribute__((used)) static int FUNC_4(struct hns_roce_dev *VAR_3, u32 VAR_4, u64 VAR_5,
        u64 VAR_6, u32 VAR_7, int VAR_8,
        struct hns_roce_mr *VAR_9)
{
 struct device *VAR_10 = VAR_3->dev;
 unsigned long VAR_11 = 0;
 int VAR_12;


 VAR_12 = FUNC_1(&VAR_3->mr_table.mtpt_bitmap, &VAR_11);
 if (VAR_12 == -1)
  return -VAR_1;

 VAR_9->iova = VAR_5;
 VAR_9->size = VAR_6;
 VAR_9->pd = VAR_4;
 VAR_9->access = VAR_7;
 VAR_9->enabled = 0;
 VAR_9->key = FUNC_3(VAR_11);

 if (VAR_6 == ~0ull) {
  VAR_9->pbl_buf = ((void*)0);
  VAR_9->pbl_dma_addr = 0;

  VAR_9->pbl_bt_l2 = ((void*)0);
  VAR_9->pbl_bt_l1 = ((void*)0);
  VAR_9->pbl_bt_l0 = ((void*)0);
  VAR_9->pbl_l2_dma_addr = ((void*)0);
  VAR_9->pbl_l1_dma_addr = ((void*)0);
  VAR_9->pbl_l0_dma_addr = 0;
 } else {
  if (!VAR_3->caps.pbl_hop_num) {
   VAR_9->pbl_buf = FUNC_0(VAR_10,
        VAR_8 * VAR_0,
        &(VAR_9->pbl_dma_addr),
        VAR_2);
   if (!VAR_9->pbl_buf)
    return -VAR_1;
  } else {
   VAR_12 = FUNC_2(VAR_3, VAR_8, VAR_9);
  }
 }

 return VAR_12;
}
