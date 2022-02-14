
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct g2d_runqueue_node {int dummy; } ;
struct g2d_data {int irq; int runqueue_slab; int g2d_workq; int max_pool; int regs; int flags; int gate_clk; int runqueue_mutex; int cmdlist_mutex; int runqueue; int free_cmdlist; int runqueue_work; struct device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_6 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (struct device*,int *) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct device*,char*) ;
 int FUNC_9 (struct device*,char*) ;
 int FUNC_10 (struct device*,struct resource*) ;
 struct g2d_data* FUNC_11 (struct device*,int,int ) ;
 int FUNC_12 (struct device*,int,int ,int ,char*,struct g2d_data*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_13 (char*,int,int ,int ,int *) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (struct platform_device*,int ) ;
 struct resource* FUNC_17 (struct platform_device*,int ,int ) ;
 int FUNC_18 (struct platform_device*,struct g2d_data*) ;
 int FUNC_19 (struct device*) ;
 int FUNC_20 (struct device*) ;
 int FUNC_21 (struct device*,int) ;
 int FUNC_22 (struct device*) ;

__attribute__((used)) static int FUNC_23(struct platform_device *VAR_10)
{
 struct device *VAR_11 = &VAR_10->dev;
 struct resource *VAR_12;
 struct g2d_data *VAR_13;
 int VAR_14;

 VAR_13 = FUNC_11(VAR_11, sizeof(*VAR_13), VAR_4);
 if (!VAR_13)
  return -VAR_1;

 VAR_13->runqueue_slab = FUNC_13("g2d_runqueue_slab",
   sizeof(struct g2d_runqueue_node), 0, 0, ((void*)0));
 if (!VAR_13->runqueue_slab)
  return -VAR_1;

 VAR_13->dev = VAR_11;

 VAR_13->g2d_workq = FUNC_6("g2d");
 if (!VAR_13->g2d_workq) {
  FUNC_8(VAR_11, "failed to create workqueue\n");
  VAR_14 = -VAR_0;
  goto err_destroy_slab;
 }

 FUNC_1(&VAR_13->runqueue_work, VAR_9);
 FUNC_0(&VAR_13->free_cmdlist);
 FUNC_0(&VAR_13->runqueue);

 FUNC_15(&VAR_13->cmdlist_mutex);
 FUNC_15(&VAR_13->runqueue_mutex);

 VAR_13->gate_clk = FUNC_9(VAR_11, "fimg2d");
 if (FUNC_2(VAR_13->gate_clk)) {
  FUNC_8(VAR_11, "failed to get gate clock\n");
  VAR_14 = FUNC_3(VAR_13->gate_clk);
  goto err_destroy_workqueue;
 }

 FUNC_22(VAR_11);
 FUNC_21(VAR_11, 2000);
 FUNC_20(VAR_11);
 FUNC_4(VAR_3, &VAR_13->flags);
 FUNC_4(VAR_2, &VAR_13->flags);

 VAR_12 = FUNC_17(VAR_10, VAR_5, 0);

 VAR_13->regs = FUNC_10(VAR_11, VAR_12);
 if (FUNC_2(VAR_13->regs)) {
  VAR_14 = FUNC_3(VAR_13->regs);
  goto err_put_clk;
 }

 VAR_13->irq = FUNC_16(VAR_10, 0);
 if (VAR_13->irq < 0) {
  FUNC_8(VAR_11, "failed to get irq\n");
  VAR_14 = VAR_13->irq;
  goto err_put_clk;
 }

 VAR_14 = FUNC_12(VAR_11, VAR_13->irq, VAR_8, 0,
        "drm_g2d", VAR_13);
 if (VAR_14 < 0) {
  FUNC_8(VAR_11, "irq request failed\n");
  goto err_put_clk;
 }

 VAR_13->max_pool = VAR_6;

 FUNC_18(VAR_10, VAR_13);

 VAR_14 = FUNC_5(VAR_11, &VAR_7);
 if (VAR_14 < 0) {
  FUNC_8(VAR_11, "failed to register drm g2d device\n");
  goto err_put_clk;
 }

 return 0;

err_put_clk:
 FUNC_19(VAR_11);
err_destroy_workqueue:
 FUNC_7(VAR_13->g2d_workq);
err_destroy_slab:
 FUNC_14(VAR_13->runqueue_slab);
 return VAR_14;
}
