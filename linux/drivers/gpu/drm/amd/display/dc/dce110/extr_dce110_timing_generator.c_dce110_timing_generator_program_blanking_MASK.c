
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct timing_generator {struct dc_context* ctx; } ;
struct dce110_timing_generator {int dummy; } ;
struct dc_crtc_timing {scalar_t__ v_border_bottom; scalar_t__ v_border_top; scalar_t__ v_addressable; scalar_t__ v_total; scalar_t__ h_border_right; scalar_t__ h_border_left; scalar_t__ h_addressable; scalar_t__ h_total; scalar_t__ h_front_porch; scalar_t__ v_front_porch; } ;
struct dc_context {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct dce110_timing_generator* FUNC_1 (struct timing_generator*) ;
 scalar_t__ FUNC_2 (struct dc_context*,scalar_t__) ;
 int FUNC_3 (struct dc_context*,scalar_t__,scalar_t__) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_4 (scalar_t__,scalar_t__,int ,int ) ;

void FUNC_5(
 struct timing_generator *VAR_16,
 const struct dc_crtc_timing *VAR_17)
{
 uint32_t VAR_18 = VAR_17->v_border_bottom +
   VAR_17->v_front_porch;
 uint32_t VAR_19 =VAR_17->v_addressable + VAR_18;

 uint32_t VAR_20 = VAR_17->h_border_right +
   VAR_17->h_front_porch;
 uint32_t VAR_21 = VAR_17->h_addressable + VAR_20;
 struct dce110_timing_generator *VAR_22 = FUNC_1(VAR_16);

 struct dc_context *VAR_23 = VAR_16->ctx;
 uint32_t VAR_24 = 0;
 uint32_t VAR_25 = 0;
 uint32_t VAR_26 = 0;

 VAR_25 = FUNC_0(VAR_11);
 VAR_24 = FUNC_2(VAR_23, VAR_25);
 FUNC_4(
  VAR_24,
  VAR_17->h_total - 1,
  VAR_3,
  VAR_3);
 FUNC_3(VAR_23, VAR_25, VAR_24);

 VAR_25 = FUNC_0(VAR_13);
 VAR_24 = FUNC_2(VAR_23, VAR_25);
 FUNC_4(
  VAR_24,
  VAR_17->v_total - 1,
  VAR_7,
  VAR_7);
 FUNC_3(VAR_23, VAR_25, VAR_24);




 VAR_25 = FUNC_0(VAR_14);
 VAR_24 = FUNC_2(VAR_23, VAR_25);
 FUNC_4(
  VAR_24,
  VAR_17->v_total - 1,
  VAR_8,
  VAR_8);
 FUNC_3(VAR_23, VAR_25, VAR_24);

 VAR_25 = FUNC_0(VAR_15);
 VAR_24 = FUNC_2(VAR_23, VAR_25);
 FUNC_4(
  VAR_24,
  VAR_17->v_total - 1,
  VAR_9,
  VAR_9);
 FUNC_3(VAR_23, VAR_25, VAR_24);

 VAR_25 = FUNC_0(VAR_10);
 VAR_24 = FUNC_2(VAR_23, VAR_25);

 VAR_26 = VAR_17->h_total -
  (VAR_21 + VAR_17->h_border_left);

 FUNC_4(
  VAR_24,
  VAR_26,
  VAR_2,
  VAR_0);

 VAR_26 = VAR_26 + VAR_17->h_addressable +
  VAR_17->h_border_left + VAR_17->h_border_right;

 FUNC_4(
  VAR_24,
  VAR_26,
  VAR_2,
  VAR_1);

 FUNC_3(VAR_23, VAR_25, VAR_24);

 VAR_25 = FUNC_0(VAR_12);
 VAR_24 = FUNC_2(VAR_23, VAR_25);

 VAR_26 = VAR_17->v_total - (VAR_19 + VAR_17->v_border_top);

 FUNC_4(
  VAR_24,
  VAR_26,
  VAR_6,
  VAR_4);

 VAR_26 = VAR_26 + VAR_17->v_addressable + VAR_17->v_border_top +
  VAR_17->v_border_bottom;

 FUNC_4(
  VAR_24,
  VAR_26,
  VAR_6,
  VAR_5);

 FUNC_3(VAR_23, VAR_25, VAR_24);
}
