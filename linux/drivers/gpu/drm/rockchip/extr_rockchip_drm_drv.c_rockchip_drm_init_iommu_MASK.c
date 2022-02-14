
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct rockchip_drm_private {int mm_lock; int mm; TYPE_1__* domain; } ;
struct iommu_domain_geometry {scalar_t__ aperture_end; scalar_t__ aperture_start; } ;
struct drm_device {struct rockchip_drm_private* dev_private; } ;
struct TYPE_2__ {struct iommu_domain_geometry geometry; } ;


 int FUNC_0 (char*,scalar_t__,scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (int *,scalar_t__,scalar_t__) ;
 TYPE_1__* FUNC_2 (int *) ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_4(struct drm_device *VAR_3)
{
 struct rockchip_drm_private *VAR_4 = VAR_3->dev_private;
 struct iommu_domain_geometry *VAR_5;
 u64 VAR_6, VAR_7;

 if (!VAR_1)
  return 0;

 VAR_4->domain = FUNC_2(&VAR_2);
 if (!VAR_4->domain)
  return -VAR_0;

 VAR_5 = &VAR_4->domain->geometry;
 VAR_6 = VAR_5->aperture_start;
 VAR_7 = VAR_5->aperture_end;

 FUNC_0("IOMMU context initialized (aperture: %#llx-%#llx)\n",
    VAR_6, VAR_7);
 FUNC_1(&VAR_4->mm, VAR_6, VAR_7 - VAR_6 + 1);
 FUNC_3(&VAR_4->mm_lock);

 return 0;
}
