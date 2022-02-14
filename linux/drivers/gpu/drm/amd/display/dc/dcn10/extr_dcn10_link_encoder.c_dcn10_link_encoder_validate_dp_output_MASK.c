
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dp_ycbcr420_supported; } ;
struct TYPE_4__ {TYPE_1__ features; } ;
struct dcn10_link_encoder {TYPE_2__ base; } ;
struct dc_crtc_timing {scalar_t__ pixel_encoding; } ;


 scalar_t__ VAR_0 ;

bool FUNC_0(
 const struct dcn10_link_encoder *VAR_1,
 const struct dc_crtc_timing *VAR_2)
{
 if (VAR_2->pixel_encoding == VAR_0) {
  if (!VAR_1->base.features.dp_ycbcr420_supported)
   return 0;
 }

 return 1;
}
