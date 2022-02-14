
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct timing_generator {int dummy; } ;
struct dce110_timing_generator {int dummy; } ;
struct dc_crtc_timing {scalar_t__ v_border_bottom; scalar_t__ v_border_top; scalar_t__ v_addressable; scalar_t__ v_total; scalar_t__ h_border_right; scalar_t__ h_border_left; scalar_t__ h_addressable; scalar_t__ h_total; scalar_t__ h_front_porch; scalar_t__ v_front_porch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int ,scalar_t__) ;
 int FUNC_1 (int ,int ,scalar_t__,int ,scalar_t__) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 struct dce110_timing_generator* FUNC_2 (struct timing_generator*) ;

void FUNC_3(
 struct timing_generator *VAR_14,
 const struct dc_crtc_timing *VAR_15)
{
 uint32_t VAR_16 = 0;
 uint32_t VAR_17 = 0;
 uint32_t VAR_18 = VAR_15->v_border_bottom +
   VAR_15->v_front_porch;
 uint32_t VAR_19 = VAR_15->v_addressable + VAR_18;

 uint32_t VAR_20 = VAR_15->h_border_right +
   VAR_15->h_front_porch;
 uint32_t VAR_21 = VAR_15->h_addressable + VAR_20;
 struct dce110_timing_generator *VAR_22 = FUNC_2(VAR_14);

 FUNC_0(
  VAR_1,
  VAR_8,
  VAR_15->h_total - 1);

 FUNC_0(
  VAR_3,
  VAR_11,
  VAR_15->v_total - 1);




 FUNC_0(
  VAR_4,
  VAR_12,
  VAR_15->v_total - 1);

 FUNC_0(
  VAR_5,
  VAR_13,
  VAR_15->v_total - 1);

 VAR_16 = VAR_15->h_total -
   (VAR_21 + VAR_15->h_border_left);
 VAR_17 = VAR_16 + VAR_15->h_addressable +
   VAR_15->h_border_left + VAR_15->h_border_right;

 FUNC_1(
   VAR_0,
   VAR_6, VAR_16,
   VAR_7, VAR_17);

 VAR_16 = VAR_15->v_total - (VAR_19 + VAR_15->v_border_top);
 VAR_17 = VAR_16 + VAR_15->v_addressable + VAR_15->v_border_top +
   VAR_15->v_border_bottom;

 FUNC_1(
  VAR_2,
  VAR_9, VAR_16,
  VAR_10, VAR_17);
}
