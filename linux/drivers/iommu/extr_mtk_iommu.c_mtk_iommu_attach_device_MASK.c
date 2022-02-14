
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int* ttbr; } ;
struct TYPE_5__ {TYPE_1__ arm_v7s_cfg; } ;
struct mtk_iommu_domain {TYPE_2__ cfg; } ;
struct mtk_iommu_data {scalar_t__ base; struct mtk_iommu_domain* m4u_dom; } ;
struct iommu_domain {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_6__ {struct mtk_iommu_data* iommu_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_3__* FUNC_0 (struct device*) ;
 int FUNC_1 (struct mtk_iommu_data*,struct device*,int) ;
 struct mtk_iommu_domain* FUNC_2 (struct iommu_domain*) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct iommu_domain *VAR_3,
       struct device *VAR_4)
{
 struct mtk_iommu_domain *VAR_5 = FUNC_2(VAR_3);
 struct mtk_iommu_data *VAR_6 = FUNC_0(VAR_4)->iommu_priv;

 if (!VAR_6)
  return -VAR_0;


 if (!VAR_6->m4u_dom) {
  VAR_6->m4u_dom = VAR_5;
  FUNC_3(VAR_5->cfg.arm_v7s_cfg.ttbr[0] & VAR_1,
         VAR_6->base + VAR_2);
 }

 FUNC_1(VAR_6, VAR_4, 1);
 return 0;
}
