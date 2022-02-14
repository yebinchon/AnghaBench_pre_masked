
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_6__ {int dot_crawl; int luma_filter; int chroma_filter; int flicker_filter_adaptive; int flicker_filter_2d; int flicker_filter; int sharpness; int vpos; int hpos; int overscan_v; int overscan_h; } ;
struct TYPE_5__ {int brightness; int hue; int contrast; int saturation; } ;
struct drm_connector_state {TYPE_2__ tv; int connector; } ;
struct TYPE_4__ {struct drm_connector_state base; } ;
struct intel_sdvo_connector_state {TYPE_3__ tv; TYPE_1__ base; } ;
struct intel_sdvo_connector {scalar_t__ dot_crawl; scalar_t__ tv_luma_filter; scalar_t__ tv_chroma_filter; scalar_t__ flicker_filter_adaptive; scalar_t__ flicker_filter_2d; scalar_t__ flicker_filter; scalar_t__ sharpness; scalar_t__ brightness; scalar_t__ hue; scalar_t__ contrast; scalar_t__ saturation; scalar_t__ vpos; scalar_t__ hpos; scalar_t__ top; scalar_t__ left; } ;
struct intel_sdvo {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int ,int ) ;
 int VAR_14 ;
 struct intel_sdvo_connector* FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct intel_sdvo *VAR_15,
        const struct intel_sdvo_connector_state *VAR_16)
{
 const struct drm_connector_state *VAR_17 = &VAR_16->base.base;
 struct intel_sdvo_connector *VAR_18 =
  FUNC_1(VAR_17->connector);
 u16 VAR_19;

 if (VAR_18->left)
  FUNC_0(VAR_16->tv.overscan_h, VAR_8);

 if (VAR_18->top)
  FUNC_0(VAR_16->tv.overscan_v, VAR_9);

 if (VAR_18->hpos)
  FUNC_0(VAR_16->tv.hpos, VAR_6);

 if (VAR_18->vpos)
  FUNC_0(VAR_16->tv.vpos, VAR_14);

 if (VAR_18->saturation)
  FUNC_0(VAR_17->tv.saturation, VAR_10);

 if (VAR_18->contrast)
  FUNC_0(VAR_17->tv.contrast, VAR_1);

 if (VAR_18->hue)
  FUNC_0(VAR_17->tv.hue, VAR_7);

 if (VAR_18->brightness)
  FUNC_0(VAR_17->tv.brightness, VAR_0);

 if (VAR_18->sharpness)
  FUNC_0(VAR_16->tv.sharpness, VAR_11);

 if (VAR_18->flicker_filter)
  FUNC_0(VAR_16->tv.flicker_filter, VAR_3);

 if (VAR_18->flicker_filter_2d)
  FUNC_0(VAR_16->tv.flicker_filter_2d, VAR_4);

 if (VAR_18->flicker_filter_adaptive)
  FUNC_0(VAR_16->tv.flicker_filter_adaptive, VAR_5);

 if (VAR_18->tv_chroma_filter)
  FUNC_0(VAR_16->tv.chroma_filter, VAR_12);

 if (VAR_18->tv_luma_filter)
  FUNC_0(VAR_16->tv.luma_filter, VAR_13);

 if (VAR_18->dot_crawl)
  FUNC_0(VAR_16->tv.dot_crawl, VAR_2);


}
