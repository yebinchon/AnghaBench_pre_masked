
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct stv0900_state {int demod; struct stv0900_internal* internal; } ;
struct stv0900_internal {int chip_id; int* symbol_rate; int* srch_range; int* freq; int* tuner_type; int mclk; int * bw; } ;
struct dvb_frontend {struct stv0900_state* demodulator_priv; } ;
typedef int s32 ;
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
 int VAR_19 ;
 int FUNC_0 (char*,int,int,int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct stv0900_internal*,int ) ;
 int FUNC_3 (struct stv0900_internal*,int ,int) ;
 int FUNC_4 (struct stv0900_internal*,int ) ;
 int FUNC_5 (struct dvb_frontend*,int,int ) ;
 int FUNC_6 (struct stv0900_internal*,int,int ,int) ;
 int FUNC_7 (struct stv0900_internal*,int ,int) ;
 int FUNC_8 (struct stv0900_internal*,int ,int) ;

__attribute__((used)) static u32 FUNC_9(struct dvb_frontend *VAR_20)
{
 struct stv0900_state *VAR_21 = VAR_20->demodulator_priv;
 struct stv0900_internal *VAR_22 = VAR_21->internal;
 enum fe_stv0900_demod_num VAR_23 = VAR_21->demod;
 int VAR_24 = VAR_8;
 s32 VAR_25, VAR_26 = 0,
  VAR_27 = 1,
  VAR_28,
  VAR_29 = 0,
  VAR_30;
 u32 VAR_31,
  VAR_32 = 0,
  VAR_33 = 0,
  VAR_34 = 1200;

 if (VAR_22->chip_id >= 0x30)
  VAR_31 = 0x2e00;
 else
  VAR_31 = 0x1f00;

 FUNC_7(VAR_22, VAR_5, 0x1f);
 FUNC_8(VAR_22, VAR_15, 0x12);
 FUNC_8(VAR_22, VAR_18, 0xf0);
 FUNC_8(VAR_22, VAR_17, 0xe0);
 FUNC_7(VAR_22, VAR_9, 1);
 FUNC_7(VAR_22, VAR_4, 1);
 FUNC_8(VAR_22, VAR_14, 0x83);
 FUNC_8(VAR_22, VAR_13, 0xc0);
 FUNC_8(VAR_22, VAR_11, 0x82);
 FUNC_8(VAR_22, VAR_10, 0xa0);
 FUNC_8(VAR_22, VAR_7, 0x0);
 FUNC_8(VAR_22, VAR_2, 0x50);

 if (VAR_22->chip_id >= 0x30) {
  FUNC_8(VAR_22, VAR_3, 0x99);
  FUNC_8(VAR_22, VAR_12, 0x98);
 } else if (VAR_22->chip_id >= 0x20) {
  FUNC_8(VAR_22, VAR_3, 0x6a);
  FUNC_8(VAR_22, VAR_12, 0x95);
 } else {
  FUNC_8(VAR_22, VAR_3, 0xed);
  FUNC_8(VAR_22, VAR_12, 0x73);
 }

 if (VAR_22->symbol_rate[VAR_23] <= 2000000)
  VAR_34 = 1000;
 else if (VAR_22->symbol_rate[VAR_23] <= 5000000)
  VAR_34 = 2000;
 else if (VAR_22->symbol_rate[VAR_23] <= 12000000)
  VAR_34 = 3000;
 else
   VAR_34 = 5000;

 VAR_28 = -1 + ((VAR_22->srch_range[VAR_23] / 1000) / VAR_34);
 VAR_28 /= 2;
 VAR_28 = (2 * VAR_28) + 1;

 if (VAR_28 < 0)
  VAR_28 = 1;
 else if (VAR_28 > 10) {
  VAR_28 = 11;
  VAR_34 = (VAR_22->srch_range[VAR_23] / 1000) / 10;
 }

 VAR_29 = 0;
 VAR_27 = 1;

 VAR_30 = VAR_22->freq[VAR_23];

 while ((VAR_24 == VAR_8) && (VAR_29 < VAR_28)) {
  FUNC_8(VAR_22, VAR_6, 0x5f);
  FUNC_7(VAR_22, VAR_5, 0);

  FUNC_1(50);

  for (VAR_25 = 0; VAR_25 < 10; VAR_25++) {
   if (FUNC_2(VAR_22, VAR_16) >= 2)
    VAR_26++;

   VAR_33 += (FUNC_4(VAR_22, VAR_1) << 8) |
     FUNC_4(VAR_22, VAR_0);
  }

  VAR_33 /= 10;
  VAR_32 = FUNC_3(VAR_22, VAR_22->mclk, VAR_23);
  VAR_29++;
  VAR_27 *= -1;

  FUNC_0("lock: I2C_DEMOD_MODE_FIELD =0. Search started. tuner freq=%d agc2=0x%x srate_coarse=%d tmg_cpt=%d\n",
   VAR_30, VAR_33, VAR_32, VAR_26);

  if ((VAR_26 >= 5) &&
    (VAR_33 < VAR_31) &&
    (VAR_32 < 55000000) &&
    (VAR_32 > 850000))
   VAR_24 = VAR_19;
  else if (VAR_29 < VAR_28) {
   if (VAR_27 > 0)
    VAR_30 += (VAR_29 * VAR_34);
   else
    VAR_30 -= (VAR_29 * VAR_34);

   if (VAR_22->tuner_type[VAR_23] == 3)
    FUNC_6(VAR_22, VAR_30,
      VAR_22->bw[VAR_23], VAR_23);
   else
    FUNC_5(VAR_20, VAR_30,
      VAR_22->bw[VAR_23]);
  }
 }

 if (VAR_24 == VAR_8)
  VAR_32 = 0;
 else
  VAR_32 = FUNC_3(VAR_22, VAR_22->mclk, VAR_23);

 return VAR_32;
}
