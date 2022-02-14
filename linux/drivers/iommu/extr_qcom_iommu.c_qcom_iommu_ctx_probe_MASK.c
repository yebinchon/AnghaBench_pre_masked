
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct qcom_iommu_dev {struct qcom_iommu_ctx** ctxs; } ;
struct qcom_iommu_ctx {int asid; int base; struct device* dev; } ;
struct device {int of_node; int parent; } ;
struct platform_device {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*,char*,int) ;
 int FUNC_3 (struct device*,char*,...) ;
 struct qcom_iommu_dev* FUNC_4 (int ) ;
 int FUNC_5 (struct device*,struct resource*) ;
 struct qcom_iommu_ctx* FUNC_6 (struct device*,int,int ) ;
 int FUNC_7 (struct device*,int,int ,int ,char*,struct qcom_iommu_ctx*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct qcom_iommu_ctx*,int ) ;
 int FUNC_10 (struct qcom_iommu_ctx*,int ,int ) ;
 int FUNC_11 (struct platform_device*,int ) ;
 struct resource* FUNC_12 (struct platform_device*,int ,int ) ;
 int FUNC_13 (struct platform_device*,struct qcom_iommu_ctx*) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_14(struct platform_device *VAR_7)
{
 struct qcom_iommu_ctx *VAR_8;
 struct device *VAR_9 = &VAR_7->dev;
 struct qcom_iommu_dev *VAR_10 = FUNC_4(VAR_9->parent);
 struct resource *VAR_11;
 int VAR_12, VAR_13;

 VAR_8 = FUNC_6(VAR_9, sizeof(*VAR_8), VAR_3);
 if (!VAR_8)
  return -VAR_2;

 VAR_8->dev = VAR_9;
 FUNC_13(VAR_7, VAR_8);

 VAR_11 = FUNC_12(VAR_7, VAR_4, 0);
 VAR_8->base = FUNC_5(VAR_9, VAR_11);
 if (FUNC_0(VAR_8->base))
  return FUNC_1(VAR_8->base);

 VAR_13 = FUNC_11(VAR_7, 0);
 if (VAR_13 < 0)
  return -VAR_1;




 FUNC_10(VAR_8, VAR_0, FUNC_9(VAR_8, VAR_0));

 VAR_12 = FUNC_7(VAR_9, VAR_13,
          VAR_6,
          VAR_5,
          "qcom-iommu-fault",
          VAR_8);
 if (VAR_12) {
  FUNC_3(VAR_9, "failed to request IRQ %u\n", VAR_13);
  return VAR_12;
 }

 VAR_12 = FUNC_8(VAR_9->of_node);
 if (VAR_12 < 0) {
  FUNC_3(VAR_9, "missing reg property\n");
  return VAR_12;
 }

 VAR_8->asid = VAR_12;

 FUNC_2(VAR_9, "found asid %u\n", VAR_8->asid);

 VAR_10->ctxs[VAR_8->asid - 1] = VAR_8;

 return 0;
}
