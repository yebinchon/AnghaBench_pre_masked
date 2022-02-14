
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_device {int pdev; } ;
struct TYPE_2__ {scalar_t__ chipset; int aper_base; int page_mask; int cant_use_aperture; } ;
struct drm_agp_head {TYPE_1__ agp_info; int base; int page_mask; int cant_use_aperture; int memory; scalar_t__ bridge; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,TYPE_1__*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct drm_agp_head*) ;
 struct drm_agp_head* FUNC_6 (int,int ) ;

struct drm_agp_head *FUNC_7(struct drm_device *VAR_2)
{
 struct drm_agp_head *VAR_3 = ((void*)0);

 VAR_3 = FUNC_6(sizeof(*VAR_3), VAR_0);
 if (!VAR_3)
  return ((void*)0);
 VAR_3->bridge = FUNC_4(VAR_2->pdev);
 if (!VAR_3->bridge) {
  VAR_3->bridge = FUNC_1(VAR_2->pdev);
  if (!VAR_3->bridge) {
   FUNC_5(VAR_3);
   return ((void*)0);
  }
  FUNC_3(VAR_3->bridge, &VAR_3->agp_info);
  FUNC_2(VAR_3->bridge);
 } else {
  FUNC_3(VAR_3->bridge, &VAR_3->agp_info);
 }
 if (VAR_3->agp_info.chipset == VAR_1) {
  FUNC_5(VAR_3);
  return ((void*)0);
 }
 FUNC_0(&VAR_3->memory);
 VAR_3->cant_use_aperture = VAR_3->agp_info.cant_use_aperture;
 VAR_3->page_mask = VAR_3->agp_info.page_mask;
 VAR_3->base = VAR_3->agp_info.aper_base;
 return VAR_3;
}
