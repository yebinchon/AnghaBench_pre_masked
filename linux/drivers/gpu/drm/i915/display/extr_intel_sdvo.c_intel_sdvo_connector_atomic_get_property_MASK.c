
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_4__ {int overscan_v; int overscan_h; int hpos; int vpos; int sharpness; int flicker_filter; int flicker_filter_2d; int flicker_filter_adaptive; int chroma_filter; int luma_filter; int dot_crawl; } ;
struct intel_sdvo_connector_state {TYPE_2__ tv; } ;
struct intel_sdvo_connector {int format_supported_num; scalar_t__* tv_format_supported; int max_vscan; int max_hscan; struct drm_property* dot_crawl; struct drm_property* tv_luma_filter; struct drm_property* tv_chroma_filter; struct drm_property* flicker_filter_adaptive; struct drm_property* flicker_filter_2d; struct drm_property* flicker_filter; struct drm_property* sharpness; struct drm_property* brightness; struct drm_property* hue; struct drm_property* contrast; struct drm_property* saturation; struct drm_property* vpos; struct drm_property* hpos; struct drm_property* right; struct drm_property* left; struct drm_property* bottom; struct drm_property* top; struct drm_property* tv_format; } ;
struct drm_property {int dummy; } ;
struct TYPE_3__ {scalar_t__ mode; int saturation; int contrast; int hue; int brightness; } ;
struct drm_connector_state {TYPE_1__ tv; } ;
struct drm_connector {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct drm_connector*,struct drm_connector_state const*,struct drm_property*,int*) ;
 struct intel_sdvo_connector* FUNC_2 (struct drm_connector*) ;
 struct intel_sdvo_connector_state* FUNC_3 (void*) ;

__attribute__((used)) static int
FUNC_4(struct drm_connector *VAR_0,
      const struct drm_connector_state *VAR_1,
      struct drm_property *VAR_2,
      u64 *VAR_3)
{
 struct intel_sdvo_connector *VAR_4 = FUNC_2(VAR_0);
 const struct intel_sdvo_connector_state *VAR_5 = FUNC_3((void *)VAR_1);

 if (VAR_2 == VAR_4->tv_format) {
  int VAR_6;

  for (VAR_6 = 0; VAR_6 < VAR_4->format_supported_num; VAR_6++)
   if (VAR_1->tv.mode == VAR_4->tv_format_supported[VAR_6]) {
    *VAR_3 = VAR_6;

    return 0;
   }

  FUNC_0(1);
  *VAR_3 = 0;
 } else if (VAR_2 == VAR_4->top ||
     VAR_2 == VAR_4->bottom)
  *VAR_3 = VAR_4->max_vscan - VAR_5->tv.overscan_v;
 else if (VAR_2 == VAR_4->left ||
   VAR_2 == VAR_4->right)
  *VAR_3 = VAR_4->max_hscan - VAR_5->tv.overscan_h;
 else if (VAR_2 == VAR_4->hpos)
  *VAR_3 = VAR_5->tv.hpos;
 else if (VAR_2 == VAR_4->vpos)
  *VAR_3 = VAR_5->tv.vpos;
 else if (VAR_2 == VAR_4->saturation)
  *VAR_3 = VAR_1->tv.saturation;
 else if (VAR_2 == VAR_4->contrast)
  *VAR_3 = VAR_1->tv.contrast;
 else if (VAR_2 == VAR_4->hue)
  *VAR_3 = VAR_1->tv.hue;
 else if (VAR_2 == VAR_4->brightness)
  *VAR_3 = VAR_1->tv.brightness;
 else if (VAR_2 == VAR_4->sharpness)
  *VAR_3 = VAR_5->tv.sharpness;
 else if (VAR_2 == VAR_4->flicker_filter)
  *VAR_3 = VAR_5->tv.flicker_filter;
 else if (VAR_2 == VAR_4->flicker_filter_2d)
  *VAR_3 = VAR_5->tv.flicker_filter_2d;
 else if (VAR_2 == VAR_4->flicker_filter_adaptive)
  *VAR_3 = VAR_5->tv.flicker_filter_adaptive;
 else if (VAR_2 == VAR_4->tv_chroma_filter)
  *VAR_3 = VAR_5->tv.chroma_filter;
 else if (VAR_2 == VAR_4->tv_luma_filter)
  *VAR_3 = VAR_5->tv.luma_filter;
 else if (VAR_2 == VAR_4->dot_crawl)
  *VAR_3 = VAR_5->tv.dot_crawl;
 else
  return FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3);

 return 0;
}
