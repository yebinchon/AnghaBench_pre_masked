
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct dcn10_stream_encoder {int dummy; } ;
struct dc_info_packet {int * sb; int hb3; int hb2; int hb1; int hb0; } ;


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
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int ,int ,int,int) ;
 int FUNC_5 (int ,int const) ;

void FUNC_6(
 struct dcn10_stream_encoder *VAR_28,
 uint32_t VAR_29,
 const struct dc_info_packet *VAR_30)
{
 uint32_t VAR_31;



 uint32_t VAR_32 = 50;


 FUNC_3(VAR_1, VAR_0, 1);

 if (VAR_29 >= 8)
  FUNC_0(0);
 FUNC_4(VAR_26, VAR_18,
   0, 10, VAR_32);





 FUNC_3(VAR_26, VAR_19, 1);


 VAR_31 = FUNC_1(VAR_26);
 FUNC_3(VAR_26,
   VAR_25, VAR_29);




 FUNC_2(VAR_24, 0,
   VAR_20, VAR_30->hb0,
   VAR_21, VAR_30->hb1,
   VAR_22, VAR_30->hb2,
   VAR_23, VAR_30->hb3);





 {
  const uint32_t *VAR_33 =
   (const uint32_t *) &VAR_30->sb[0];

  FUNC_5(VAR_10, *VAR_33++);
  FUNC_5(VAR_11, *VAR_33++);
  FUNC_5(VAR_12, *VAR_33++);
  FUNC_5(VAR_13, *VAR_33++);
  FUNC_5(VAR_14, *VAR_33++);
  FUNC_5(VAR_15, *VAR_33++);
  FUNC_5(VAR_16, *VAR_33++);
  FUNC_5(VAR_17, *VAR_33);
 }

 switch (VAR_29) {
 case 0:
  FUNC_3(VAR_27,
    VAR_2, 1);
  break;
 case 1:
  FUNC_3(VAR_27,
    VAR_3, 1);
  break;
 case 2:
  FUNC_3(VAR_27,
    VAR_4, 1);
  break;
 case 3:
  FUNC_3(VAR_27,
    VAR_5, 1);
  break;
 case 4:
  FUNC_3(VAR_27,
    VAR_6, 1);
  break;
 case 5:
  FUNC_3(VAR_27,
    VAR_7, 1);
  break;
 case 6:
  FUNC_3(VAR_27,
    VAR_8, 1);
  break;
 case 7:
  FUNC_3(VAR_27,
    VAR_9, 1);
  break;
 default:
  break;
 }
}
