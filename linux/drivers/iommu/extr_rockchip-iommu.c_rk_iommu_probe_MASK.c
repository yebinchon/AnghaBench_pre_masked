
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct rk_iommu {scalar_t__ num_mmu; int num_irq; int num_clocks; TYPE_2__* clocks; int group; int iommu; struct device* dev; int reset_disabled; int * bases; } ;
struct resource {int dummy; } ;
struct device {TYPE_1__* of_node; } ;
struct platform_device {int num_resources; struct device dev; } ;
struct TYPE_6__ {int id; } ;
struct TYPE_5__ {int fwnode; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int,TYPE_2__*) ;
 int FUNC_5 (int,TYPE_2__*) ;
 int FUNC_6 (struct device*) ;
 int FUNC_7 (struct device*,char*) ;
 int FUNC_8 (struct device*,int,TYPE_2__*) ;
 int FUNC_9 (struct device*,struct resource*) ;
 void* FUNC_10 (struct device*,int,int,int ) ;
 struct rk_iommu* FUNC_11 (struct device*,int,int ) ;
 int FUNC_12 (struct device*,int,int ,int ,int ,struct rk_iommu*) ;
 struct device* VAR_5 ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *,int *) ;
 int FUNC_15 (int *,int *) ;
 int FUNC_16 (int *,struct device*,int *,int ) ;
 int FUNC_17 (int *) ;
 int FUNC_18 () ;
 int FUNC_19 (int ) ;
 int VAR_6 ;
 int FUNC_20 (struct platform_device*,int) ;
 struct resource* FUNC_21 (struct platform_device*,int ,int) ;
 int FUNC_22 (struct platform_device*) ;
 int FUNC_23 (struct platform_device*,struct rk_iommu*) ;
 int FUNC_24 (struct device*) ;
 int FUNC_25 (struct device*) ;
 int * VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_26(struct platform_device *VAR_10)
{
 struct device *VAR_11 = &VAR_10->dev;
 struct rk_iommu *VAR_12;
 struct resource *VAR_13;
 int VAR_14 = VAR_10->num_resources;
 int VAR_15, VAR_16;

 VAR_12 = FUNC_11(VAR_11, sizeof(*VAR_12), VAR_2);
 if (!VAR_12)
  return -VAR_1;

 FUNC_23(VAR_10, VAR_12);
 VAR_12->dev = VAR_11;
 VAR_12->num_mmu = 0;

 VAR_12->bases = FUNC_10(VAR_11, VAR_14, sizeof(*VAR_12->bases),
        VAR_2);
 if (!VAR_12->bases)
  return -VAR_1;

 for (VAR_16 = 0; VAR_16 < VAR_14; VAR_16++) {
  VAR_13 = FUNC_21(VAR_10, VAR_3, VAR_16);
  if (!VAR_13)
   continue;
  VAR_12->bases[VAR_16] = FUNC_9(&VAR_10->dev, VAR_13);
  if (FUNC_1(VAR_12->bases[VAR_16]))
   continue;
  VAR_12->num_mmu++;
 }
 if (VAR_12->num_mmu == 0)
  return FUNC_2(VAR_12->bases[0]);

 VAR_12->num_irq = FUNC_22(VAR_10);
 if (VAR_12->num_irq < 0)
  return VAR_12->num_irq;

 VAR_12->reset_disabled = FUNC_7(VAR_11,
     "rockchip,disable-mmu-reset");

 VAR_12->num_clocks = FUNC_0(VAR_7);
 VAR_12->clocks = FUNC_10(VAR_12->dev, VAR_12->num_clocks,
         sizeof(*VAR_12->clocks), VAR_2);
 if (!VAR_12->clocks)
  return -VAR_1;

 for (VAR_16 = 0; VAR_16 < VAR_12->num_clocks; ++VAR_16)
  VAR_12->clocks[VAR_16].id = VAR_7[VAR_16];






 VAR_15 = FUNC_8(VAR_12->dev, VAR_12->num_clocks, VAR_12->clocks);
 if (VAR_15 == -VAR_0)
  VAR_12->num_clocks = 0;
 else if (VAR_15)
  return VAR_15;

 VAR_15 = FUNC_4(VAR_12->num_clocks, VAR_12->clocks);
 if (VAR_15)
  return VAR_15;

 VAR_12->group = FUNC_18();
 if (FUNC_1(VAR_12->group)) {
  VAR_15 = FUNC_2(VAR_12->group);
  goto err_unprepare_clocks;
 }

 VAR_15 = FUNC_16(&VAR_12->iommu, VAR_11, ((void*)0), FUNC_6(VAR_11));
 if (VAR_15)
  goto err_put_group;

 FUNC_15(&VAR_12->iommu, &VAR_9);
 FUNC_14(&VAR_12->iommu, &VAR_11->of_node->fwnode);

 VAR_15 = FUNC_13(&VAR_12->iommu);
 if (VAR_15)
  goto err_remove_sysfs;






 if (!VAR_5)
  VAR_5 = &VAR_10->dev;

 FUNC_3(&VAR_6, &VAR_9);

 FUNC_25(VAR_11);

 for (VAR_16 = 0; VAR_16 < VAR_12->num_irq; VAR_16++) {
  int VAR_17 = FUNC_20(VAR_10, VAR_16);

  if (VAR_17 < 0)
   return VAR_17;

  VAR_15 = FUNC_12(VAR_12->dev, VAR_17, VAR_8,
           VAR_4, FUNC_6(VAR_11), VAR_12);
  if (VAR_15) {
   FUNC_24(VAR_11);
   goto err_remove_sysfs;
  }
 }

 return 0;
err_remove_sysfs:
 FUNC_17(&VAR_12->iommu);
err_put_group:
 FUNC_19(VAR_12->group);
err_unprepare_clocks:
 FUNC_5(VAR_12->num_clocks, VAR_12->clocks);
 return VAR_15;
}
