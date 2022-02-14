
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t u32 ;
struct resource {int start; } ;
struct device {TYPE_2__* of_node; } ;
struct platform_device {struct device dev; } ;
struct mtk_iommu_data {int enable_4GB; scalar_t__ irq; int list; int iommu; TYPE_1__* larb_imu; int bclk; TYPE_3__* plat_data; int base; int protect_base; struct device* dev; } ;
struct device_node {int dummy; } ;
struct component_match {int dummy; } ;
typedef int resource_size_t ;
struct TYPE_7__ {scalar_t__ has_bclk; int has_4gb_mode; } ;
struct TYPE_6__ {int fwnode; } ;
struct TYPE_5__ {struct device* dev; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int *) ;
 int VAR_7 ;
 int FUNC_5 (struct device*,int *,struct component_match*) ;
 int FUNC_6 (struct device*,struct component_match**,int ,int ,struct device_node*) ;
 int FUNC_7 (struct device*,char*) ;
 int FUNC_8 (struct device*,struct resource*) ;
 void* FUNC_9 (struct device*,int,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int *) ;
 int FUNC_12 (int *,int *) ;
 int FUNC_13 (int *,struct device*,int *,char*,int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *,int *) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_16 (struct mtk_iommu_data*) ;
 int VAR_11 ;
 int FUNC_17 (TYPE_2__*,char*,int *) ;
 TYPE_3__* FUNC_18 (struct device*) ;
 int FUNC_19 (struct device_node*) ;
 struct platform_device* FUNC_20 (struct device_node*) ;
 int FUNC_21 (struct device_node*) ;
 struct device_node* FUNC_22 (TYPE_2__*,char*,int) ;
 int FUNC_23 (struct device_node*,char*,size_t*) ;
 int VAR_12 ;
 scalar_t__ FUNC_24 (struct platform_device*,int ) ;
 struct resource* FUNC_25 (struct platform_device*,int ,int ) ;
 int FUNC_26 (struct platform_device*,struct mtk_iommu_data*) ;
 int VAR_13 ;
 int FUNC_27 (void*) ;

__attribute__((used)) static int FUNC_28(struct platform_device *VAR_14)
{
 struct mtk_iommu_data *VAR_15;
 struct device *VAR_16 = &VAR_14->dev;
 struct resource *VAR_17;
 resource_size_t VAR_18;
 struct component_match *VAR_19 = ((void*)0);
 void *VAR_20;
 int VAR_21, VAR_22, VAR_23;

 VAR_15 = FUNC_9(VAR_16, sizeof(*VAR_15), VAR_3);
 if (!VAR_15)
  return -VAR_1;
 VAR_15->dev = VAR_16;
 VAR_15->plat_data = FUNC_18(VAR_16);


 VAR_20 = FUNC_9(VAR_16, VAR_5 * 2, VAR_3);
 if (!VAR_20)
  return -VAR_1;
 VAR_15->protect_base = FUNC_0(FUNC_27(VAR_20), VAR_5);


 VAR_15->enable_4GB = !!(VAR_9 > (FUNC_1(32) >> VAR_6));
 if (!VAR_15->plat_data->has_4gb_mode)
  VAR_15->enable_4GB = 0;

 VAR_17 = FUNC_25(VAR_14, VAR_4, 0);
 VAR_15->base = FUNC_8(VAR_16, VAR_17);
 if (FUNC_2(VAR_15->base))
  return FUNC_3(VAR_15->base);
 VAR_18 = VAR_17->start;

 VAR_15->irq = FUNC_24(VAR_14, 0);
 if (VAR_15->irq < 0)
  return VAR_15->irq;

 if (VAR_15->plat_data->has_bclk) {
  VAR_15->bclk = FUNC_7(VAR_16, "bclk");
  if (FUNC_2(VAR_15->bclk))
   return FUNC_3(VAR_15->bclk);
 }

 VAR_22 = FUNC_17(VAR_16->of_node,
          "mediatek,larbs", ((void*)0));
 if (VAR_22 < 0)
  return VAR_22;

 for (VAR_21 = 0; VAR_21 < VAR_22; VAR_21++) {
  struct device_node *VAR_24;
  struct platform_device *VAR_25;
  u32 VAR_26;

  VAR_24 = FUNC_22(VAR_16->of_node, "mediatek,larbs", VAR_21);
  if (!VAR_24)
   return -VAR_0;

  if (!FUNC_19(VAR_24)) {
   FUNC_21(VAR_24);
   continue;
  }

  VAR_23 = FUNC_23(VAR_24, "mediatek,larb-id", &VAR_26);
  if (VAR_23)
   VAR_26 = VAR_21;

  VAR_25 = FUNC_20(VAR_24);
  if (!VAR_25) {
   FUNC_21(VAR_24);
   return -VAR_2;
  }
  VAR_15->larb_imu[VAR_26].dev = &VAR_25->dev;

  FUNC_6(VAR_16, &VAR_19, VAR_13,
         VAR_7, VAR_24);
 }

 FUNC_26(VAR_14, VAR_15);

 VAR_23 = FUNC_16(VAR_15);
 if (VAR_23)
  return VAR_23;

 VAR_23 = FUNC_13(&VAR_15->iommu, VAR_16, ((void*)0),
         "mtk-iommu.%pa", &VAR_18);
 if (VAR_23)
  return VAR_23;

 FUNC_12(&VAR_15->iommu, &VAR_11);
 FUNC_11(&VAR_15->iommu, &VAR_14->dev.of_node->fwnode);

 VAR_23 = FUNC_10(&VAR_15->iommu);
 if (VAR_23)
  return VAR_23;

 FUNC_15(&VAR_15->list, &VAR_8);

 if (!FUNC_14(&VAR_12))
  FUNC_4(&VAR_12, &VAR_11);

 return FUNC_5(VAR_16, &VAR_10, VAR_19);
}
