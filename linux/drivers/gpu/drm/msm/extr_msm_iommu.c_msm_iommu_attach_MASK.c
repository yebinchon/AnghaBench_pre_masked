
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_mmu {int dev; } ;
struct msm_iommu {int domain; } ;


 int FUNC_0 (int ,int ) ;
 struct msm_iommu* FUNC_1 (struct msm_mmu*) ;

__attribute__((used)) static int FUNC_2(struct msm_mmu *VAR_0, const char * const *VAR_1,
       int VAR_2)
{
 struct msm_iommu *VAR_3 = FUNC_1(VAR_0);

 return FUNC_0(VAR_3->domain, VAR_0->dev);
}
