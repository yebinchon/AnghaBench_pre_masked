
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dce110_link_encoder {int dummy; } ;
struct dc_crtc_timing {scalar_t__ pixel_encoding; } ;


 scalar_t__ VAR_0 ;

bool FUNC_0(
 const struct dce110_link_encoder *VAR_1,
 const struct dc_crtc_timing *VAR_2)
{
 if (VAR_2->pixel_encoding == VAR_0)
  return 0;

 return 1;
}
