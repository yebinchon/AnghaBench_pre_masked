
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int crtc_w; int crtc_h; TYPE_2__* plane; } ;
struct intel_plane_state {TYPE_3__ base; } ;
struct drm_mode_config {int cursor_width; int cursor_height; } ;
struct TYPE_5__ {TYPE_1__* dev; } ;
struct TYPE_4__ {struct drm_mode_config mode_config; } ;



__attribute__((used)) static bool FUNC_0(const struct intel_plane_state *VAR_0)
{
 const struct drm_mode_config *VAR_1 =
  &VAR_0->base.plane->dev->mode_config;
 int VAR_2 = VAR_0->base.crtc_w;
 int VAR_3 = VAR_0->base.crtc_h;

 return VAR_2 > 0 && VAR_2 <= VAR_1->cursor_width &&
  VAR_3 > 0 && VAR_3 <= VAR_1->cursor_height;
}
