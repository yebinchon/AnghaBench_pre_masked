
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u64 ;
struct TYPE_4__ {size_t hpos; size_t vpos; size_t sharpness; size_t flicker_filter; size_t flicker_filter_2d; size_t flicker_filter_adaptive; size_t chroma_filter; size_t luma_filter; size_t dot_crawl; scalar_t__ overscan_h; scalar_t__ overscan_v; } ;
struct intel_sdvo_connector_state {TYPE_2__ tv; } ;
struct intel_sdvo_connector {struct drm_property* dot_crawl; struct drm_property* tv_luma_filter; struct drm_property* tv_chroma_filter; struct drm_property* flicker_filter_adaptive; struct drm_property* flicker_filter_2d; struct drm_property* flicker_filter; struct drm_property* sharpness; struct drm_property* brightness; struct drm_property* hue; struct drm_property* contrast; struct drm_property* saturation; struct drm_property* vpos; struct drm_property* hpos; scalar_t__ max_hscan; struct drm_property* right; struct drm_property* left; scalar_t__ max_vscan; struct drm_property* bottom; struct drm_property* top; int * tv_format_supported; struct drm_property* tv_format; } ;
struct drm_property {int dummy; } ;
struct drm_crtc_state {int connectors_changed; } ;
struct TYPE_3__ {size_t saturation; size_t contrast; size_t hue; size_t brightness; int mode; } ;
struct drm_connector_state {TYPE_1__ tv; scalar_t__ crtc; int state; } ;
struct drm_connector {int dummy; } ;


 struct drm_crtc_state* FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (struct drm_connector*,struct drm_connector_state*,struct drm_property*,size_t) ;
 struct intel_sdvo_connector* FUNC_2 (struct drm_connector*) ;
 struct intel_sdvo_connector_state* FUNC_3 (struct drm_connector_state*) ;

__attribute__((used)) static int
FUNC_4(struct drm_connector *VAR_0,
      struct drm_connector_state *VAR_1,
      struct drm_property *VAR_2,
      u64 VAR_3)
{
 struct intel_sdvo_connector *VAR_4 = FUNC_2(VAR_0);
 struct intel_sdvo_connector_state *VAR_5 = FUNC_3(VAR_1);

 if (VAR_2 == VAR_4->tv_format) {
  VAR_1->tv.mode = VAR_4->tv_format_supported[VAR_3];

  if (VAR_1->crtc) {
   struct drm_crtc_state *VAR_6 =
    FUNC_0(VAR_1->state, VAR_1->crtc);

   VAR_6->connectors_changed = 1;
  }
 } else if (VAR_2 == VAR_4->top ||
     VAR_2 == VAR_4->bottom)

  VAR_5->tv.overscan_v = VAR_4->max_vscan - VAR_3;
 else if (VAR_2 == VAR_4->left ||
   VAR_2 == VAR_4->right)

  VAR_5->tv.overscan_h = VAR_4->max_hscan - VAR_3;
 else if (VAR_2 == VAR_4->hpos)
  VAR_5->tv.hpos = VAR_3;
 else if (VAR_2 == VAR_4->vpos)
  VAR_5->tv.vpos = VAR_3;
 else if (VAR_2 == VAR_4->saturation)
  VAR_1->tv.saturation = VAR_3;
 else if (VAR_2 == VAR_4->contrast)
  VAR_1->tv.contrast = VAR_3;
 else if (VAR_2 == VAR_4->hue)
  VAR_1->tv.hue = VAR_3;
 else if (VAR_2 == VAR_4->brightness)
  VAR_1->tv.brightness = VAR_3;
 else if (VAR_2 == VAR_4->sharpness)
  VAR_5->tv.sharpness = VAR_3;
 else if (VAR_2 == VAR_4->flicker_filter)
  VAR_5->tv.flicker_filter = VAR_3;
 else if (VAR_2 == VAR_4->flicker_filter_2d)
  VAR_5->tv.flicker_filter_2d = VAR_3;
 else if (VAR_2 == VAR_4->flicker_filter_adaptive)
  VAR_5->tv.flicker_filter_adaptive = VAR_3;
 else if (VAR_2 == VAR_4->tv_chroma_filter)
  VAR_5->tv.chroma_filter = VAR_3;
 else if (VAR_2 == VAR_4->tv_luma_filter)
  VAR_5->tv.luma_filter = VAR_3;
 else if (VAR_2 == VAR_4->dot_crawl)
  VAR_5->tv.dot_crawl = VAR_3;
 else
  return FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3);

 return 0;
}
