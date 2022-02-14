
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct timing_generator {struct dc_context* ctx; } ;
struct TYPE_2__ {int INTERLACE; scalar_t__ VSYNC_POSITIVE_POLARITY; scalar_t__ HSYNC_POSITIVE_POLARITY; } ;
struct dc_crtc_timing {int v_border_bottom; int v_front_porch; int v_addressable; int h_border_right; int h_front_porch; int h_addressable; int h_total; int v_total; int h_border_left; int v_border_top; int h_sync_width; int v_sync_width; TYPE_1__ flags; } ;
struct dc_context {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_0 (struct dc_context*,int) ;
 int FUNC_1 (struct dc_context*,int,int) ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int FUNC_2 (int,int,int ,int ) ;

__attribute__((used)) static void FUNC_3(
 struct timing_generator *VAR_29,
 const struct dc_crtc_timing *VAR_30)
{
 uint32_t VAR_31 = VAR_30->v_border_bottom +
   VAR_30->v_front_porch;
 uint32_t VAR_32 = VAR_30->v_addressable + VAR_31;

 uint32_t VAR_33 = VAR_30->h_border_right +
   VAR_30->h_front_porch;
 uint32_t VAR_34 = VAR_30->h_addressable + VAR_33;

 struct dc_context *VAR_35 = VAR_29->ctx;
 uint32_t VAR_36 = 0;
 uint32_t VAR_37 = 0;
 uint32_t VAR_38 = 0;

 VAR_37 = VAR_23;
 VAR_36 = FUNC_0(VAR_35, VAR_37);
 FUNC_2(
  VAR_36,
  VAR_30->h_total - 1,
  VAR_3,
  VAR_13);
 FUNC_1(VAR_35, VAR_37, VAR_36);

 VAR_37 = VAR_28;
 VAR_36 = FUNC_0(VAR_35, VAR_37);
 FUNC_2(
  VAR_36,
  VAR_30->v_total - 1,
  VAR_8,
  VAR_19);
 FUNC_1(VAR_35, VAR_37, VAR_36);

 VAR_37 = VAR_20;
 VAR_36 = FUNC_0(VAR_35, VAR_37);

 VAR_38 = VAR_30->h_total -
  (VAR_34 + VAR_30->h_border_left);

 FUNC_2(
  VAR_36,
  VAR_38,
  VAR_0,
  VAR_9);

 VAR_38 = VAR_38 + VAR_30->h_addressable +
  VAR_30->h_border_left + VAR_30->h_border_right;

 FUNC_2(
  VAR_36,
  VAR_38,
  VAR_0,
  VAR_10);

 FUNC_1(VAR_35, VAR_37, VAR_36);

 VAR_37 = VAR_25;
 VAR_36 = FUNC_0(VAR_35, VAR_37);

 VAR_38 = VAR_30->v_total - (VAR_32 + VAR_30->v_border_top);

 FUNC_2(
  VAR_36,
  VAR_38,
  VAR_5,
  VAR_15);

 VAR_38 = VAR_38 + VAR_30->v_addressable + VAR_30->v_border_top +
  VAR_30->v_border_bottom;

 FUNC_2(
  VAR_36,
  VAR_38,
  VAR_5,
  VAR_16);

 FUNC_1(VAR_35, VAR_37, VAR_36);

 VAR_37 = VAR_21;
 VAR_36 = 0;
 FUNC_2(
  VAR_36,
  VAR_30->h_sync_width,
  VAR_1,
  VAR_11);
 FUNC_1(VAR_35, VAR_37, VAR_36);

 VAR_37 = VAR_22;
 VAR_36 = FUNC_0(VAR_35, VAR_37);
 if (VAR_30->flags.HSYNC_POSITIVE_POLARITY) {
  FUNC_2(
   VAR_36,
   0,
   VAR_2,
   VAR_12);
 } else {
  FUNC_2(
   VAR_36,
   1,
   VAR_2,
   VAR_12);
 }
 FUNC_1(VAR_35, VAR_37, VAR_36);

 VAR_37 = VAR_26;
 VAR_36 = 0;
 FUNC_2(
  VAR_36,
  VAR_30->v_sync_width,
  VAR_6,
  VAR_17);
 FUNC_1(VAR_35, VAR_37, VAR_36);

 VAR_37 = VAR_27;
 VAR_36 = FUNC_0(VAR_35, VAR_37);
 if (VAR_30->flags.VSYNC_POSITIVE_POLARITY) {
  FUNC_2(
   VAR_36,
   0,
   VAR_7,
   VAR_18);
 } else {
  FUNC_2(
   VAR_36,
   1,
   VAR_7,
   VAR_18);
 }
 FUNC_1(VAR_35, VAR_37, VAR_36);

 VAR_37 = VAR_24;
 VAR_36 = FUNC_0(VAR_35, VAR_37);
 FUNC_2(
  VAR_36,
  VAR_30->flags.INTERLACE,
  VAR_4,
  VAR_14);
 FUNC_1(VAR_35, VAR_37, VAR_36);
}
