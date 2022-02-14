
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int force_aperture; int aperture_end; scalar_t__ aperture_start; } ;
struct iommu_domain {TYPE_1__ geometry; } ;
struct mtk_iommu_domain {struct iommu_domain domain; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ FUNC_1 (struct iommu_domain*) ;
 int FUNC_2 (struct iommu_domain*) ;
 int FUNC_3 (struct mtk_iommu_domain*) ;
 struct mtk_iommu_domain* FUNC_4 (int,int ) ;
 scalar_t__ FUNC_5 (struct mtk_iommu_domain*) ;

__attribute__((used)) static struct iommu_domain *FUNC_6(unsigned VAR_2)
{
 struct mtk_iommu_domain *VAR_3;

 if (VAR_2 != VAR_1)
  return ((void*)0);

 VAR_3 = FUNC_4(sizeof(*VAR_3), VAR_0);
 if (!VAR_3)
  return ((void*)0);

 if (FUNC_1(&VAR_3->domain))
  goto free_dom;

 if (FUNC_5(VAR_3))
  goto put_dma_cookie;

 VAR_3->domain.geometry.aperture_start = 0;
 VAR_3->domain.geometry.aperture_end = FUNC_0(32);
 VAR_3->domain.geometry.force_aperture = 1;

 return &VAR_3->domain;

put_dma_cookie:
 FUNC_2(&VAR_3->domain);
free_dom:
 FUNC_3(VAR_3);
 return ((void*)0);
}
