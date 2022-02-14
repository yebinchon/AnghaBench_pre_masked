
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qcom_iommu_dev {int ** ctxs; } ;
struct qcom_iommu_ctx {int asid; } ;
struct TYPE_2__ {int parent; } ;
struct platform_device {TYPE_1__ dev; } ;


 struct qcom_iommu_dev* FUNC_0 (int ) ;
 struct qcom_iommu_ctx* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (struct platform_device*,int *) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_0)
{
 struct qcom_iommu_dev *VAR_1 = FUNC_0(VAR_0->dev.parent);
 struct qcom_iommu_ctx *VAR_2 = FUNC_1(VAR_0);

 FUNC_2(VAR_0, ((void*)0));

 VAR_1->ctxs[VAR_2->asid - 1] = ((void*)0);

 return 0;
}
