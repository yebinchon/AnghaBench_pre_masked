
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sysmmu_drvdata {int version; int iommu; struct device* sysmmu; int lock; int * clk_master; int * pclk; int * aclk; int * clk; int * sfrbase; } ;
struct resource {int dummy; } ;
struct device {TYPE_1__* of_node; } ;
struct platform_device {struct device dev; } ;
struct TYPE_2__ {int fwnode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (int *) ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_3 (struct sysmmu_drvdata*) ;
 int FUNC_4 (struct device*,char*,...) ;
 int FUNC_5 (struct device*) ;
 void* FUNC_6 (struct device*,char*) ;
 int * FUNC_7 (struct device*,struct resource*) ;
 struct sysmmu_drvdata* FUNC_8 (struct device*,int,int ) ;
 int FUNC_9 (struct device*,int,int ,int ,int ,struct sysmmu_drvdata*) ;
 struct device* VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int *) ;
 int FUNC_12 (int *,int *) ;
 int FUNC_13 (int *,struct device*,int *,int ) ;
 int FUNC_14 (struct platform_device*,int ) ;
 struct resource* FUNC_15 (struct platform_device*,int ,int ) ;
 int FUNC_16 (struct platform_device*,struct sysmmu_drvdata*) ;
 int FUNC_17 (struct device*) ;
 int FUNC_18 (int *) ;

__attribute__((used)) static int FUNC_19(struct platform_device *VAR_17)
{
 int VAR_18, VAR_19;
 struct device *VAR_20 = &VAR_17->dev;
 struct sysmmu_drvdata *VAR_21;
 struct resource *VAR_22;

 VAR_21 = FUNC_8(VAR_20, sizeof(*VAR_21), VAR_3);
 if (!VAR_21)
  return -VAR_1;

 VAR_22 = FUNC_15(VAR_17, VAR_4, 0);
 VAR_21->sfrbase = FUNC_7(VAR_20, VAR_22);
 if (FUNC_0(VAR_21->sfrbase))
  return FUNC_2(VAR_21->sfrbase);

 VAR_18 = FUNC_14(VAR_17, 0);
 if (VAR_18 <= 0)
  return VAR_18;

 VAR_19 = FUNC_9(VAR_20, VAR_18, VAR_16, 0,
    FUNC_5(VAR_20), VAR_21);
 if (VAR_19) {
  FUNC_4(VAR_20, "Unabled to register handler of irq %d\n", VAR_18);
  return VAR_19;
 }

 VAR_21->clk = FUNC_6(VAR_20, "sysmmu");
 if (FUNC_2(VAR_21->clk) == -VAR_0)
  VAR_21->clk = ((void*)0);
 else if (FUNC_0(VAR_21->clk))
  return FUNC_2(VAR_21->clk);

 VAR_21->aclk = FUNC_6(VAR_20, "aclk");
 if (FUNC_2(VAR_21->aclk) == -VAR_0)
  VAR_21->aclk = ((void*)0);
 else if (FUNC_0(VAR_21->aclk))
  return FUNC_2(VAR_21->aclk);

 VAR_21->pclk = FUNC_6(VAR_20, "pclk");
 if (FUNC_2(VAR_21->pclk) == -VAR_0)
  VAR_21->pclk = ((void*)0);
 else if (FUNC_0(VAR_21->pclk))
  return FUNC_2(VAR_21->pclk);

 if (!VAR_21->clk && (!VAR_21->aclk || !VAR_21->pclk)) {
  FUNC_4(VAR_20, "Failed to get device clock(s)!\n");
  return -VAR_2;
 }

 VAR_21->clk_master = FUNC_6(VAR_20, "master");
 if (FUNC_2(VAR_21->clk_master) == -VAR_0)
  VAR_21->clk_master = ((void*)0);
 else if (FUNC_0(VAR_21->clk_master))
  return FUNC_2(VAR_21->clk_master);

 VAR_21->sysmmu = VAR_20;
 FUNC_18(&VAR_21->lock);

 VAR_19 = FUNC_13(&VAR_21->iommu, &VAR_17->dev, ((void*)0),
         FUNC_5(VAR_21->sysmmu));
 if (VAR_19)
  return VAR_19;

 FUNC_12(&VAR_21->iommu, &VAR_15);
 FUNC_11(&VAR_21->iommu, &VAR_20->of_node->fwnode);

 VAR_19 = FUNC_10(&VAR_21->iommu);
 if (VAR_19)
  return VAR_19;

 FUNC_16(VAR_17, VAR_21);

 FUNC_3(VAR_21);
 if (VAR_7 < 0) {
  if (FUNC_1(VAR_21->version) < 5) {
   VAR_7 = VAR_10;
   VAR_5 = VAR_8;
   VAR_6 = VAR_9;
  } else {
   VAR_7 = VAR_13;
   VAR_5 = VAR_11;
   VAR_6 = VAR_12;
  }
 }





 if (!VAR_14)
  VAR_14 = &VAR_17->dev;

 FUNC_17(VAR_20);

 return 0;
}
