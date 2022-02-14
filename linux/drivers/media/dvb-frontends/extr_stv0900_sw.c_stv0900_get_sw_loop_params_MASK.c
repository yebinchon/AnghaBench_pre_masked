
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stv0900_internal {int* symbol_rate; int* srch_range; int* srch_standard; int mclk; } ;
typedef int s32 ;
typedef enum fe_stv0900_search_standard { ____Placeholder_fe_stv0900_search_standard } fe_stv0900_search_standard ;
typedef enum fe_stv0900_demod_num { ____Placeholder_fe_stv0900_demod_num } fe_stv0900_demod_num ;







__attribute__((used)) static void FUNC_0(struct stv0900_internal *VAR_0,
    s32 *VAR_1, s32 *VAR_2,
    s32 *VAR_3,
    enum fe_stv0900_demod_num VAR_4)
{
 s32 VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;

 enum fe_stv0900_search_standard VAR_10;

 VAR_8 = VAR_0->symbol_rate[VAR_4];
 VAR_9 = VAR_0->srch_range[VAR_4] / 1000;
 VAR_9 += VAR_9 / 10;
 VAR_10 = VAR_0->srch_standard[VAR_4];

 VAR_9 = 65536 * (VAR_9 / 2);
 VAR_9 /= VAR_0->mclk / 1000;

 if (VAR_9 > 0x4000)
  VAR_9 = 0x4000;

 VAR_6 = VAR_8;
 VAR_6 /= VAR_0->mclk >> 10;
 VAR_6 = VAR_6 << 6;

 switch (VAR_10) {
 case 129:
 case 130:
  VAR_6 *= 3;
  VAR_5 = 20;
  break;
 case 128:
  VAR_6 *= 4;
  VAR_5 = 25;
  break;
 case 131:
 default:
  VAR_6 *= 3;
  VAR_5 = 25;
  break;
 }

 VAR_6 /= 100;

 if ((VAR_6 > VAR_9) || (VAR_6 < 0))
  VAR_6 = VAR_9 / 2;

 VAR_5 *= 27500;

 if (VAR_8 > 0)
  VAR_5 /= VAR_8 / 1000;

 if ((VAR_5 > 100) || (VAR_5 < 0))
  VAR_5 = 100;

 VAR_7 = (VAR_9 / VAR_6) + 1;

 if ((VAR_7 > 100) || (VAR_7 < 0)) {
  VAR_7 = 100;
  VAR_6 = VAR_9 / VAR_7;
 }

 *VAR_1 = VAR_6;
 *VAR_2 = VAR_5;
 *VAR_3 = VAR_7;

}
