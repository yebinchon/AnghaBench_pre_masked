
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct drm_display_mode {int dummy; } ;
struct TYPE_6__ {int num_crtc; TYPE_3__** crtcs; int mode_config_initialized; } ;
struct amdgpu_device {TYPE_2__ mode_info; } ;
struct TYPE_5__ {struct drm_display_mode mode; scalar_t__ enabled; } ;
struct TYPE_7__ {TYPE_1__ base; } ;


 int FUNC_0 (struct amdgpu_device*) ;
 scalar_t__ FUNC_1 (struct amdgpu_device*,TYPE_3__*,struct drm_display_mode*,struct drm_display_mode*) ;
 int FUNC_2 (struct amdgpu_device*,TYPE_3__*,scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct amdgpu_device *VAR_0)
{
 struct drm_display_mode *VAR_1 = ((void*)0);
 struct drm_display_mode *VAR_2 = ((void*)0);
 u32 VAR_3 = 0, VAR_4;
 int VAR_5;

 if (!VAR_0->mode_info.mode_config_initialized)
  return;

 FUNC_0(VAR_0);

 for (VAR_5 = 0; VAR_5 < VAR_0->mode_info.num_crtc; VAR_5++) {
  if (VAR_0->mode_info.crtcs[VAR_5]->base.enabled)
   VAR_3++;
 }
 for (VAR_5 = 0; VAR_5 < VAR_0->mode_info.num_crtc; VAR_5 += 2) {
  VAR_1 = &VAR_0->mode_info.crtcs[VAR_5]->base.mode;
  VAR_2 = &VAR_0->mode_info.crtcs[VAR_5+1]->base.mode;
  VAR_4 = FUNC_1(VAR_0, VAR_0->mode_info.crtcs[VAR_5], VAR_1, VAR_2);
  FUNC_2(VAR_0, VAR_0->mode_info.crtcs[VAR_5], VAR_4, VAR_3);
  VAR_4 = FUNC_1(VAR_0, VAR_0->mode_info.crtcs[VAR_5+1], VAR_2, VAR_1);
  FUNC_2(VAR_0, VAR_0->mode_info.crtcs[VAR_5+1], VAR_4, VAR_3);
 }
}
