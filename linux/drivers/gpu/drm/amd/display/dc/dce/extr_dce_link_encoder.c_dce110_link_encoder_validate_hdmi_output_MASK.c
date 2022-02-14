
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int HDMI_6GB_EN; } ;
struct TYPE_9__ {TYPE_1__ bits; } ;
struct TYPE_10__ {int max_hdmi_deep_color; int max_hdmi_pixel_clock; TYPE_2__ flags; int hdmi_ycbcr420_supported; } ;
struct TYPE_14__ {TYPE_6__* ctx; TYPE_3__ features; } ;
struct dce110_link_encoder {TYPE_7__ base; } ;
struct dc_crtc_timing {int display_color_depth; scalar_t__ pixel_encoding; } ;
typedef enum dc_color_depth { ____Placeholder_dc_color_depth } dc_color_depth ;
struct TYPE_13__ {TYPE_5__* dc; } ;
struct TYPE_11__ {scalar_t__ hdmi20_disable; } ;
struct TYPE_12__ {TYPE_4__ debug; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static bool FUNC_0(
 const struct dce110_link_encoder *VAR_3,
 const struct dc_crtc_timing *VAR_4,
 int VAR_5)
{
 enum dc_color_depth VAR_6 =
   VAR_3->base.features.max_hdmi_deep_color;

 if (VAR_6 < VAR_4->display_color_depth)
  return 0;

 if (VAR_4->display_color_depth < VAR_0)
  return 0;
 if (VAR_5 < VAR_2)
  return 0;

 if ((VAR_5 == 0) ||
  (VAR_5 > VAR_3->base.features.max_hdmi_pixel_clock))
  return 0;


 if (!VAR_3->base.features.hdmi_ycbcr420_supported &&
   VAR_4->pixel_encoding == VAR_1)
  return 0;

 if (!VAR_3->base.features.flags.bits.HDMI_6GB_EN &&
  VAR_5 >= 300000)
  return 0;
 if (VAR_3->base.ctx->dc->debug.hdmi20_disable &&
  VAR_4->pixel_encoding == VAR_1)
  return 0;
 return 1;
}
