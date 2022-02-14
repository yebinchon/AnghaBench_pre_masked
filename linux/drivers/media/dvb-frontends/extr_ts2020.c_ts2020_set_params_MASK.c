
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct ts2020_priv {unsigned int frequency_div; unsigned int frequency_khz; scalar_t__ tuner; int regmap; } ;
struct dtv_frontend_properties {unsigned int frequency; int bandwidth_hz; } ;
struct dvb_frontend {struct ts2020_priv* tuner_priv; struct dtv_frontend_properties dtv_property_cache; } ;


 unsigned int FUNC_0 (unsigned int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int,unsigned int,unsigned int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int) ;
 int FUNC_4 (int ,int,unsigned int*) ;
 int FUNC_5 (int ,int,int) ;
 int FUNC_6 (struct dvb_frontend*) ;
 int FUNC_7 (struct dvb_frontend*,int) ;

__attribute__((used)) static int FUNC_8(struct dvb_frontend *VAR_6)
{
 struct dtv_frontend_properties *VAR_7 = &VAR_6->dtv_property_cache;
 struct ts2020_priv *VAR_8 = VAR_6->tuner_priv;
 int VAR_9;
 unsigned int VAR_10;
 u32 VAR_11, VAR_12;
 u16 VAR_13, VAR_14, VAR_15;
 u8 VAR_16[3], VAR_17, VAR_18, VAR_19, VAR_20, VAR_21;
 unsigned int VAR_22, VAR_23, VAR_24, VAR_25, VAR_26;
 unsigned int VAR_27 = VAR_7->frequency;





 VAR_22 = VAR_5;
 VAR_24 = FUNC_0(VAR_22, 2000);


 if (VAR_27 < VAR_8->frequency_div) {
  VAR_25 = 4;
  VAR_17 = 0x10;
 } else {
  VAR_25 = 2;
  VAR_17 = 0x00;
 }

 VAR_23 = VAR_27 * VAR_25;
 VAR_26 = VAR_23 * VAR_24 / VAR_22;
 VAR_26 += VAR_26 % 2;
 VAR_8->frequency_khz = VAR_26 * VAR_22 / VAR_24 / VAR_25;

 FUNC_3("frequency=%u offset=%d f_vco_khz=%u pll_n=%u div_ref=%u div_out=%u\n",
   VAR_8->frequency_khz, VAR_8->frequency_khz - VAR_7->frequency,
   VAR_23, VAR_26, VAR_24, VAR_25);

 if (VAR_8->tuner == VAR_3) {
  VAR_15 = 2766;
  VAR_17 |= 0x01;
  VAR_9 = FUNC_5(VAR_8->regmap, 0x10, VAR_17);
 } else {
  VAR_15 = 3200;
  VAR_17 |= 0x0b;
  VAR_9 = FUNC_5(VAR_8->regmap, 0x10, VAR_17);
  VAR_9 |= FUNC_5(VAR_8->regmap, 0x11, 0x40);
 }

 VAR_13 = VAR_26 - 1024;
 VAR_16[0] = (VAR_13 >> 8) & 0xff;
 VAR_16[1] = (VAR_13 >> 0) & 0xff;
 VAR_16[2] = VAR_24 - 8;

 VAR_9 |= FUNC_5(VAR_8->regmap, 0x01, VAR_16[0]);
 VAR_9 |= FUNC_5(VAR_8->regmap, 0x02, VAR_16[1]);
 VAR_9 |= FUNC_5(VAR_8->regmap, 0x03, VAR_16[2]);

 VAR_9 |= FUNC_7(VAR_6, 0x10);
 if (VAR_9 < 0)
  return -VAR_1;

 VAR_9 |= FUNC_7(VAR_6, 0x08);


 if (VAR_8->tuner == VAR_3)
  VAR_9 |= FUNC_6(VAR_6);

 VAR_12 = (VAR_5 / 1000 * 1694 + 500) / 1000;
 VAR_9 |= FUNC_5(VAR_8->regmap, 0x04, VAR_12 & 0xff);
 VAR_9 |= FUNC_7(VAR_6, 0x04);
 if (VAR_9 < 0)
  return -VAR_1;

 if (VAR_8->tuner == VAR_4) {
  VAR_9 = FUNC_5(VAR_8->regmap, 0x25, 0x00);
  VAR_9 |= FUNC_5(VAR_8->regmap, 0x27, 0x70);
  VAR_9 |= FUNC_5(VAR_8->regmap, 0x41, 0x09);
  VAR_9 |= FUNC_5(VAR_8->regmap, 0x08, 0x0b);
  if (VAR_9 < 0)
   return -VAR_1;
 }

 FUNC_4(VAR_8->regmap, 0x26, &VAR_10);
 VAR_14 = VAR_10;

 VAR_11 = (VAR_7->bandwidth_hz / 1000 / 2) + 2000;
 VAR_11 += VAR_2;
 VAR_11 = FUNC_1(VAR_11, 7000U, 40000U);

 VAR_12 = VAR_12 * 207 / (VAR_14 * 2 + 151);
 VAR_19 = VAR_12 * 135 / 100;
 VAR_20 = VAR_12 * 78 / 100;
 if (VAR_19 > 63)
  VAR_19 = 63;

 VAR_21 = (VAR_11 * VAR_12 * 2 / VAR_15 /
  (VAR_5 / 1000) + 1) / 2;
 if (VAR_21 > 23)
  VAR_21 = 23;
 if (VAR_21 < 1)
  VAR_21 = 1;

 VAR_18 = (VAR_21 * (VAR_5 / 1000)
  * VAR_15 * 2 / VAR_11 + 1) / 2;

 if (VAR_18 < VAR_20) {
  VAR_21++;
  VAR_18 = (VAR_21 * (VAR_5 / 1000)
   * VAR_15 * 2 / VAR_11 + 1) / 2;
 }

 if (VAR_18 > VAR_19)
  VAR_18 = VAR_19;

 VAR_9 = FUNC_5(VAR_8->regmap, 0x04, VAR_18);
 VAR_9 |= FUNC_5(VAR_8->regmap, 0x06, VAR_21);

 VAR_9 |= FUNC_7(VAR_6, 0x04);

 VAR_9 |= FUNC_7(VAR_6, 0x01);

 FUNC_2(80);

 return (VAR_9 < 0) ? -VAR_0 : 0;
}
