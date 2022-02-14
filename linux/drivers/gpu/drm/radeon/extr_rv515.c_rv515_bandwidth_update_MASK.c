
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_6__ {TYPE_2__** crtcs; int mode_config_initialized; } ;
struct radeon_device {int disp_priority; scalar_t__ family; TYPE_3__ mode_info; } ;
struct drm_display_mode {int dummy; } ;
struct TYPE_4__ {struct drm_display_mode mode; scalar_t__ enabled; } ;
struct TYPE_5__ {TYPE_1__ base; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct radeon_device*) ;
 int FUNC_3 (struct radeon_device*) ;

void FUNC_4(struct radeon_device *VAR_6)
{
 uint32_t VAR_7;
 struct drm_display_mode *VAR_8 = ((void*)0);
 struct drm_display_mode *VAR_9 = ((void*)0);

 if (!VAR_6->mode_info.mode_config_initialized)
  return;

 FUNC_2(VAR_6);

 if (VAR_6->mode_info.crtcs[0]->base.enabled)
  VAR_8 = &VAR_6->mode_info.crtcs[0]->base.mode;
 if (VAR_6->mode_info.crtcs[1]->base.enabled)
  VAR_9 = &VAR_6->mode_info.crtcs[1]->base.mode;





 if ((VAR_6->disp_priority == 2) &&
     (VAR_6->family == VAR_0)) {
  VAR_7 = FUNC_0(VAR_5);
  VAR_7 &= ~VAR_3;
  VAR_7 &= ~VAR_1;
  if (VAR_9)
   VAR_7 |= (1 << VAR_4);
  if (VAR_8)
   VAR_7 |= (1 << VAR_2);
  FUNC_1(VAR_5, VAR_7);
 }
 FUNC_3(VAR_6);
}
