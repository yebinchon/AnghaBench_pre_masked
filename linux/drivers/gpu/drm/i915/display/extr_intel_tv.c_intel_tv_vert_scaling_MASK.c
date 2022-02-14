
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drm_display_mode {int crtc_vdisplay; } ;
struct TYPE_3__ {int top; int bottom; } ;
struct TYPE_4__ {TYPE_1__ margins; } ;
struct drm_connector_state {TYPE_2__ tv; } ;



__attribute__((used)) static bool FUNC_0(const struct drm_display_mode *VAR_0,
      const struct drm_connector_state *VAR_1,
      int VAR_2)
{
 return VAR_0->crtc_vdisplay -
  VAR_1->tv.margins.top -
  VAR_1->tv.margins.bottom !=
  VAR_2;
}
