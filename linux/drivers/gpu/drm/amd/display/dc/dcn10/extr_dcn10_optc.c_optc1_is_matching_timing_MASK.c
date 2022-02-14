
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timing_generator {int dummy; } ;
struct dcn_otg_state {scalar_t__ h_total; scalar_t__ h_blank_start; scalar_t__ h_blank_end; scalar_t__ h_sync_a_end; scalar_t__ h_sync_a_start; scalar_t__ v_total; scalar_t__ v_blank_start; scalar_t__ v_blank_end; scalar_t__ v_sync_a_end; scalar_t__ v_sync_a_start; int member_0; } ;
struct dc_crtc_timing {scalar_t__ h_total; scalar_t__ h_addressable; scalar_t__ h_front_porch; scalar_t__ h_sync_width; scalar_t__ v_total; scalar_t__ v_addressable; scalar_t__ v_front_porch; scalar_t__ v_sync_width; scalar_t__ h_border_left; scalar_t__ h_border_right; scalar_t__ v_border_top; scalar_t__ v_border_bottom; int member_0; } ;


 int FUNC_0 (struct timing_generator*) ;
 int FUNC_1 (int ,struct dcn_otg_state*) ;

bool FUNC_2(struct timing_generator *VAR_0,
  const struct dc_crtc_timing *VAR_1)
{
 struct dc_crtc_timing VAR_2 = {0};
 struct dcn_otg_state VAR_3 = {0};

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
  return 0;

 FUNC_1(FUNC_0(VAR_0), &VAR_3);

 VAR_2.h_total = VAR_3.h_total + 1;
 VAR_2.h_addressable = VAR_3.h_total - ((VAR_3.h_total - VAR_3.h_blank_start) + VAR_3.h_blank_end);
 VAR_2.h_front_porch = VAR_3.h_total + 1 - VAR_3.h_blank_start;
 VAR_2.h_sync_width = VAR_3.h_sync_a_end - VAR_3.h_sync_a_start;

 VAR_2.v_total = VAR_3.v_total + 1;
 VAR_2.v_addressable = VAR_3.v_total - ((VAR_3.v_total - VAR_3.v_blank_start) + VAR_3.v_blank_end);
 VAR_2.v_front_porch = VAR_3.v_total + 1 - VAR_3.v_blank_start;
 VAR_2.v_sync_width = VAR_3.v_sync_a_end - VAR_3.v_sync_a_start;

 if (VAR_1->h_total != VAR_2.h_total)
  return 0;

 if (VAR_1->h_border_left != VAR_2.h_border_left)
  return 0;

 if (VAR_1->h_addressable != VAR_2.h_addressable)
  return 0;

 if (VAR_1->h_border_right != VAR_2.h_border_right)
  return 0;

 if (VAR_1->h_front_porch != VAR_2.h_front_porch)
  return 0;

 if (VAR_1->h_sync_width != VAR_2.h_sync_width)
  return 0;

 if (VAR_1->v_total != VAR_2.v_total)
  return 0;

 if (VAR_1->v_border_top != VAR_2.v_border_top)
  return 0;

 if (VAR_1->v_addressable != VAR_2.v_addressable)
  return 0;

 if (VAR_1->v_border_bottom != VAR_2.v_border_bottom)
  return 0;

 if (VAR_1->v_sync_width != VAR_2.v_sync_width)
  return 0;

 return 1;
}
