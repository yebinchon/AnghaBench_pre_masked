
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int aperture_end; int force_aperture; scalar_t__ aperture_start; } ;
struct iommu_domain {TYPE_1__ geometry; } ;
struct tegra_smmu_as {int attr; struct iommu_domain domain; int pd; struct tegra_smmu_as* count; void* pts; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 void* FUNC_2 (int ,int,int) ;
 int FUNC_3 (struct tegra_smmu_as*) ;
 struct tegra_smmu_as* FUNC_4 (int,int) ;

__attribute__((used)) static struct iommu_domain *FUNC_5(unsigned VAR_8)
{
 struct tegra_smmu_as *VAR_9;

 if (VAR_8 != VAR_1)
  return ((void*)0);

 VAR_9 = FUNC_4(sizeof(*VAR_9), VAR_0);
 if (!VAR_9)
  return ((void*)0);

 VAR_9->attr = VAR_4 | VAR_5 | VAR_3;

 VAR_9->pd = FUNC_1(VAR_0 | VAR_6 | VAR_7);
 if (!VAR_9->pd) {
  FUNC_3(VAR_9);
  return ((void*)0);
 }

 VAR_9->count = FUNC_2(VAR_2, sizeof(u32), VAR_0);
 if (!VAR_9->count) {
  FUNC_0(VAR_9->pd);
  FUNC_3(VAR_9);
  return ((void*)0);
 }

 VAR_9->pts = FUNC_2(VAR_2, sizeof(*VAR_9->pts), VAR_0);
 if (!VAR_9->pts) {
  FUNC_3(VAR_9->count);
  FUNC_0(VAR_9->pd);
  FUNC_3(VAR_9);
  return ((void*)0);
 }


 VAR_9->domain.geometry.aperture_start = 0;
 VAR_9->domain.geometry.aperture_end = 0xffffffff;
 VAR_9->domain.geometry.force_aperture = 1;

 return &VAR_9->domain;
}
