
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
struct tg_color {int dummy; } ;
struct output_pixel_processor {int dummy; } ;
struct dcn20_opp {int dummy; } ;
typedef enum test_pattern_mode { ____Placeholder_test_pattern_mode } test_pattern_mode ;
typedef enum test_pattern_dyn_range { ____Placeholder_test_pattern_dyn_range } test_pattern_dyn_range ;
typedef enum test_pattern_color_format { ____Placeholder_test_pattern_color_format } test_pattern_color_format ;
typedef enum dc_color_depth { ____Placeholder_dc_color_depth } dc_color_depth ;
typedef enum controller_dp_test_pattern { ____Placeholder_controller_dp_test_pattern } controller_dp_test_pattern ;
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
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_0 (int ,int ,int ,int,int ,int) ;
 int FUNC_1 (int ,int ,int ,int,int ,int,int ,int ) ;
 int FUNC_2 (int ,int ,int,int ,int) ;
 int FUNC_3 (int ,int ,int,int ,int,int ,int ,int ,int) ;
 int FUNC_4 (int ,int ,int,int ,int,int ,int,int ,int,int ,int,int ,int) ;
 int FUNC_5 (int ,int ) ;

 int VAR_23 ;


 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 struct dcn20_opp* FUNC_6 (struct output_pixel_processor*) ;
 int FUNC_7 (struct output_pixel_processor*,struct tg_color const*) ;

void FUNC_8(
  struct output_pixel_processor *VAR_31,
  enum controller_dp_test_pattern VAR_32,
  enum dc_color_depth VAR_33,
  const struct tg_color *VAR_34,
  int VAR_35,
  int VAR_36)
{
 struct dcn20_opp *VAR_37 = FUNC_6(VAR_31);
 enum test_pattern_color_format VAR_38;
 enum test_pattern_dyn_range VAR_39;
 enum test_pattern_mode VAR_40;


 uint32_t VAR_41 = 16;

 uint32_t VAR_42;
 uint32_t VAR_43;





 uint16_t VAR_44[6] = {0xFFFF, 0xFFFF, 0xFFFF, 0x0000,
      0x0000, 0x0000};

 uint16_t VAR_45[6];
 uint32_t VAR_46;


 switch (VAR_33) {
 case 139:
  VAR_38 = 129;
 break;
 case 138:
  VAR_38 = 128;
 break;
 case 141:
  VAR_38 = 130;
 break;
 case 140:
  VAR_38 = VAR_23;
 break;
 default:
  VAR_38 = 128;
 break;
 }


 FUNC_0(VAR_13, 0,
  VAR_1, VAR_35,
  VAR_0, VAR_36);

 switch (VAR_32) {
 case 136:
 case 135:
 {
  VAR_39 = (VAR_32 ==
    135 ?
    VAR_24 :
    VAR_25);

  FUNC_4(VAR_12,
   VAR_15, 1,
   VAR_19, VAR_26,
   VAR_14, VAR_39,
   VAR_2, VAR_38,
   VAR_22, 6,
   VAR_16, 6);
 }
 break;

 case 132:
 case 134:
 {
  VAR_40 = (VAR_32 ==
   132 ?
   VAR_30 :
   VAR_28);

  switch (VAR_38) {
  case 129:
   VAR_42 = 6;
  break;
  case 128:
   VAR_42 = 8;
  break;
  case 130:
   VAR_42 = 10;
  break;
  default:
   VAR_42 = 8;
  break;
  }


  for (VAR_43 = 0; VAR_43 < 6; VAR_43++) {



   VAR_45[VAR_43] =
    VAR_44[VAR_43] >> (VAR_41 - VAR_42);





   VAR_45[VAR_43] <<= (16 - VAR_42);
  }

  FUNC_0(VAR_11, 0,
    VAR_8, VAR_45[0],
    VAR_5, VAR_45[3]);
  FUNC_0(VAR_10, 0,
    VAR_7, VAR_45[1],
    VAR_4, VAR_45[4]);
  FUNC_0(VAR_9, 0,
    VAR_6, VAR_45[2],
    VAR_3, VAR_45[5]);


  FUNC_4(VAR_12,
   VAR_15, 1,
   VAR_19, VAR_40,
   VAR_14, 0,
   VAR_2, VAR_38,
   VAR_22, 0,
   VAR_16, 0);
 }
 break;

 case 137:
 {
  VAR_40 = (VAR_38 ==
   130 ?
   VAR_27 :
   VAR_29);

  switch (VAR_38) {
  case 129:
   VAR_42 = 6;
  break;
  case 128:
   VAR_42 = 8;
  break;
  case 130:
   VAR_42 = 10;
  break;
  default:
   VAR_42 = 8;
  break;
  }





  VAR_46 = (VAR_41 - VAR_42);

  switch (VAR_38) {
  case 129:
  {
   FUNC_1(VAR_21, 0,
    VAR_20, 0,
    VAR_17, VAR_46,
    VAR_18, 0);
   FUNC_2(VAR_12,
    VAR_22, 6,
    VAR_16, 6);
  }
  break;
  case 128:
  {
   FUNC_1(VAR_21, 0,
    VAR_20, 0,
    VAR_17, VAR_46,
    VAR_18, 0);
   FUNC_2(VAR_12,
    VAR_22, 6,
    VAR_16, 8);
  }
  break;
  case 130:
  {
   FUNC_1(VAR_21, 0,
    VAR_20, 384 << 6,
    VAR_17, VAR_46,
    VAR_18, VAR_46 + 2);
   FUNC_2(VAR_12,
    VAR_22, 5,
    VAR_16, 8);
  }
  break;
  default:
  break;
  }


  FUNC_3(VAR_12,
   VAR_15, 1,
   VAR_19, VAR_40,
   VAR_14, 0,
   VAR_2, VAR_38);
 }
 break;
 case 131:
 {
  FUNC_5(VAR_12, 0);
  FUNC_5(VAR_11, 0);
  FUNC_5(VAR_10, 0);
  FUNC_5(VAR_9, 0);
  FUNC_5(VAR_21, 0);
 }
 break;
 case 133:
 {
  FUNC_7(VAR_31, VAR_34);
  FUNC_2(VAR_12,
    VAR_15, 1,
    VAR_19, VAR_28);

  FUNC_0(VAR_13, 0,
    VAR_1, VAR_35,
    VAR_0, VAR_36);
 }
 break;
 default:
  break;

 }
}
