
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct ib_udata {int dummy; } ;
struct ib_mr {int device; } ;
struct hns_roce_mr {unsigned long long size; int * umem; int pbl_dma_addr; int pbl_buf; } ;
struct TYPE_4__ {scalar_t__ pbl_hop_num; } ;
struct hns_roce_dev {TYPE_2__ caps; TYPE_1__* hw; struct device* dev; } ;
struct hns_roce_cmd_mailbox {int buf; } ;
struct device {int dummy; } ;
struct TYPE_3__ {int (* rereg_write_mtpt ) (struct hns_roce_dev*,struct hns_roce_mr*,int,int ,int,int ,int ,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct device*,int,int *,int ) ;
 int FUNC_3 (struct device*,int,int ,int ) ;
 int FUNC_4 (struct hns_roce_dev*,struct hns_roce_mr*,int *) ;
 int FUNC_5 (struct hns_roce_dev*,int,struct hns_roce_mr*) ;
 int FUNC_6 (struct hns_roce_dev*,struct hns_roce_mr*) ;
 int * FUNC_7 (struct ib_udata*,int ,int ,int,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct hns_roce_dev*,struct hns_roce_mr*,int,int ,int,int ,int ,int ) ;
 struct hns_roce_dev* FUNC_11 (int ) ;
 struct hns_roce_mr* FUNC_12 (struct ib_mr*) ;

__attribute__((used)) static int FUNC_13(struct ib_mr *VAR_2, int VAR_3,
     u64 VAR_4, u64 VAR_5,
     u64 VAR_6, int VAR_7,
     struct hns_roce_cmd_mailbox *VAR_8,
     u32 VAR_9, struct ib_udata *VAR_10)
{
 struct hns_roce_dev *VAR_11 = FUNC_11(VAR_2->device);
 struct hns_roce_mr *VAR_12 = FUNC_12(VAR_2);
 struct device *VAR_13 = VAR_11->dev;
 int VAR_14;
 int VAR_15;

 if (VAR_12->size != ~0ULL) {
  VAR_14 = FUNC_8(VAR_12->umem);

  if (VAR_11->caps.pbl_hop_num)
   FUNC_6(VAR_11, VAR_12);
  else
   FUNC_3(VAR_13, VAR_14 * 8,
       VAR_12->pbl_buf, VAR_12->pbl_dma_addr);
 }
 FUNC_9(VAR_12->umem);

 VAR_12->umem = FUNC_7(VAR_10, VAR_4, VAR_5, VAR_7, 0);
 if (FUNC_0(VAR_12->umem)) {
  VAR_15 = FUNC_1(VAR_12->umem);
  VAR_12->umem = ((void*)0);
  return -VAR_0;
 }
 VAR_14 = FUNC_8(VAR_12->umem);

 if (VAR_11->caps.pbl_hop_num) {
  VAR_15 = FUNC_5(VAR_11, VAR_14, VAR_12);
  if (VAR_15)
   goto release_umem;
 } else {
  VAR_12->pbl_buf = FUNC_2(VAR_13, VAR_14 * 8,
       &(VAR_12->pbl_dma_addr),
       VAR_1);
  if (!VAR_12->pbl_buf) {
   VAR_15 = -VAR_0;
   goto release_umem;
  }
 }

 VAR_15 = VAR_11->hw->rereg_write_mtpt(VAR_11, VAR_12, VAR_3, VAR_9,
        VAR_7, VAR_6,
        VAR_5, VAR_8->buf);
 if (VAR_15)
  goto release_umem;


 VAR_15 = FUNC_4(VAR_11, VAR_12, VAR_12->umem);
 if (VAR_15) {
  if (VAR_12->size != ~0ULL) {
   VAR_14 = FUNC_8(VAR_12->umem);

   if (VAR_11->caps.pbl_hop_num)
    FUNC_6(VAR_11, VAR_12);
   else
    FUNC_3(VAR_13, VAR_14 * 8,
        VAR_12->pbl_buf,
        VAR_12->pbl_dma_addr);
  }

  goto release_umem;
 }

 return 0;

release_umem:
 FUNC_9(VAR_12->umem);
 return VAR_15;

}
