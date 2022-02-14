
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_6__ {TYPE_3__** crtcs; int mode_config_initialized; } ;
struct radeon_device {int num_crtc; TYPE_2__ mode_info; } ;
struct drm_display_mode {int dummy; } ;
struct TYPE_5__ {struct drm_display_mode mode; scalar_t__ enabled; } ;
struct TYPE_7__ {TYPE_1__ base; } ;


 scalar_t__ FUNC_0 (struct radeon_device*,TYPE_3__*,struct drm_display_mode*) ;
 int FUNC_1 (struct radeon_device*,TYPE_3__*,scalar_t__,scalar_t__) ;
 int FUNC_2 (struct radeon_device*) ;

void FUNC_3(struct radeon_device *VAR_0)
{
 struct drm_display_mode *VAR_1 = ((void*)0);
 u32 VAR_2 = 0, VAR_3;
 int VAR_4;

 if (!VAR_0->mode_info.mode_config_initialized)
  return;

 FUNC_2(VAR_0);

 for (VAR_4 = 0; VAR_4 < VAR_0->num_crtc; VAR_4++) {
  if (VAR_0->mode_info.crtcs[VAR_4]->base.enabled)
   VAR_2++;
 }
 for (VAR_4 = 0; VAR_4 < VAR_0->num_crtc; VAR_4++) {
  VAR_1 = &VAR_0->mode_info.crtcs[VAR_4]->base.mode;
  VAR_3 = FUNC_0(VAR_0, VAR_0->mode_info.crtcs[VAR_4], VAR_1);
  FUNC_1(VAR_0, VAR_0->mode_info.crtcs[VAR_4], VAR_3, VAR_2);
 }
}
