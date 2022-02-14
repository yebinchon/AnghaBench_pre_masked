
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int force_aperture; scalar_t__ aperture_end; int aperture_start; } ;
struct iommu_domain {TYPE_1__ geometry; } ;
struct TYPE_4__ {scalar_t__ iovmm_end; int iovmm_base; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 TYPE_2__* VAR_2 ;
 struct iommu_domain* FUNC_0 (int,int ) ;

__attribute__((used)) static struct iommu_domain *FUNC_1(unsigned VAR_3)
{
 struct iommu_domain *VAR_4;

 if (VAR_3 != VAR_1)
  return ((void*)0);

 VAR_4 = FUNC_0(sizeof(*VAR_4), VAR_0);
 if (VAR_4) {
  VAR_4->geometry.aperture_start = VAR_2->iovmm_base;
  VAR_4->geometry.aperture_end = VAR_2->iovmm_end - 1;
  VAR_4->geometry.force_aperture = 1;
 }

 return VAR_4;
}
