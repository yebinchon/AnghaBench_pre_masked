
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct soc_device_attribute {int data; } ;
struct resource {int dummy; } ;
struct TYPE_15__ {int of_node; } ;
struct platform_device {TYPE_2__ dev; } ;
struct TYPE_14__ {void* dss; void* clk; } ;
struct dss_device {scalar_t__ video2_pll; scalar_t__ video1_pll; TYPE_1__ debugfs; int base; int feat; struct platform_device* pdev; } ;
struct component_match {int dummy; } ;
struct TYPE_16__ {int data; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*,int *,struct component_match*) ;
 int FUNC_4 (TYPE_2__*,char*) ;
 int FUNC_5 (TYPE_2__*,struct component_match**,int ) ;
 int FUNC_6 (TYPE_2__*,struct resource*) ;
 int FUNC_7 (TYPE_2__*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_8 (struct dss_device*,char*,int ,struct dss_device*) ;
 int FUNC_9 (void*) ;
 int VAR_6 ;
 int FUNC_10 (struct dss_device*) ;
 int FUNC_11 (struct dss_device*) ;
 int FUNC_12 (struct dss_device*) ;
 int VAR_7 ;
 int FUNC_13 (struct dss_device*) ;
 int FUNC_14 (struct dss_device*) ;
 int FUNC_15 (struct dss_device*) ;
 int VAR_8 ;
 int FUNC_16 (struct dss_device*) ;
 int FUNC_17 (struct dss_device*) ;
 int FUNC_18 (struct dss_device*) ;
 int FUNC_19 (scalar_t__) ;
 int FUNC_20 (struct dss_device*) ;
 struct dss_device* FUNC_21 (int,int ) ;
 TYPE_7__* FUNC_22 (int ,TYPE_2__*) ;
 int FUNC_23 (TYPE_2__*) ;
 int FUNC_24 (int ,int *,int *,TYPE_2__*) ;
 int FUNC_25 (TYPE_2__*) ;
 struct resource* FUNC_26 (struct platform_device*,int ,int ) ;
 int FUNC_27 (struct platform_device*,struct dss_device*) ;
 int FUNC_28 (TYPE_2__*) ;
 int FUNC_29 (TYPE_2__*) ;
 struct soc_device_attribute* FUNC_30 (int ) ;

__attribute__((used)) static int FUNC_31(struct platform_device *VAR_9)
{
 const struct soc_device_attribute *VAR_10;
 struct component_match *VAR_11 = ((void*)0);
 struct resource *VAR_12;
 struct dss_device *VAR_13;
 int VAR_14;

 VAR_13 = FUNC_21(sizeof(*VAR_13), VAR_1);
 if (!VAR_13)
  return -VAR_0;

 VAR_13->pdev = VAR_9;
 FUNC_27(VAR_9, VAR_13);

 VAR_14 = FUNC_7(&VAR_9->dev, FUNC_0(32));
 if (VAR_14) {
  FUNC_4(&VAR_9->dev, "Failed to set the DMA mask\n");
  goto err_free_dss;
 }





 VAR_10 = FUNC_30(VAR_8);
 if (VAR_10)
  VAR_13->feat = VAR_10->data;
 else
  VAR_13->feat = FUNC_22(VAR_7, &VAR_9->dev)->data;


 VAR_12 = FUNC_26(VAR_9, VAR_2, 0);
 VAR_13->base = FUNC_6(&VAR_9->dev, VAR_12);
 if (FUNC_1(VAR_13->base)) {
  VAR_14 = FUNC_2(VAR_13->base);
  goto err_free_dss;
 }

 VAR_14 = FUNC_10(VAR_13);
 if (VAR_14)
  goto err_free_dss;

 VAR_14 = FUNC_15(VAR_13);
 if (VAR_14)
  goto err_put_clocks;


 VAR_14 = FUNC_18(VAR_13);
 if (VAR_14)
  goto err_put_clocks;

 VAR_14 = FUNC_11(VAR_13);
 if (VAR_14)
  goto err_uninit_plls;


 FUNC_29(&VAR_9->dev);

 VAR_14 = FUNC_13(VAR_13);
 if (VAR_14)
  goto err_pm_runtime_disable;


 VAR_14 = FUNC_12(VAR_13);
 if (VAR_14)
  goto err_pm_runtime_disable;

 VAR_13->debugfs.clk = FUNC_8(VAR_13, "clk",
         VAR_5, VAR_13);
 VAR_13->debugfs.dss = FUNC_8(VAR_13, "dss", VAR_6,
         VAR_13);


 VAR_14 = FUNC_24(VAR_9->dev.of_node, ((void*)0), ((void*)0), &VAR_9->dev);
 if (VAR_14)
  goto err_uninit_debugfs;

 FUNC_25(&VAR_9->dev);

 FUNC_5(&VAR_9->dev, &VAR_11, VAR_3);

 VAR_14 = FUNC_3(&VAR_9->dev, &VAR_4, VAR_11);
 if (VAR_14)
  goto err_of_depopulate;

 return 0;

err_of_depopulate:
 FUNC_23(&VAR_9->dev);

err_uninit_debugfs:
 FUNC_9(VAR_13->debugfs.clk);
 FUNC_9(VAR_13->debugfs.dss);
 FUNC_17(VAR_13);

err_pm_runtime_disable:
 FUNC_28(&VAR_9->dev);
 FUNC_16(VAR_13);

err_uninit_plls:
 if (VAR_13->video1_pll)
  FUNC_19(VAR_13->video1_pll);
 if (VAR_13->video2_pll)
  FUNC_19(VAR_13->video2_pll);

err_put_clocks:
 FUNC_14(VAR_13);

err_free_dss:
 FUNC_20(VAR_13);

 return VAR_14;
}
