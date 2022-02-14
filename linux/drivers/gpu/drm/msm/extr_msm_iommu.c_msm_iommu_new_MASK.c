
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_mmu {int dummy; } ;
struct msm_iommu {struct msm_mmu base; struct iommu_domain* domain; } ;
struct iommu_domain {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 struct msm_mmu* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct iommu_domain*,int ,struct msm_iommu*) ;
 struct msm_iommu* FUNC_2 (int,int ) ;
 int VAR_3 ;
 int FUNC_3 (struct msm_mmu*,struct device*,int *) ;

struct msm_mmu *FUNC_4(struct device *VAR_4, struct iommu_domain *VAR_5)
{
 struct msm_iommu *VAR_6;

 VAR_6 = FUNC_2(sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return FUNC_0(-VAR_0);

 VAR_6->domain = VAR_5;
 FUNC_3(&VAR_6->base, VAR_4, &VAR_2);
 FUNC_1(VAR_5, VAR_3, VAR_6);

 return &VAR_6->base;
}
