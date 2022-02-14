
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long long aperture_end; int force_aperture; scalar_t__ aperture_start; } ;
struct iommu_domain {TYPE_1__ geometry; } ;
struct omap_iommu_domain {struct iommu_domain domain; int lock; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 struct omap_iommu_domain* FUNC_0 (int,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static struct iommu_domain *FUNC_2(unsigned VAR_2)
{
 struct omap_iommu_domain *VAR_3;

 if (VAR_2 != VAR_1)
  return ((void*)0);

 VAR_3 = FUNC_0(sizeof(*VAR_3), VAR_0);
 if (!VAR_3)
  return ((void*)0);

 FUNC_1(&VAR_3->lock);

 VAR_3->domain.geometry.aperture_start = 0;
 VAR_3->domain.geometry.aperture_end = (1ULL << 32) - 1;
 VAR_3->domain.geometry.force_aperture = 1;

 return &VAR_3->domain;
}
