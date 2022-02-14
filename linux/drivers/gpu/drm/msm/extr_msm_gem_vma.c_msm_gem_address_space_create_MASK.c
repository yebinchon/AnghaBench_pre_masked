
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct msm_gem_address_space {char const* name; int kref; int mm; int mmu; int lock; } ;
struct TYPE_2__ {int aperture_end; int aperture_start; } ;
struct iommu_domain {TYPE_1__ geometry; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 struct msm_gem_address_space* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int,int) ;
 int FUNC_2 (int *) ;
 struct msm_gem_address_space* FUNC_3 (int,int ) ;
 int FUNC_4 (struct device*,struct iommu_domain*) ;
 int FUNC_5 (int *) ;

struct msm_gem_address_space *
FUNC_6(struct device *VAR_3, struct iommu_domain *VAR_4,
  const char *VAR_5)
{
 struct msm_gem_address_space *VAR_6;
 u64 VAR_7 = VAR_4->geometry.aperture_end -
  VAR_4->geometry.aperture_start;

 VAR_6 = FUNC_3(sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return FUNC_0(-VAR_0);

 FUNC_5(&VAR_6->lock);
 VAR_6->name = VAR_5;
 VAR_6->mmu = FUNC_4(VAR_3, VAR_4);

 FUNC_1(&VAR_6->mm, (VAR_4->geometry.aperture_start >> VAR_2),
  VAR_7 >> VAR_2);

 FUNC_2(&VAR_6->kref);

 return VAR_6;
}
