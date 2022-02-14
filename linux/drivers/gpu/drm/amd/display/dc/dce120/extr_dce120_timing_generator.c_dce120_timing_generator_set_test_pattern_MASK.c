
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct timing_generator {struct dc_context* ctx; } ;
struct TYPE_2__ {int crtc; } ;
struct dce110_timing_generator {TYPE_1__ offsets; } ;
struct dc_context {int dummy; } ;
typedef enum test_pattern_mode { ____Placeholder_test_pattern_mode } test_pattern_mode ;
typedef enum test_pattern_dyn_range { ____Placeholder_test_pattern_dyn_range } test_pattern_dyn_range ;
typedef enum test_pattern_color_format { ____Placeholder_test_pattern_color_format } test_pattern_color_format ;
typedef enum dc_color_depth { ____Placeholder_dc_color_depth } dc_color_depth ;
typedef enum controller_dp_test_pattern { ____Placeholder_controller_dp_test_pattern } controller_dp_test_pattern ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int,int ,int) ;
 int FUNC_1 (int ,int ,int,int ,int,int ,int,int ,int) ;
 int FUNC_2 (int ,int ,int,int ,int ,int ,int,int ,int,int ,int) ;
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
 struct dce110_timing_generator* FUNC_3 (struct timing_generator*) ;

 int VAR_14 ;


 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_4 (struct dc_context*,int ,int ,int) ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_5 (int,int,int ,int ) ;

void FUNC_6(
 struct timing_generator *VAR_25,



 enum controller_dp_test_pattern VAR_26,
 enum dc_color_depth VAR_27)
{
 struct dc_context *VAR_28 = VAR_25->ctx;
 uint32_t VAR_29;
 struct dce110_timing_generator *VAR_30 = FUNC_3(VAR_25);
 enum test_pattern_color_format VAR_31;
 enum test_pattern_dyn_range VAR_32;
 enum test_pattern_mode VAR_33;

 uint32_t VAR_34 = 16;

 uint32_t VAR_35;
 uint32_t VAR_36;





 uint16_t VAR_37[6] = {0xFFFF, 0xFFFF, 0xFFFF, 0x0000,
      0x0000, 0x0000};

 uint16_t VAR_38[6];
 uint32_t VAR_39;


 switch (VAR_27) {
 case 138:
  VAR_31 = 129;
 break;
 case 137:
  VAR_31 = 128;
 break;
 case 140:
  VAR_31 = 130;
 break;
 case 139:
  VAR_31 = VAR_14;
 break;
 default:
  VAR_31 = 128;
 break;
 }

 switch (VAR_26) {
 case 135:
 case 134:
 {
  VAR_32 = (VAR_26 ==
    134 ?
    VAR_15 :
    VAR_16);
  VAR_33 = VAR_17;

  FUNC_0(VAR_2,
    VAR_13, 6,
    VAR_7, 6);

  FUNC_1(VAR_1,
    VAR_6, 1,
    VAR_11, VAR_33,
    VAR_5, VAR_32,
    VAR_3, VAR_31);
 }
 break;

 case 132:
 case 133:
 {
  VAR_33 = (VAR_26 ==
   132 ?
   VAR_21 :
   VAR_19);

  switch (VAR_31) {
  case 129:
   VAR_35 = 6;
  break;
  case 128:
   VAR_35 = 8;
  break;
  case 130:
   VAR_35 = 10;
  break;
  default:
   VAR_35 = 8;
  break;
  }


  for (VAR_36 = 0; VAR_36 < 6; VAR_36++) {



   VAR_38[VAR_36] =
    VAR_37[VAR_36] >> (VAR_34 - VAR_35);






   VAR_38[VAR_36] <<= (16 - VAR_35);
  }

  FUNC_4(VAR_28, VAR_24, VAR_30->offsets.crtc, 0);
  VAR_29 = 0;
  for (VAR_36 = 0; VAR_36 < 6; VAR_36++) {



   FUNC_5(
    VAR_29,
    (1 << VAR_36),
    VAR_0,
    VAR_10);

   FUNC_4(VAR_28, VAR_22, VAR_30->offsets.crtc, VAR_29);



   FUNC_5(
    VAR_29,
    VAR_38[VAR_36],
    VAR_0,
    VAR_4);
  }



  FUNC_4(VAR_28, VAR_22, VAR_30->offsets.crtc, VAR_29);


  FUNC_1(VAR_1,
    VAR_6, 1,
    VAR_11, VAR_33,
    VAR_5, 0,
    VAR_3, VAR_31);
 }
 break;

 case 136:
 {
  VAR_33 = (VAR_31 ==
   130 ?
   VAR_18 :
   VAR_20);

  switch (VAR_31) {
  case 129:
   VAR_35 = 6;
  break;
  case 128:
   VAR_35 = 8;
  break;
  case 130:
   VAR_35 = 10;
  break;
  default:
   VAR_35 = 8;
  break;
  }





  VAR_39 = (VAR_34 - VAR_35);

  switch (VAR_31) {
  case 129:
  {
   FUNC_2(VAR_2,
     VAR_8, VAR_39,
     VAR_9, 0,
     VAR_7, 6,
     VAR_13, 6,
     VAR_12, 0);
  }
  break;
  case 128:
  {
   FUNC_2(VAR_2,
     VAR_8, VAR_39,
     VAR_9, 0,
     VAR_7, 8,
     VAR_13, 6,
     VAR_12, 0);
  }
  break;
  case 130:
  {
   FUNC_2(VAR_2,
     VAR_8, VAR_39,
     VAR_9, VAR_39 + 2,
     VAR_7, 8,
     VAR_13, 5,
     VAR_12, 384 << 6);
  }
  break;
  default:
  break;
  }

  FUNC_4(VAR_28, VAR_22, VAR_30->offsets.crtc, 0);


  FUNC_4(VAR_28, VAR_23, VAR_30->offsets.crtc, 0);

  FUNC_1(VAR_1,
    VAR_6, 1,
    VAR_11, VAR_33,
    VAR_5, 0,
    VAR_3, VAR_31);
 }
 break;
 case 131:
 {
  VAR_29 = 0;
  FUNC_4(VAR_28, VAR_23, VAR_30->offsets.crtc, VAR_29);
  FUNC_4(VAR_28, VAR_22, VAR_30->offsets.crtc, VAR_29);
  FUNC_4(VAR_28, VAR_24, VAR_30->offsets.crtc, VAR_29);
 }
 break;
 default:
 break;
 }
}
