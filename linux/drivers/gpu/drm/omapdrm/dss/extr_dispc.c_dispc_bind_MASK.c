
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u32 ;
struct soc_device_attribute {int data; } ;
struct resource {int dummy; } ;
struct TYPE_8__ {struct device_node* of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct dss_device {int * dispc_ops; struct dispc_device* dispc; } ;
struct dispc_device {scalar_t__ irq; int debugfs; int syscon_pol_offset; int syscon_pol; struct platform_device* pdev; int base; int feat; int control_lock; struct dss_device* dss; } ;
struct device_node {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_9__ {int data; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int,int) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct dispc_device*) ;
 int FUNC_5 (TYPE_1__*,char*,int ,int ) ;
 int FUNC_6 (TYPE_1__*,char*) ;
 int FUNC_7 (TYPE_1__*,struct resource*) ;
 int VAR_6 ;
 int FUNC_8 (struct dispc_device*) ;
 int FUNC_9 (struct dispc_device*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_10 (struct dispc_device*,int ) ;
 int FUNC_11 (struct dispc_device*) ;
 int FUNC_12 (struct dispc_device*) ;
 int VAR_9 ;
 int FUNC_13 (struct dss_device*,char*,int ,struct dispc_device*) ;
 struct dss_device* FUNC_14 (struct device*) ;
 int FUNC_15 (struct dispc_device*) ;
 struct dispc_device* FUNC_16 (int,int ) ;
 TYPE_3__* FUNC_17 (int ,TYPE_1__*) ;
 scalar_t__ FUNC_18 (struct device_node*,char*) ;
 scalar_t__ FUNC_19 (struct device_node*,char*,int,int *) ;
 scalar_t__ FUNC_20 (struct platform_device*,int ) ;
 struct resource* FUNC_21 (struct platform_device*,int ,int ) ;
 int FUNC_22 (struct platform_device*,struct dispc_device*) ;
 int FUNC_23 (TYPE_1__*) ;
 int FUNC_24 (TYPE_1__*) ;
 struct soc_device_attribute* FUNC_25 (int ) ;
 int FUNC_26 (int *) ;
 int FUNC_27 (struct device_node*,char*) ;
 struct platform_device* FUNC_28 (struct device*) ;

__attribute__((used)) static int FUNC_29(struct device *VAR_10, struct device *VAR_11, void *VAR_12)
{
 struct platform_device *VAR_13 = FUNC_28(VAR_10);
 const struct soc_device_attribute *VAR_14;
 struct dss_device *VAR_15 = FUNC_14(VAR_11);
 struct dispc_device *VAR_16;
 u32 VAR_17;
 int VAR_18 = 0;
 struct resource *VAR_19;
 struct device_node *VAR_20 = VAR_13->dev.of_node;

 VAR_16 = FUNC_16(sizeof(*VAR_16), VAR_4);
 if (!VAR_16)
  return -VAR_3;

 VAR_16->pdev = VAR_13;
 FUNC_22(VAR_13, VAR_16);
 VAR_16->dss = VAR_15;

 FUNC_26(&VAR_16->control_lock);





 VAR_14 = FUNC_25(VAR_9);
 if (VAR_14)
  VAR_16->feat = VAR_14->data;
 else
  VAR_16->feat = FUNC_17(VAR_7, &VAR_13->dev)->data;

 VAR_18 = FUNC_8(VAR_16);
 if (VAR_18)
  goto err_free;

 VAR_19 = FUNC_21(VAR_16->pdev, VAR_5, 0);
 VAR_16->base = FUNC_7(&VAR_13->dev, VAR_19);
 if (FUNC_2(VAR_16->base)) {
  VAR_18 = FUNC_3(VAR_16->base);
  goto err_free;
 }

 VAR_16->irq = FUNC_20(VAR_16->pdev, 0);
 if (VAR_16->irq < 0) {
  FUNC_0("platform_get_irq failed\n");
  VAR_18 = -VAR_2;
  goto err_free;
 }

 if (VAR_20 && FUNC_18(VAR_20, "syscon-pol")) {
  VAR_16->syscon_pol = FUNC_27(VAR_20, "syscon-pol");
  if (FUNC_2(VAR_16->syscon_pol)) {
   FUNC_6(&VAR_13->dev, "failed to get syscon-pol regmap\n");
   VAR_18 = FUNC_3(VAR_16->syscon_pol);
   goto err_free;
  }

  if (FUNC_19(VAR_20, "syscon-pol", 1,
    &VAR_16->syscon_pol_offset)) {
   FUNC_6(&VAR_13->dev, "failed to get syscon-pol offset\n");
   VAR_18 = -VAR_1;
   goto err_free;
  }
 }

 VAR_18 = FUNC_9(VAR_16);
 if (VAR_18)
  goto err_free;

 FUNC_24(&VAR_13->dev);

 VAR_18 = FUNC_11(VAR_16);
 if (VAR_18)
  goto err_runtime_get;

 FUNC_4(VAR_16);

 VAR_17 = FUNC_10(VAR_16, VAR_0);
 FUNC_5(&VAR_13->dev, "OMAP DISPC rev %d.%d\n",
        FUNC_1(VAR_17, 7, 4), FUNC_1(VAR_17, 3, 0));

 FUNC_12(VAR_16);

 VAR_15->dispc = VAR_16;
 VAR_15->dispc_ops = &VAR_8;

 VAR_16->debugfs = FUNC_13(VAR_15, "dispc", VAR_6,
       VAR_16);

 return 0;

err_runtime_get:
 FUNC_23(&VAR_13->dev);
err_free:
 FUNC_15(VAR_16);
 return VAR_18;
}
