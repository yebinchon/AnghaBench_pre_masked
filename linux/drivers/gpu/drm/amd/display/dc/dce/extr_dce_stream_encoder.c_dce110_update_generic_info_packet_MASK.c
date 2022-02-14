
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct dce110_stream_encoder {int dummy; } ;
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
 int VAR_28 ;
 int VAR_29 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int ,int ,int,int ,int) ;
 int FUNC_6 (int ,int ,int ,int,int) ;
 int FUNC_7 (int ,int const) ;

__attribute__((used)) static void FUNC_8(
 struct dce110_stream_encoder *VAR_30,
 uint32_t VAR_31,
 const struct dc_info_packet *VAR_32)
{
 uint32_t VAR_33;



 uint32_t VAR_34 = 50;


 if (FUNC_1(VAR_1))
  FUNC_4(VAR_1, VAR_0, 1);

 if (FUNC_1(VAR_29)) {
  if (VAR_31 >= 8)
   FUNC_0(0);
  FUNC_6(VAR_28, VAR_20,
    0, 10, VAR_34);





  FUNC_4(VAR_28, VAR_21, 1);
 }

 {
  VAR_33 = FUNC_2(VAR_28);
  FUNC_4(VAR_28,
    VAR_27, VAR_31);
 }



 {
  FUNC_3(VAR_26, 0,
    VAR_22, VAR_32->hb0,
    VAR_23, VAR_32->hb1,
    VAR_24, VAR_32->hb2,
    VAR_25, VAR_32->hb3);
 }




 {
  const uint32_t *VAR_35 =
   (const uint32_t *) &VAR_32->sb[0];

  FUNC_7(VAR_12, *VAR_35++);
  FUNC_7(VAR_13, *VAR_35++);
  FUNC_7(VAR_14, *VAR_35++);
  FUNC_7(VAR_15, *VAR_35++);
  FUNC_7(VAR_16, *VAR_35++);
  FUNC_7(VAR_17, *VAR_35++);
  FUNC_7(VAR_18, *VAR_35++);
  FUNC_7(VAR_19, *VAR_35);
 }

 if (!FUNC_1(VAR_29)) {

  FUNC_5(VAR_28,
   VAR_3, (VAR_31 == 0),
   VAR_6, (VAR_31 == 2));
 }
}
