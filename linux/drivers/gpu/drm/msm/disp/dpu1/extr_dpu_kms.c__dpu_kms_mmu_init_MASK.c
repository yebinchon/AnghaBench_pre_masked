
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct msm_gem_address_space {TYPE_5__* mmu; } ;
struct TYPE_6__ {int aperture_start; int aperture_end; } ;
struct iommu_domain {TYPE_1__ geometry; } ;
struct TYPE_9__ {struct msm_gem_address_space* aspace; } ;
struct dpu_kms {TYPE_4__ base; TYPE_2__* dev; } ;
struct TYPE_10__ {TYPE_3__* funcs; } ;
struct TYPE_8__ {int (* attach ) (TYPE_5__*,int ,int ) ;} ;
struct TYPE_7__ {int dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int) ;
 scalar_t__ FUNC_2 (struct msm_gem_address_space*) ;
 int FUNC_3 (struct msm_gem_address_space*) ;
 struct iommu_domain* FUNC_4 (int *) ;
 int FUNC_5 (struct iommu_domain*) ;
 int VAR_0 ;
 struct msm_gem_address_space* FUNC_6 (int ,struct iommu_domain*,char*) ;
 int FUNC_7 (struct msm_gem_address_space*) ;
 int VAR_1 ;
 int FUNC_8 (TYPE_5__*,int ,int ) ;

__attribute__((used)) static int FUNC_9(struct dpu_kms *VAR_2)
{
 struct iommu_domain *VAR_3;
 struct msm_gem_address_space *VAR_4;
 int VAR_5;

 VAR_3 = FUNC_4(&VAR_1);
 if (!VAR_3)
  return 0;

 VAR_3->geometry.aperture_start = 0x1000;
 VAR_3->geometry.aperture_end = 0xffffffff;

 VAR_4 = FUNC_6(VAR_2->dev->dev,
   VAR_3, "dpu1");
 if (FUNC_2(VAR_4)) {
  FUNC_5(VAR_3);
  return FUNC_3(VAR_4);
 }

 VAR_5 = VAR_4->mmu->funcs->attach(VAR_4->mmu, VAR_0,
   FUNC_0(VAR_0));
 if (VAR_5) {
  FUNC_1("failed to attach iommu %d\n", VAR_5);
  FUNC_7(VAR_4);
  return VAR_5;
 }

 VAR_2->base.aspace = VAR_4;
 return 0;
}
