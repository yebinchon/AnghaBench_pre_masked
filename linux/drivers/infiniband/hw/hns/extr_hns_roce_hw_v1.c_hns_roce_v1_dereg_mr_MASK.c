
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ib_udata {int dummy; } ;
struct hns_roce_free_mr {int free_mr_wq; } ;
struct hns_roce_v1_priv {struct hns_roce_free_mr free_mr; } ;
struct hns_roce_mr_free_work {int comp_flag; int work; struct completion* comp; void* mr; int * ib_dev; } ;
struct hns_roce_mr {unsigned long long size; int umem; int key; int pbl_dma_addr; int pbl_buf; scalar_t__ enabled; } ;
struct TYPE_6__ {int mtpt_bitmap; } ;
struct TYPE_5__ {int num_mtpts; } ;
struct hns_roce_dev {TYPE_3__ mr_table; int ib_dev; TYPE_2__ caps; scalar_t__ priv; TYPE_1__* pdev; } ;
struct device {int dummy; } ;
struct completion {int dummy; } ;
struct TYPE_4__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 long VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct device*,char*,int ,scalar_t__) ;
 int FUNC_2 (struct device*,char*,...) ;
 int FUNC_3 (struct device*,int,int ,int ) ;
 int FUNC_4 (int *,int,int ) ;
 scalar_t__ FUNC_5 (struct hns_roce_dev*,int *,int) ;
 int VAR_5 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct completion*) ;
 unsigned long VAR_6 ;
 scalar_t__ FUNC_9 (unsigned long) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct hns_roce_mr*) ;
 struct hns_roce_mr_free_work* FUNC_12 (int,int ) ;
 int FUNC_13 (scalar_t__) ;
 int FUNC_14 (int ,int *) ;
 scalar_t__ FUNC_15 (struct completion*) ;

__attribute__((used)) static int FUNC_16(struct hns_roce_dev *VAR_7,
    struct hns_roce_mr *VAR_8, struct ib_udata *VAR_9)
{
 struct device *VAR_10 = &VAR_7->pdev->dev;
 struct hns_roce_mr_free_work *VAR_11;
 struct hns_roce_free_mr *VAR_12;
 struct hns_roce_v1_priv *VAR_13;
 struct completion VAR_14;
 long VAR_15 = VAR_3;
 unsigned long VAR_16 = VAR_6;
 int VAR_17;
 int VAR_18 = 0;

 VAR_13 = (struct hns_roce_v1_priv *)VAR_7->priv;
 VAR_12 = &VAR_13->free_mr;

 if (VAR_8->enabled) {
  if (FUNC_5(VAR_7, ((void*)0), FUNC_10(VAR_8->key)
           & (VAR_7->caps.num_mtpts - 1)))
   FUNC_2(VAR_10, "HW2SW_MPT failed!\n");
 }

 VAR_11 = FUNC_12(sizeof(*VAR_11), VAR_2);
 if (!VAR_11) {
  VAR_18 = -VAR_0;
  goto free_mr;
 }

 FUNC_0(&(VAR_11->work), VAR_5);

 VAR_11->ib_dev = &(VAR_7->ib_dev);
 VAR_11->comp = &VAR_14;
 VAR_11->comp_flag = 1;
 VAR_11->mr = (void *)VAR_8;
 FUNC_8(VAR_11->comp);

 FUNC_14(VAR_12->free_mr_wq, &(VAR_11->work));

 while (VAR_15 > 0) {
  if (FUNC_15(&VAR_14))
   goto free_mr;
  FUNC_13(VAR_4);
  VAR_15 -= VAR_4;
 }

 VAR_11->comp_flag = 0;
 if (FUNC_15(&VAR_14))
  goto free_mr;

 FUNC_2(VAR_10, "Free mr work 0x%x over 50s and failed!\n", VAR_8->key);
 VAR_18 = -VAR_1;

free_mr:
 FUNC_1(VAR_10, "Free mr 0x%x use 0x%x us.\n",
  VAR_8->key, FUNC_9(VAR_6) - FUNC_9(VAR_16));

 if (VAR_8->size != ~0ULL) {
  VAR_17 = FUNC_6(VAR_8->umem);
  FUNC_3(VAR_10, VAR_17 * 8, VAR_8->pbl_buf,
      VAR_8->pbl_dma_addr);
 }

 FUNC_4(&VAR_7->mr_table.mtpt_bitmap,
        FUNC_10(VAR_8->key), 0);

 FUNC_7(VAR_8->umem);

 FUNC_11(VAR_8);

 return VAR_18;
}
