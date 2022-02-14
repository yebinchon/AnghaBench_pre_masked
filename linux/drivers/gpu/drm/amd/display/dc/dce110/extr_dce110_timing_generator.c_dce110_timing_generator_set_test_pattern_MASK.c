
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
struct timing_generator {struct dc_context* ctx; } ;
struct dce110_timing_generator {int dummy; } ;
struct dc_context {int dummy; } ;
typedef enum test_pattern_mode { ____Placeholder_test_pattern_mode } test_pattern_mode ;
typedef enum test_pattern_dyn_range { ____Placeholder_test_pattern_dyn_range } test_pattern_dyn_range ;
typedef enum test_pattern_color_format { ____Placeholder_test_pattern_color_format } test_pattern_color_format ;
typedef enum dc_color_depth { ____Placeholder_dc_color_depth } dc_color_depth ;
typedef enum controller_dp_test_pattern { ____Placeholder_controller_dp_test_pattern } controller_dp_test_pattern ;
 int FUNC_0 (int ) ;
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
 struct dce110_timing_generator* FUNC_1 (struct timing_generator*) ;

 int VAR_14 ;


 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_2 (struct dc_context*,int,int) ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_3 (int,int,int ,int ) ;

void FUNC_4(
 struct timing_generator *VAR_25,



 enum controller_dp_test_pattern VAR_26,
 enum dc_color_depth VAR_27)
{
 struct dc_context *VAR_28 = VAR_25->ctx;
 uint32_t VAR_29;
 uint32_t VAR_30;
 struct dce110_timing_generator *VAR_31 = FUNC_1(VAR_25);
 enum test_pattern_color_format VAR_32;
 enum test_pattern_dyn_range VAR_33;
 enum test_pattern_mode VAR_34;

 uint32_t VAR_35 = 16;

 uint32_t VAR_36;
 uint32_t VAR_37;





 uint16_t VAR_38[6] = {0xFFFF, 0xFFFF, 0xFFFF, 0x0000,
      0x0000, 0x0000};

 uint16_t VAR_39[6];
 uint32_t VAR_40;


 switch (VAR_27) {
 case 138:
  VAR_32 = 129;
 break;
 case 137:
  VAR_32 = 128;
 break;
 case 140:
  VAR_32 = 130;
 break;
 case 139:
  VAR_32 = VAR_14;
 break;
 default:
  VAR_32 = 128;
 break;
 }

 switch (VAR_26) {
 case 135:
 case 134:
 {
  VAR_33 = (VAR_26 ==
    134 ?
    VAR_15 :
    VAR_16);
  VAR_34 = VAR_17;
  VAR_29 = 0;
  VAR_30 = FUNC_0(VAR_24);

  FUNC_3(
   VAR_29,
   6,
   VAR_11,
   VAR_13);
  FUNC_3(
   VAR_29,
   6,
   VAR_11,
   VAR_6);

  FUNC_2(VAR_28, VAR_30, VAR_29);

  VAR_30 = FUNC_0(VAR_23);
  VAR_29 = 0;

  FUNC_3(
   VAR_29,
   1,
   VAR_2,
   VAR_5);

  FUNC_3(
   VAR_29,
   VAR_34,
   VAR_2,
   VAR_10);

  FUNC_3(
   VAR_29,
   VAR_33,
   VAR_2,
   VAR_4);
  FUNC_3(
   VAR_29,
   VAR_32,
   VAR_2,
   VAR_1);
  FUNC_2(VAR_28, VAR_30, VAR_29);
 }
 break;

 case 132:
 case 133:
 {
  VAR_34 = (VAR_26 ==
   132 ?
   VAR_21 :
   VAR_19);

  switch (VAR_32) {
  case 129:
   VAR_36 = 6;
  break;
  case 128:
   VAR_36 = 8;
  break;
  case 130:
   VAR_36 = 10;
  break;
  default:
   VAR_36 = 8;
  break;
  }


  for (VAR_37 = 0; VAR_37 < 6; VAR_37++) {



   VAR_39[VAR_37] =
    VAR_38[VAR_37] >> (VAR_35 - VAR_36);






   VAR_39[VAR_37] <<= (16 - VAR_36);
  }

  VAR_29 = 0;
  VAR_30 = FUNC_0(VAR_24);
  FUNC_2(VAR_28, VAR_30, VAR_29);
  VAR_29 = 0;
  VAR_30 = FUNC_0(VAR_22);
  for (VAR_37 = 0; VAR_37 < 6; VAR_37++) {



   FUNC_3(
    VAR_29,
    (1 << VAR_37),
    VAR_0,
    VAR_9);

   FUNC_2(VAR_28, VAR_30, VAR_29);



   FUNC_3(
    VAR_29,
    VAR_39[VAR_37],
    VAR_0,
    VAR_3);
  }



  FUNC_2(VAR_28, VAR_30, VAR_29);


  VAR_30 = FUNC_0(VAR_23);
  VAR_29 = 0;

  FUNC_3(
   VAR_29,
   1,
   VAR_2,
   VAR_5);

  FUNC_3(
   VAR_29,
   VAR_34,
   VAR_2,
   VAR_10);

  FUNC_3(
   VAR_29,
   0,
   VAR_2,
   VAR_4);

  FUNC_3(
   VAR_29,
   VAR_32,
   VAR_2,
   VAR_1);

  FUNC_2(VAR_28, VAR_30, VAR_29);
 }
 break;

 case 136:
 {
  VAR_34 = (VAR_32 ==
   130 ?
   VAR_18 :
   VAR_20);

  switch (VAR_32) {
  case 129:
   VAR_36 = 6;
  break;
  case 128:
   VAR_36 = 8;
  break;
  case 130:
   VAR_36 = 10;
  break;
  default:
   VAR_36 = 8;
  break;
  }





  VAR_40 = (VAR_35 - VAR_36);

  VAR_29 = 0;
  VAR_30 = FUNC_0(VAR_24);

  switch (VAR_32) {
  case 129:
  {
   FUNC_3(
    VAR_29,
    VAR_40,
    VAR_11,
    VAR_7);
   FUNC_3(
    VAR_29,
    0,
    VAR_11,
    VAR_8);
   FUNC_3(
    VAR_29,
    6,
    VAR_11,
    VAR_6);
   FUNC_3(
    VAR_29,
    6,
    VAR_11,
    VAR_13);
   FUNC_3(
    VAR_29,
    0,
    VAR_11,
    VAR_12);
  }
  break;
  case 128:
  {
   FUNC_3(
    VAR_29,
    VAR_40,
    VAR_11,
    VAR_7);
   FUNC_3(
    VAR_29,
    0,
    VAR_11,
    VAR_8);
   FUNC_3(
    VAR_29,
    8,
    VAR_11,
    VAR_6);
   FUNC_3(
    VAR_29,
    6,
    VAR_11,
    VAR_13);
   FUNC_3(
    VAR_29,
    0,
    VAR_11,
    VAR_12);
  }
  break;
  case 130:
  {
   FUNC_3(
    VAR_29,
    VAR_40,
    VAR_11,
    VAR_7);
   FUNC_3(
    VAR_29,
    VAR_40 + 2,
    VAR_11,
    VAR_8);
   FUNC_3(
    VAR_29,
    8,
    VAR_11,
    VAR_6);
   FUNC_3(
    VAR_29,
    5,
    VAR_11,
    VAR_13);
   FUNC_3(
    VAR_29,
    384 << 6,
    VAR_11,
    VAR_12);
  }
  break;
  default:
  break;
  }
  FUNC_2(VAR_28, VAR_30, VAR_29);

  VAR_29 = 0;
  VAR_30 = FUNC_0(VAR_22);
  FUNC_2(VAR_28, VAR_30, VAR_29);


  VAR_30 = FUNC_0(VAR_23);
  VAR_29 = 0;

  FUNC_3(
   VAR_29,
   1,
   VAR_2,
   VAR_5);

  FUNC_3(
   VAR_29,
   VAR_34,
   VAR_2,
   VAR_10);

  FUNC_3(
   VAR_29,
   0,
   VAR_2,
   VAR_4);

  FUNC_3(
   VAR_29,
   VAR_32,
   VAR_2,
   VAR_1);

  FUNC_2(VAR_28, VAR_30, VAR_29);
 }
 break;
 case 131:
 {
  VAR_29 = 0;
  FUNC_2(VAR_28, FUNC_0(VAR_23), VAR_29);
  FUNC_2(VAR_28, FUNC_0(VAR_22), VAR_29);
  FUNC_2(VAR_28, FUNC_0(VAR_24),
    VAR_29);
 }
 break;
 default:
 break;
 }
}
