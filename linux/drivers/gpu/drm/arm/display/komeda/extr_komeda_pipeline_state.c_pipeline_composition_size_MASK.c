
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct drm_display_mode {int vdisplay; int hdisplay; } ;
struct TYPE_2__ {struct drm_display_mode adjusted_mode; } ;
struct komeda_crtc_state {TYPE_1__ base; } ;



void FUNC_0(struct komeda_crtc_state *VAR_0,
          u16 *VAR_1, u16 *VAR_2)
{
 struct drm_display_mode *VAR_3 = &VAR_0->base.adjusted_mode;

 if (VAR_1)
  *VAR_1 = VAR_3->hdisplay;
 if (VAR_2)
  *VAR_2 = VAR_3->vdisplay;
}
