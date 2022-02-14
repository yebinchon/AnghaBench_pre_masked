
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dc_crtc_timing {scalar_t__ display_color_depth; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_0(struct dc_crtc_timing *VAR_1)
{
 if (VAR_1->display_color_depth <= VAR_0)
  return;

 VAR_1->display_color_depth--;
}
