
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct resource {int dummy; } ;
struct platform_device {int dummy; } ;
struct komeda_product_data {int product_id; TYPE_1__* (* identify ) (int *,TYPE_2__*) ;} ;
struct TYPE_4__ {int core_id; } ;
struct komeda_dev {int * iommu; TYPE_1__* funcs; struct device* dev; int dma_parms; TYPE_2__ chip; int * reg_base; int * aclk; int lock; } ;
struct device {int kobj; int * dma_parms; } ;
struct TYPE_3__ {int (* enum_resources ) (struct komeda_dev*) ;int (* connect_iommu ) (struct komeda_dev*) ;int (* init_format_table ) (struct komeda_dev*) ;} ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 struct komeda_dev* FUNC_3 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int * FUNC_10 (struct device*,char*) ;
 int * FUNC_11 (struct device*,struct resource*) ;
 struct komeda_dev* FUNC_12 (struct device*,int,int ) ;
 int FUNC_13 (struct device*,int ) ;
 int * FUNC_14 (struct device*) ;
 int FUNC_15 (struct komeda_dev*) ;
 int FUNC_16 (struct komeda_dev*) ;
 int FUNC_17 (struct komeda_dev*) ;
 int FUNC_18 (struct device*,struct komeda_dev*) ;
 int FUNC_19 (struct komeda_dev*,int ) ;
 int VAR_4 ;
 int FUNC_20 (int *) ;
 struct komeda_product_data* FUNC_21 (struct device*) ;
 struct resource* FUNC_22 (struct platform_device*,int ,int ) ;
 TYPE_1__* FUNC_23 (int *,TYPE_2__*) ;
 int FUNC_24 (struct komeda_dev*) ;
 int FUNC_25 (struct komeda_dev*) ;
 int FUNC_26 (struct komeda_dev*) ;
 int FUNC_27 (int *,int *) ;
 struct platform_device* FUNC_28 (struct device*) ;

struct komeda_dev *FUNC_29(struct device *VAR_5)
{
 struct platform_device *VAR_6 = FUNC_28(VAR_5);
 const struct komeda_product_data *VAR_7;
 struct komeda_dev *VAR_8;
 struct resource *VAR_9;
 int VAR_10 = 0;

 VAR_7 = FUNC_21(VAR_5);
 if (!VAR_7)
  return FUNC_3(-VAR_0);

 VAR_9 = FUNC_22(VAR_6, VAR_3, 0);
 if (!VAR_9) {
  FUNC_1("No registers defined.\n");
  return FUNC_3(-VAR_0);
 }

 VAR_8 = FUNC_12(VAR_5, sizeof(*VAR_8), VAR_2);
 if (!VAR_8)
  return FUNC_3(-VAR_1);

 FUNC_20(&VAR_8->lock);

 VAR_8->dev = VAR_5;
 VAR_8->reg_base = FUNC_11(VAR_5, VAR_9);
 if (FUNC_4(VAR_8->reg_base)) {
  FUNC_1("Map register space failed.\n");
  VAR_10 = FUNC_8(VAR_8->reg_base);
  VAR_8->reg_base = ((void*)0);
  goto err_cleanup;
 }

 VAR_8->aclk = FUNC_10(VAR_5, "aclk");
 if (FUNC_4(VAR_8->aclk)) {
  FUNC_1("Get engine clk failed.\n");
  VAR_10 = FUNC_8(VAR_8->aclk);
  VAR_8->aclk = ((void*)0);
  goto err_cleanup;
 }

 FUNC_9(VAR_8->aclk);

 VAR_8->funcs = VAR_7->identify(VAR_8->reg_base, &VAR_8->chip);
 if (!FUNC_19(VAR_8, VAR_7->product_id)) {
  FUNC_1("DT configured %x mismatch with real HW %x.\n",
     VAR_7->product_id,
     FUNC_7(VAR_8->chip.core_id));
  VAR_10 = -VAR_0;
  goto err_cleanup;
 }

 FUNC_2("Found ARM Mali-D%x version r%dp%d\n",
   FUNC_7(VAR_8->chip.core_id),
   FUNC_5(VAR_8->chip.core_id),
   FUNC_6(VAR_8->chip.core_id));

 VAR_8->funcs->init_format_table(VAR_8);

 VAR_10 = VAR_8->funcs->enum_resources(VAR_8);
 if (VAR_10) {
  FUNC_1("enumerate display resource failed.\n");
  goto err_cleanup;
 }

 VAR_10 = FUNC_18(VAR_5, VAR_8);
 if (VAR_10) {
  FUNC_1("parse device tree failed.\n");
  goto err_cleanup;
 }

 VAR_10 = FUNC_15(VAR_8);
 if (VAR_10) {
  FUNC_1("assemble display pipelines failed.\n");
  goto err_cleanup;
 }

 VAR_5->dma_parms = &VAR_8->dma_parms;
 FUNC_13(VAR_5, FUNC_0(32));

 VAR_8->iommu = FUNC_14(VAR_8->dev);
 if (!VAR_8->iommu)
  FUNC_2("continue without IOMMU support!\n");

 if (VAR_8->iommu && VAR_8->funcs->connect_iommu) {
  VAR_10 = VAR_8->funcs->connect_iommu(VAR_8);
  if (VAR_10) {
   VAR_8->iommu = ((void*)0);
   goto err_cleanup;
  }
 }

 VAR_10 = FUNC_27(&VAR_5->kobj, &VAR_4);
 if (VAR_10) {
  FUNC_1("create sysfs group failed.\n");
  goto err_cleanup;
 }





 return VAR_8;

err_cleanup:
 FUNC_17(VAR_8);
 return FUNC_3(VAR_10);
}
