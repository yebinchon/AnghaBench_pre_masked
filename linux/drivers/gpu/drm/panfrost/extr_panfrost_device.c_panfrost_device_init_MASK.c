
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct panfrost_device {int iomem; int dev; int pdev; int as_lock; int as_lru_list; int scheduled_jobs; int reset_lock; int sched_lock; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (int ,struct resource*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct panfrost_device*) ;
 int FUNC_7 (struct panfrost_device*) ;
 int FUNC_8 (struct panfrost_device*) ;
 int FUNC_9 (struct panfrost_device*) ;
 int FUNC_10 (struct panfrost_device*) ;
 int FUNC_11 (struct panfrost_device*) ;
 int FUNC_12 (struct panfrost_device*) ;
 int FUNC_13 (struct panfrost_device*) ;
 int FUNC_14 (struct panfrost_device*) ;
 int FUNC_15 (struct panfrost_device*) ;
 int FUNC_16 (struct panfrost_device*) ;
 int FUNC_17 (struct panfrost_device*) ;
 int FUNC_18 (struct panfrost_device*) ;
 struct resource* FUNC_19 (int ,int ,int ) ;
 int FUNC_20 (int *) ;

int FUNC_21(struct panfrost_device *VAR_1)
{
 int VAR_2;
 struct resource *VAR_3;

 FUNC_5(&VAR_1->sched_lock);
 FUNC_5(&VAR_1->reset_lock);
 FUNC_0(&VAR_1->scheduled_jobs);
 FUNC_0(&VAR_1->as_lru_list);

 FUNC_20(&VAR_1->as_lock);

 VAR_2 = FUNC_7(VAR_1);
 if (VAR_2) {
  FUNC_3(VAR_1->dev, "clk init failed %d\n", VAR_2);
  return VAR_2;
 }

 VAR_2 = FUNC_16(VAR_1);
 if (VAR_2) {
  FUNC_3(VAR_1->dev, "regulator init failed %d\n", VAR_2);
  goto err_out0;
 }

 VAR_2 = FUNC_18(VAR_1);
 if (VAR_2) {
  FUNC_3(VAR_1->dev, "reset init failed %d\n", VAR_2);
  goto err_out1;
 }

 VAR_3 = FUNC_19(VAR_1->pdev, VAR_0, 0);
 VAR_1->iomem = FUNC_4(VAR_1->dev, VAR_3);
 if (FUNC_1(VAR_1->iomem)) {
  FUNC_3(VAR_1->dev, "failed to ioremap iomem\n");
  VAR_2 = FUNC_2(VAR_1->iomem);
  goto err_out2;
 }

 VAR_2 = FUNC_9(VAR_1);
 if (VAR_2)
  goto err_out2;

 VAR_2 = FUNC_13(VAR_1);
 if (VAR_2)
  goto err_out3;

 VAR_2 = FUNC_11(VAR_1);
 if (VAR_2)
  goto err_out4;

 VAR_2 = FUNC_14(VAR_1);
 if (VAR_2)
  goto err_out5;

 return 0;
err_out5:
 FUNC_10(VAR_1);
err_out4:
 FUNC_12(VAR_1);
err_out3:
 FUNC_8(VAR_1);
err_out2:
 FUNC_17(VAR_1);
err_out1:
 FUNC_15(VAR_1);
err_out0:
 FUNC_6(VAR_1);
 return VAR_2;
}
