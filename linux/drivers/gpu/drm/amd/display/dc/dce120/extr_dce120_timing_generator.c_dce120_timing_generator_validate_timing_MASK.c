
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct timing_generator {int dummy; } ;
struct dce110_timing_generator {scalar_t__ min_v_blank; scalar_t__ min_h_sync_width; scalar_t__ min_v_sync_width; } ;
struct TYPE_2__ {scalar_t__ INTERLACE; } ;
struct dc_crtc_timing {scalar_t__ v_total; scalar_t__ v_addressable; scalar_t__ v_border_top; scalar_t__ v_border_bottom; scalar_t__ h_sync_width; scalar_t__ v_sync_width; TYPE_1__ flags; } ;
typedef enum signal_type { ____Placeholder_signal_type } signal_type ;


 struct dce110_timing_generator* FUNC_0 (struct timing_generator*) ;
 int FUNC_1 (struct timing_generator*,struct dc_crtc_timing const*,int) ;

bool FUNC_2(
 struct timing_generator *VAR_0,
 const struct dc_crtc_timing *VAR_1,
 enum signal_type VAR_2)
{
 uint32_t VAR_3 = VAR_1->flags.INTERLACE ? 2 : 1;
 uint32_t VAR_4 =
     (VAR_1->v_total - VAR_1->v_addressable -
     VAR_1->v_border_top - VAR_1->v_border_bottom) *
     VAR_3;
 struct dce110_timing_generator *VAR_5 = FUNC_0(VAR_0);

 if (!FUNC_1(
     VAR_0,
     VAR_1,
     VAR_2))
  return 0;


 if (VAR_4 < VAR_5->min_v_blank ||
   VAR_1->h_sync_width < VAR_5->min_h_sync_width ||
   VAR_1->v_sync_width < VAR_5->min_v_sync_width)
  return 0;

 return 1;
}
