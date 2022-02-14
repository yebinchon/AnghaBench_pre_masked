
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stv0900_internal {int* srch_range; int mclk; int chip_id; } ;
typedef int s32 ;
typedef enum fe_stv0900_demod_num { ____Placeholder_fe_stv0900_demod_num } fe_stv0900_demod_num ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct stv0900_internal*,int) ;
 int FUNC_1 (struct stv0900_internal*,int,int) ;
 int FUNC_2 (struct stv0900_internal*,int ,int) ;
 int FUNC_3 (struct stv0900_internal*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct stv0900_internal *VAR_7,
    s32 VAR_8, s32 VAR_9, int VAR_10,
    s32 VAR_11, enum fe_stv0900_demod_num VAR_12)
{
 int VAR_13,
  VAR_14 = VAR_4;
 s32 VAR_15,
  VAR_16,
  VAR_17;

 VAR_17 = VAR_7->srch_range[VAR_12] / 1000;
 VAR_17 += (VAR_17 / 10);

 VAR_17 = 65536 * (VAR_17 / 2);
 VAR_17 /= VAR_7->mclk / 1000;

 if (VAR_17 > 0x4000)
  VAR_17 = 0x4000;

 if (VAR_10 == VAR_6)
  VAR_16 = 0;
 else
  VAR_16 = -VAR_17 + VAR_8;

 VAR_15 = 0;

 do {
  FUNC_3(VAR_7, VAR_3, 0x1c);
  FUNC_3(VAR_7, VAR_2, (VAR_16 / 256) & 0xff);
  FUNC_3(VAR_7, VAR_1, VAR_16 & 0xff);
  FUNC_3(VAR_7, VAR_3, 0x18);
  FUNC_2(VAR_7, VAR_0, 1);

  if (VAR_7->chip_id == 0x12) {
   FUNC_2(VAR_7, VAR_5, 1);
   FUNC_2(VAR_7, VAR_5, 0);
  }

  if (VAR_10 == VAR_6) {
   if (VAR_16 >= 0)
    VAR_16 = -VAR_16 - 2 * VAR_8;
   else
    VAR_16 = -VAR_16;
  } else
   VAR_16 += + 2 * VAR_8;

  VAR_15++;
  VAR_14 = FUNC_1(VAR_7, VAR_12, VAR_9);
  VAR_13 = FUNC_0(VAR_7, VAR_12);

 } while ((VAR_14 == VAR_4)
   && (VAR_13 == VAR_4)
   && ((VAR_16 - VAR_8) < VAR_17)
   && ((VAR_16 + VAR_8) > -VAR_17)
   && (VAR_15 < VAR_11));

 FUNC_2(VAR_7, VAR_0, 0);

 return VAR_14;
}
