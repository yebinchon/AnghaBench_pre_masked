
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int num_crtc; int mode_config_initialized; } ;
struct TYPE_5__ {int aper_base; } ;
struct amdgpu_device {TYPE_3__ mode_info; TYPE_4__* ddev; TYPE_1__ gmc; int crtc_irq; } ;
struct TYPE_6__ {int max_width; int max_height; int preferred_depth; int prefer_shadow; int fb_base; int * funcs; } ;
struct TYPE_8__ {TYPE_2__ mode_config; scalar_t__ max_vblank_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct amdgpu_device*) ;
 int FUNC_1 (struct amdgpu_device*,int ,int ,int *) ;
 int VAR_2 ;
 int FUNC_2 (struct amdgpu_device*,int) ;
 int FUNC_3 (struct amdgpu_device*,int) ;
 int FUNC_4 (TYPE_4__*) ;

__attribute__((used)) static int FUNC_5(void *VAR_3)
{
 int VAR_4, VAR_5;
 struct amdgpu_device *VAR_6 = (struct amdgpu_device *)VAR_3;

 VAR_4 = FUNC_1(VAR_6, VAR_0, VAR_1, &VAR_6->crtc_irq);
 if (VAR_4)
  return VAR_4;

 VAR_6->ddev->max_vblank_count = 0;

 VAR_6->ddev->mode_config.funcs = &VAR_2;

 VAR_6->ddev->mode_config.max_width = 16384;
 VAR_6->ddev->mode_config.max_height = 16384;

 VAR_6->ddev->mode_config.preferred_depth = 24;
 VAR_6->ddev->mode_config.prefer_shadow = 1;

 VAR_6->ddev->mode_config.fb_base = VAR_6->gmc.aper_base;

 VAR_4 = FUNC_0(VAR_6);
 if (VAR_4)
  return VAR_4;

 VAR_6->ddev->mode_config.max_width = 16384;
 VAR_6->ddev->mode_config.max_height = 16384;


 for (VAR_5 = 0; VAR_5 < VAR_6->mode_info.num_crtc; VAR_5++) {
  VAR_4 = FUNC_3(VAR_6, VAR_5);
  if (VAR_4)
   return VAR_4;
  VAR_4 = FUNC_2(VAR_6, VAR_5);
  if (VAR_4)
   return VAR_4;
 }

 FUNC_4(VAR_6->ddev);

 VAR_6->mode_info.mode_config_initialized = 1;
 return 0;
}
