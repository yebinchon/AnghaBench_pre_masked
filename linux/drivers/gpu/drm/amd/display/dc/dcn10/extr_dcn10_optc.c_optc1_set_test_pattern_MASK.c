
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
struct timing_generator {int dummy; } ;
struct optc {int dummy; } ;
typedef enum test_pattern_mode { ____Placeholder_test_pattern_mode } test_pattern_mode ;
typedef enum test_pattern_dyn_range { ____Placeholder_test_pattern_dyn_range } test_pattern_dyn_range ;
typedef enum test_pattern_color_format { ____Placeholder_test_pattern_color_format } test_pattern_color_format ;
typedef enum dc_color_depth { ____Placeholder_dc_color_depth } dc_color_depth ;
typedef enum controller_dp_test_pattern { ____Placeholder_controller_dp_test_pattern } controller_dp_test_pattern ;
 struct optc* FUNC_0 (struct timing_generator*) ;
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
 int FUNC_1 (int ,int ,int ,int,int ,int) ;
 int FUNC_2 (int ,int ,int ,int,int ,int,int ,int ,int ,int) ;
 int FUNC_3 (int ,int ,int,int ,int) ;
 int FUNC_4 (int ,int ,int,int ,int,int ,int,int ,int) ;
 int FUNC_5 (int ,int ,int,int ,int ,int ,int,int ,int,int ,int) ;
 int FUNC_6 (int ,int ) ;

 int VAR_14 ;


 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;

__attribute__((used)) static void FUNC_7(
 struct timing_generator *VAR_22,



 enum controller_dp_test_pattern VAR_23,
 enum dc_color_depth VAR_24)
{
 struct optc *VAR_25 = FUNC_0(VAR_22);
 enum test_pattern_color_format VAR_26;
 enum test_pattern_dyn_range VAR_27;
 enum test_pattern_mode VAR_28;
 uint32_t VAR_29;
 uint32_t VAR_30;

 uint32_t VAR_31 = 16;

 uint32_t VAR_32;
 uint32_t VAR_33;





 uint16_t VAR_34[6] = {0xFFFF, 0xFFFF, 0xFFFF, 0x0000,
      0x0000, 0x0000};

 uint16_t VAR_35[6];
 uint32_t VAR_36;


 switch (VAR_24) {
 case 138:
  VAR_26 = 129;
 break;
 case 137:
  VAR_26 = 128;
 break;
 case 140:
  VAR_26 = 130;
 break;
 case 139:
  VAR_26 = VAR_14;
 break;
 default:
  VAR_26 = 128;
 break;
 }

 switch (VAR_23) {
 case 135:
 case 134:
 {
  VAR_27 = (VAR_23 ==
    134 ?
    VAR_15 :
    VAR_16);
  VAR_28 = VAR_17;

  FUNC_3(VAR_11,
    VAR_13, 6,
    VAR_6, 6);

  FUNC_4(VAR_2,
    VAR_5, 1,
    VAR_10, VAR_28,
    VAR_4, VAR_27,
    VAR_1, VAR_26);
 }
 break;

 case 132:
 case 133:
 {
  VAR_28 = (VAR_23 ==
   132 ?
   VAR_21 :
   VAR_19);

  switch (VAR_26) {
  case 129:
   VAR_32 = 6;
  break;
  case 128:
   VAR_32 = 8;
  break;
  case 130:
   VAR_32 = 10;
  break;
  default:
   VAR_32 = 8;
  break;
  }


  for (VAR_33 = 0; VAR_33 < 6; VAR_33++) {



   VAR_35[VAR_33] =
    VAR_34[VAR_33] >> (VAR_31 - VAR_32);






   VAR_35[VAR_33] <<= (16 - VAR_32);
  }

  FUNC_6(VAR_11, 0);
  VAR_30 = 0;
  for (VAR_33 = 0; VAR_33 < 6; VAR_33++) {



   VAR_29 = (1 << VAR_33);


   FUNC_1(VAR_0, 0,
     VAR_9, VAR_29,
     VAR_3, VAR_30);




   VAR_30 = VAR_35[VAR_33];
  }



  FUNC_1(VAR_0, 0,
    VAR_9, VAR_29,
    VAR_3, VAR_30);


  FUNC_4(VAR_2,
    VAR_5, 1,
    VAR_10, VAR_28,
    VAR_4, 0,
    VAR_1, VAR_26);
 }
 break;

 case 136:
 {
  VAR_28 = (VAR_26 ==
   130 ?
   VAR_18 :
   VAR_20);

  switch (VAR_26) {
  case 129:
   VAR_32 = 6;
  break;
  case 128:
   VAR_32 = 8;
  break;
  case 130:
   VAR_32 = 10;
  break;
  default:
   VAR_32 = 8;
  break;
  }





  VAR_36 = (VAR_31 - VAR_32);

  switch (VAR_26) {
  case 129:
  {
   FUNC_5(VAR_11,
     VAR_7, VAR_36,
     VAR_8, 0,
     VAR_6, 6,
     VAR_13, 6,
     VAR_12, 0);
  }
  break;
  case 128:
  {
   FUNC_5(VAR_11,
     VAR_7, VAR_36,
     VAR_8, 0,
     VAR_6, 8,
     VAR_13, 6,
     VAR_12, 0);
  }
  break;
  case 130:
  {
   FUNC_5(VAR_11,
     VAR_7, VAR_36,
     VAR_8, VAR_36 + 2,
     VAR_6, 8,
     VAR_13, 5,
     VAR_12, 384 << 6);
  }
  break;
  default:
  break;
  }

  FUNC_6(VAR_0, 0);


  FUNC_6(VAR_2, 0);

  FUNC_2(VAR_2, 0,
    VAR_5, 1,
    VAR_10, VAR_28,
    VAR_4, 0,
    VAR_1, VAR_26);
 }
 break;
 case 131:
 {
  FUNC_6(VAR_2, 0);
  FUNC_6(VAR_0, 0);
  FUNC_6(VAR_11, 0);
 }
 break;
 default:
  break;

 }
}
