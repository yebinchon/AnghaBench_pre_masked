
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct stv0900_internal {int chip_id; int* symbol_rate; int* srch_algo; int mclk; int* srch_range; scalar_t__* srch_standard; } ;
typedef int s16 ;
typedef enum fe_stv0900_demod_num { ____Placeholder_fe_stv0900_demod_num } fe_stv0900_demod_num ;


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
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 scalar_t__ VAR_24 ;

 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;

 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int FUNC_2 (struct stv0900_internal*,int ,int) ;
 int FUNC_3 (struct stv0900_internal*,int ,int) ;

void FUNC_4(struct stv0900_internal *VAR_31,
    enum fe_stv0900_demod_num VAR_32)
{
 u32 VAR_33;
 s16 VAR_34 ;

 FUNC_2(VAR_31, VAR_15, 0x1f);
 if (VAR_31->chip_id == 0x10)
  FUNC_3(VAR_31, VAR_14, 0xaa);

 if (VAR_31->chip_id < 0x20)
  FUNC_3(VAR_31, VAR_2, 0x55);

 if (VAR_31->chip_id <= 0x20) {
  if (VAR_31->symbol_rate[0] <= 5000000) {
   FUNC_3(VAR_31, VAR_0, 0x44);
   FUNC_3(VAR_31, VAR_8, 0x0f);
   FUNC_3(VAR_31, VAR_7, 0xff);
   FUNC_3(VAR_31, VAR_6, 0xf0);
   FUNC_3(VAR_31, VAR_5, 0x00);
   FUNC_3(VAR_31, VAR_20, 0x68);
  } else {
   FUNC_3(VAR_31, VAR_0, 0xc4);
   FUNC_3(VAR_31, VAR_20, 0x44);
  }

 } else {
  if (VAR_31->symbol_rate[VAR_32] <= 5000000)
   FUNC_3(VAR_31, VAR_20, 0x68);
  else
   FUNC_3(VAR_31, VAR_20, 0x44);

  FUNC_3(VAR_31, VAR_0, 0x46);
  if (VAR_31->srch_algo[VAR_32] == 128) {
   VAR_33 = 1000 << 16;
   VAR_33 /= (VAR_31->mclk / 1000);
   VAR_34 = (s16)VAR_33;
  } else {
   VAR_33 = (VAR_31->srch_range[VAR_32] / 2000);
   if (VAR_31->symbol_rate[VAR_32] <= 5000000)
    VAR_33 += 80;
   else
    VAR_33 += 600;

   VAR_33 = VAR_33 << 16;
   VAR_33 /= (VAR_31->mclk / 1000);
   VAR_34 = (s16)VAR_33;
  }

  FUNC_2(VAR_31, VAR_13, FUNC_1(VAR_34));
  FUNC_2(VAR_31, VAR_12, FUNC_0(VAR_34));
  VAR_34 *= (-1);
  FUNC_2(VAR_31, VAR_11, FUNC_1(VAR_34));
  FUNC_2(VAR_31, VAR_10, FUNC_0(VAR_34));
 }

 FUNC_3(VAR_31, VAR_4, 0);
 FUNC_3(VAR_31, VAR_3, 0);

 if (VAR_31->chip_id >= 0x20) {
  FUNC_3(VAR_31, VAR_17, 0x41);
  FUNC_3(VAR_31, VAR_18, 0x41);

  if ((VAR_31->srch_standard[VAR_32] == VAR_26) ||
   (VAR_31->srch_standard[VAR_32] == VAR_25) ||
   (VAR_31->srch_standard[VAR_32] == VAR_24)) {
   FUNC_3(VAR_31, VAR_30,
        0x82);
   FUNC_3(VAR_31, VAR_29, 0x0);
  }
 }

 FUNC_3(VAR_31, VAR_23, 0x00);
 FUNC_3(VAR_31, VAR_28, 0xe0);
 FUNC_3(VAR_31, VAR_27, 0xc0);
 FUNC_2(VAR_31, VAR_22, 0);
 FUNC_2(VAR_31, VAR_9, 0);
 FUNC_2(VAR_31, VAR_21, 0);
 FUNC_3(VAR_31, VAR_19, 0x88);
 if (VAR_31->chip_id >= 0x20) {
  if (VAR_31->symbol_rate[VAR_32] < 2000000) {
   if (VAR_31->chip_id <= 0x20)
    FUNC_3(VAR_31, VAR_1, 0x39);
   else
    FUNC_3(VAR_31, VAR_1, 0x89);

   FUNC_3(VAR_31, VAR_2, 0x40);
  } else if (VAR_31->symbol_rate[VAR_32] < 10000000) {
   FUNC_3(VAR_31, VAR_1, 0x4c);
   FUNC_3(VAR_31, VAR_2, 0x20);
  } else {
   FUNC_3(VAR_31, VAR_1, 0x4b);
   FUNC_3(VAR_31, VAR_2, 0x20);
  }

 } else {
  if (VAR_31->symbol_rate[VAR_32] < 10000000)
   FUNC_3(VAR_31, VAR_1, 0xef);
  else
   FUNC_3(VAR_31, VAR_1, 0xed);
 }

 switch (VAR_31->srch_algo[VAR_32]) {
 case 128:
  FUNC_3(VAR_31, VAR_16, 0x1f);
  FUNC_3(VAR_31, VAR_16, 0x18);
  break;
 case 129:
  FUNC_3(VAR_31, VAR_16, 0x1f);
  FUNC_3(VAR_31, VAR_16, 0x15);
  break;
 default:
  break;
 }
}
