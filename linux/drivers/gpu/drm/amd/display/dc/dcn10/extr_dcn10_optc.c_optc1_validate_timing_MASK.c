
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct timing_generator {int dummy; } ;
struct optc {scalar_t__ max_h_total; scalar_t__ max_v_total; scalar_t__ min_h_blank; scalar_t__ min_h_sync_width; scalar_t__ min_v_sync_width; scalar_t__ min_v_blank_interlace; scalar_t__ min_v_blank; } ;
struct TYPE_2__ {int INTERLACE; } ;
struct dc_crtc_timing {scalar_t__ v_total; scalar_t__ v_addressable; scalar_t__ v_border_top; scalar_t__ v_border_bottom; scalar_t__ h_total; scalar_t__ h_addressable; scalar_t__ h_border_right; scalar_t__ h_border_left; scalar_t__ timing_3d_format; scalar_t__ h_sync_width; scalar_t__ v_sync_width; TYPE_1__ flags; } ;


 int FUNC_0 (int ) ;
 struct optc* FUNC_1 (struct timing_generator*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

bool FUNC_2(
 struct timing_generator *VAR_6,
 const struct dc_crtc_timing *VAR_7)
{
 uint32_t VAR_8;
 uint32_t VAR_9;
 uint32_t VAR_10;
 struct optc *VAR_11 = FUNC_1(VAR_6);

 FUNC_0(VAR_7 != ((void*)0));

 VAR_8 = (VAR_7->v_total - VAR_7->v_addressable -
     VAR_7->v_border_top - VAR_7->v_border_bottom);

 VAR_9 = (VAR_7->h_total - VAR_7->h_addressable -
  VAR_7->h_border_right -
  VAR_7->h_border_left);

 if (VAR_7->timing_3d_format != VAR_3 &&
  VAR_7->timing_3d_format != VAR_1 &&
  VAR_7->timing_3d_format != VAR_5 &&
  VAR_7->timing_3d_format != VAR_4 &&
  VAR_7->timing_3d_format != VAR_0 &&
  VAR_7->timing_3d_format != VAR_2)
  return 0;


 if (VAR_7->flags.INTERLACE == 1)
  return 0;






 if (VAR_7->h_total > VAR_11->max_h_total ||
  VAR_7->v_total > VAR_11->max_v_total)
  return 0;


 if (VAR_9 < VAR_11->min_h_blank)
  return 0;

 if (VAR_7->h_sync_width < VAR_11->min_h_sync_width ||
   VAR_7->v_sync_width < VAR_11->min_v_sync_width)
  return 0;

 VAR_10 = VAR_7->flags.INTERLACE?VAR_11->min_v_blank_interlace:VAR_11->min_v_blank;

 if (VAR_8 < VAR_10)
  return 0;

 return 1;

}
