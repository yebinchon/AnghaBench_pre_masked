
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long long aperture_end; int force_aperture; scalar_t__ aperture_start; } ;
struct iommu_domain {TYPE_1__ geometry; } ;
struct msm_priv {struct iommu_domain domain; int list_attached; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 unsigned int VAR_1 ;
 int FUNC_1 (struct msm_priv*) ;
 struct msm_priv* FUNC_2 (int,int ) ;

__attribute__((used)) static struct iommu_domain *FUNC_3(unsigned VAR_2)
{
 struct msm_priv *VAR_3;

 if (VAR_2 != VAR_1)
  return ((void*)0);

 VAR_3 = FUNC_2(sizeof(*VAR_3), VAR_0);
 if (!VAR_3)
  goto fail_nomem;

 FUNC_0(&VAR_3->list_attached);

 VAR_3->domain.geometry.aperture_start = 0;
 VAR_3->domain.geometry.aperture_end = (1ULL << 32) - 1;
 VAR_3->domain.geometry.force_aperture = 1;

 return &VAR_3->domain;

fail_nomem:
 FUNC_1(VAR_3);
 return ((void*)0);
}
