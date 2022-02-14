
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void* uint64_t ;
struct platform_device {int dev; } ;
struct msm_gpu {TYPE_2__* dev; int name; } ;
struct msm_gem_address_space {TYPE_4__* mmu; } ;
struct TYPE_5__ {void* aperture_end; void* aperture_start; } ;
struct iommu_domain {TYPE_1__ geometry; } ;
struct TYPE_8__ {TYPE_3__* funcs; } ;
struct TYPE_7__ {int (* attach ) (TYPE_4__*,int *,int ) ;} ;
struct TYPE_6__ {int dev; } ;


 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ,char*,int ) ;
 struct msm_gem_address_space* FUNC_2 (struct msm_gem_address_space*) ;
 struct msm_gem_address_space* FUNC_3 (int) ;
 scalar_t__ FUNC_4 (struct msm_gem_address_space*) ;
 int FUNC_5 (struct msm_gem_address_space*) ;
 int FUNC_6 (int ) ;
 struct iommu_domain* FUNC_7 (int *) ;
 int FUNC_8 (struct iommu_domain*) ;
 struct msm_gem_address_space* FUNC_9 (int *,struct iommu_domain*,char*) ;
 struct msm_gem_address_space* FUNC_10 (int *,struct msm_gpu*,char*,void*,void*) ;
 int FUNC_11 (struct msm_gem_address_space*) ;
 int VAR_0 ;
 int FUNC_12 (TYPE_4__*,int *,int ) ;
 int FUNC_13 (struct msm_gpu*) ;

__attribute__((used)) static struct msm_gem_address_space *
FUNC_14(struct msm_gpu *VAR_1, struct platform_device *VAR_2,
  uint64_t VAR_3, uint64_t VAR_4)
{
 struct msm_gem_address_space *VAR_5;
 int VAR_6;






 if (!FUNC_6(FUNC_13(VAR_1))) {
  struct iommu_domain *VAR_7 = FUNC_7(&VAR_0);
  if (!VAR_7)
   return ((void*)0);

  VAR_7->geometry.aperture_start = VAR_3;
  VAR_7->geometry.aperture_end = VAR_4;

  FUNC_1(VAR_1->dev->dev, "%s: using IOMMU\n", VAR_1->name);

  VAR_5 = FUNC_9(&VAR_2->dev, VAR_7, "gpu");
  if (FUNC_4(VAR_5))
   FUNC_8(VAR_7);
 } else {
  VAR_5 = FUNC_10(&VAR_2->dev, VAR_1, "gpu",
   VAR_3, VAR_4);
 }

 if (FUNC_4(VAR_5)) {
  FUNC_0(VAR_1->dev->dev, "failed to init mmu: %ld\n",
   FUNC_5(VAR_5));
  return FUNC_2(VAR_5);
 }

 VAR_6 = VAR_5->mmu->funcs->attach(VAR_5->mmu, ((void*)0), 0);
 if (VAR_6) {
  FUNC_11(VAR_5);
  return FUNC_3(VAR_6);
 }

 return VAR_5;
}
