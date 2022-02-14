
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct timing_generator {int dummy; } ;
struct dce110_timing_generator {scalar_t__ max_h_total; scalar_t__ max_v_total; scalar_t__ min_h_blank; scalar_t__ min_h_front_porch; scalar_t__ min_h_back_porch; } ;
struct TYPE_2__ {int INTERLACE; } ;
struct dc_crtc_timing {scalar_t__ h_border_right; scalar_t__ h_front_porch; scalar_t__ h_addressable; scalar_t__ timing_3d_format; scalar_t__ h_total; scalar_t__ v_total; scalar_t__ h_border_left; scalar_t__ h_sync_width; TYPE_1__ flags; } ;
typedef enum signal_type { ____Placeholder_signal_type } signal_type ;


 int FUNC_0 (int ) ;
 struct dce110_timing_generator* FUNC_1 (struct timing_generator*) ;
 scalar_t__ VAR_0 ;

bool FUNC_2(
 struct timing_generator *VAR_1,
 const struct dc_crtc_timing *VAR_2,
 enum signal_type VAR_3)
{
 uint32_t VAR_4;
 uint32_t VAR_5, VAR_6, VAR_7;

 struct dce110_timing_generator *VAR_8 = FUNC_1(VAR_1);

 FUNC_0(VAR_2 != ((void*)0));

 if (!VAR_2)
  return 0;

 VAR_6 = VAR_2->h_border_right + VAR_2->h_front_porch;
 VAR_7 = VAR_2->h_addressable + VAR_6;


 if (VAR_2->timing_3d_format != VAR_0)
  return 0;


 if (VAR_2->flags.INTERLACE == 1)
  return 0;






 if (VAR_2->h_total > VAR_8->max_h_total ||
  VAR_2->v_total > VAR_8->max_v_total)
  return 0;

 VAR_4 = (VAR_2->h_total - VAR_2->h_addressable -
  VAR_2->h_border_right -
  VAR_2->h_border_left);

 if (VAR_4 < VAR_8->min_h_blank)
  return 0;

 if (VAR_2->h_front_porch < VAR_8->min_h_front_porch)
  return 0;

 VAR_5 = VAR_4 - (VAR_7 -
  VAR_2->h_addressable -
  VAR_2->h_border_right -
  VAR_2->h_sync_width);

 if (VAR_5 < VAR_8->min_h_back_porch)
  return 0;

 return 1;
}
