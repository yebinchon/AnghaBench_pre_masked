
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int num_crtc; int mode_config_initialized; } ;
struct TYPE_6__ {int aper_base; } ;
struct amdgpu_device {TYPE_3__ mode_info; TYPE_4__* ddev; TYPE_1__ gmc; int hpd_irq; int pageflip_irq; int crtc_irq; } ;
struct TYPE_7__ {int async_page_flip; int max_width; int max_height; int preferred_depth; int prefer_shadow; int fb_base; int * funcs; } ;
struct TYPE_9__ {TYPE_2__ mode_config; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct amdgpu_device*) ;
 int FUNC_1 (struct amdgpu_device*) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (struct amdgpu_device*,int ,int,int *) ;
 int VAR_4 ;
 int FUNC_4 (struct amdgpu_device*) ;
 int FUNC_5 (struct amdgpu_device*) ;
 int FUNC_6 (struct amdgpu_device*,int) ;
 int FUNC_7 (TYPE_4__*) ;

__attribute__((used)) static int FUNC_8(void *VAR_5)
{
 int VAR_6, VAR_7;
 struct amdgpu_device *VAR_8 = (struct amdgpu_device *)VAR_5;

 for (VAR_7 = 0; VAR_7 < VAR_8->mode_info.num_crtc; VAR_7++) {
  VAR_6 = FUNC_3(VAR_8, VAR_0, VAR_7 + 1, &VAR_8->crtc_irq);
  if (VAR_6)
   return VAR_6;
 }

 for (VAR_7 = VAR_2; VAR_7 < 20; VAR_7 += 2) {
  VAR_6 = FUNC_3(VAR_8, VAR_0, VAR_7, &VAR_8->pageflip_irq);
  if (VAR_6)
   return VAR_6;
 }


 VAR_6 = FUNC_3(VAR_8, VAR_0, VAR_3, &VAR_8->hpd_irq);
 if (VAR_6)
  return VAR_6;

 VAR_8->ddev->mode_config.funcs = &VAR_4;

 VAR_8->ddev->mode_config.async_page_flip = 1;

 VAR_8->ddev->mode_config.max_width = 16384;
 VAR_8->ddev->mode_config.max_height = 16384;

 VAR_8->ddev->mode_config.preferred_depth = 24;
 VAR_8->ddev->mode_config.prefer_shadow = 1;

 VAR_8->ddev->mode_config.fb_base = VAR_8->gmc.aper_base;

 VAR_6 = FUNC_1(VAR_8);
 if (VAR_6)
  return VAR_6;

 VAR_8->ddev->mode_config.max_width = 16384;
 VAR_8->ddev->mode_config.max_height = 16384;



 for (VAR_7 = 0; VAR_7 < VAR_8->mode_info.num_crtc; VAR_7++) {
  VAR_6 = FUNC_6(VAR_8, VAR_7);
  if (VAR_6)
   return VAR_6;
 }

 if (FUNC_0(VAR_8))
  FUNC_2(VAR_8->ddev);
 else
  return -VAR_1;


 VAR_6 = FUNC_4(VAR_8);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_5(VAR_8);
 if (VAR_6)
  return VAR_6;

 FUNC_7(VAR_8->ddev);

 VAR_8->mode_info.mode_config_initialized = 1;
 return 0;
}
