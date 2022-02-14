
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct timing_generator {TYPE_2__* funcs; } ;
struct optc {int signal; int vready_offset; int vstartup_start; int vupdate_offset; int vupdate_width; int opp_count; } ;
struct TYPE_3__ {int INTERLACE; scalar_t__ VSYNC_POSITIVE_POLARITY; scalar_t__ HSYNC_POSITIVE_POLARITY; } ;
struct dc_crtc_timing {int h_total; int h_sync_width; int h_front_porch; int h_border_right; int h_addressable; int h_border_left; int v_total; int v_sync_width; int v_front_porch; int v_border_bottom; int v_addressable; int v_border_top; TYPE_1__ flags; } ;
typedef enum signal_type { ____Placeholder_signal_type } signal_type ;
typedef enum h_timing_div_mode { ____Placeholder_h_timing_div_mode } h_timing_div_mode ;
struct TYPE_4__ {int (* set_vtg_params ) (struct timing_generator*,struct dc_crtc_timing const*) ;int (* program_global_sync ) (struct timing_generator*,int,int,int,int) ;} ;


 int VAR_0 ;
 struct optc* FUNC_0 (struct timing_generator*) ;
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
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,int) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int ,int,int ,int) ;
 scalar_t__ VAR_30 ;
 scalar_t__ VAR_31 ;
 scalar_t__ VAR_32 ;
 int VAR_33 ;
 int FUNC_5 (struct dc_crtc_timing*) ;
 scalar_t__ FUNC_6 (struct dc_crtc_timing*) ;
 int FUNC_7 (struct timing_generator*,int,int,int,int) ;
 int FUNC_8 (struct timing_generator*,struct dc_crtc_timing const*) ;

void FUNC_9(
 struct timing_generator *VAR_34,
 const struct dc_crtc_timing *VAR_35,
 int VAR_36,
 int VAR_37,
 int VAR_38,
 int VAR_39,
 const enum signal_type VAR_40,
 bool VAR_41)
{
 struct dc_crtc_timing VAR_42;
 uint32_t VAR_43;
 uint32_t VAR_44;
 uint32_t VAR_45;
 uint32_t VAR_46;
 uint32_t VAR_47, VAR_48;
 uint32_t VAR_49 = 0;
 uint32_t VAR_50 = 0;
 enum h_timing_div_mode VAR_51 = VAR_2;

 struct optc *VAR_52 = FUNC_0(VAR_34);

 VAR_52->signal = VAR_40;
 VAR_52->vready_offset = VAR_36;
 VAR_52->vstartup_start = VAR_37;
 VAR_52->vupdate_offset = VAR_38;
 VAR_52->vupdate_width = VAR_39;
 VAR_42 = *VAR_35;
 FUNC_5(&VAR_42);




 FUNC_2(VAR_15, 0,
   VAR_15, VAR_42.h_total - 1);


 FUNC_4(VAR_8,
   VAR_12, 0,
   VAR_10, VAR_42.h_sync_width);


 VAR_44 = VAR_42.h_total -
   VAR_42.h_front_porch;


 VAR_43 = VAR_44 -
   VAR_42.h_border_right -
   VAR_42.h_addressable -
   VAR_42.h_border_left;

 FUNC_4(VAR_7,
   VAR_6, VAR_44,
   VAR_5, VAR_43);


 VAR_47 = VAR_42.flags.HSYNC_POSITIVE_POLARITY ?
   0 : 1;

 FUNC_3(VAR_9,
   VAR_11, VAR_47);

 VAR_45 = VAR_42.v_total - 1;

 FUNC_2(VAR_27, 0,
   VAR_27, VAR_45);




 FUNC_2(VAR_28, 0,
  VAR_28, VAR_45);
 FUNC_2(VAR_29, 0,
  VAR_29, VAR_45);


 VAR_46 = VAR_42.v_sync_width;

 FUNC_4(VAR_22,
   VAR_26, 0,
   VAR_24, VAR_46);


 VAR_44 = VAR_42.v_total -
   VAR_42.v_front_porch;


 VAR_43 = VAR_44 -
   VAR_42.v_border_bottom -
   VAR_42.v_addressable -
   VAR_42.v_border_top;

 FUNC_4(VAR_21,
   VAR_20, VAR_44,
   VAR_19, VAR_43);


 VAR_48 = VAR_42.flags.VSYNC_POSITIVE_POLARITY ?
   0 : 1;

 FUNC_3(VAR_23,
  VAR_25, VAR_48);

 if (VAR_52->signal == VAR_30 ||
   VAR_52->signal == VAR_31 ||
   VAR_52->signal == VAR_32) {
  VAR_49 = 1;
  if (VAR_42.flags.INTERLACE == 1)
   VAR_50 = 1;
 }


 if (FUNC_1(VAR_16)) {
  if (VAR_42.flags.INTERLACE == 1)
   FUNC_3(VAR_16,
     VAR_17, 1);
  else
   FUNC_3(VAR_16,
     VAR_17, 0);
 }


 FUNC_3(VAR_0,
   VAR_33, 0);


 FUNC_4(VAR_3,
   VAR_18, VAR_49,
   VAR_4, VAR_50);

 VAR_34->funcs->program_global_sync(VAR_34,
   VAR_36,
   VAR_37,
   VAR_38,
   VAR_39);

 VAR_34->funcs->set_vtg_params(VAR_34, VAR_35);
 if (FUNC_6(&VAR_42) || VAR_52->opp_count == 2)
  VAR_51 = VAR_1;

 FUNC_3(VAR_13,
  VAR_14, VAR_51);
}
