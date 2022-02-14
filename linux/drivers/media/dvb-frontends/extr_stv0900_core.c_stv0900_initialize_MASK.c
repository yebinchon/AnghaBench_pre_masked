
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stv0900_internal {int chip_id; scalar_t__ errs; int clkmode; } ;
typedef int s32 ;
typedef enum fe_stv0900_error { ____Placeholder_fe_stv0900_error } fe_stv0900_error ;


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
 int** VAR_18 ;
 int VAR_19 ;
 int** VAR_20 ;
 scalar_t__ VAR_21 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct stv0900_internal*,int) ;
 int FUNC_2 (struct stv0900_internal*,int,int) ;

__attribute__((used)) static enum fe_stv0900_error FUNC_3(struct stv0900_internal *VAR_22)
{
 s32 VAR_23;

 if (VAR_22 == ((void*)0))
  return VAR_19;

 VAR_22->chip_id = FUNC_1(VAR_22, VAR_1);

 if (VAR_22->errs != VAR_21)
  return VAR_22->errs;


 FUNC_2(VAR_22, VAR_3, 0x5c);
 FUNC_2(VAR_22, VAR_9, 0x5c);
 FUNC_0(3);
 FUNC_2(VAR_22, VAR_8, 0x6c);
 FUNC_2(VAR_22, VAR_14, 0x6f);
 FUNC_2(VAR_22, VAR_5, 0x20);
 FUNC_2(VAR_22, VAR_11, 0x20);
 FUNC_2(VAR_22, VAR_2, 0x13);
 FUNC_0(3);
 FUNC_2(VAR_22, VAR_0, 0x08);

 switch (VAR_22->clkmode) {
 case 0:
 case 2:
  FUNC_2(VAR_22, VAR_15, 0x20
    | VAR_22->clkmode);
  break;
 default:

  VAR_23 = 0x02 & FUNC_1(VAR_22, VAR_15);
  FUNC_2(VAR_22, VAR_15, 0x20 | VAR_23);
  break;
 }

 FUNC_0(3);
 for (VAR_23 = 0; VAR_23 < 181; VAR_23++)
  FUNC_2(VAR_22, VAR_20[VAR_23][0],
    VAR_20[VAR_23][1]);

 if (FUNC_1(VAR_22, VAR_1) >= 0x20) {
  FUNC_2(VAR_22, VAR_16, 0x0c);
  for (VAR_23 = 0; VAR_23 < 32; VAR_23++)
   FUNC_2(VAR_22, VAR_18[VAR_23][0],
     VAR_18[VAR_23][1]);
 }

 FUNC_2(VAR_22, VAR_4, 0x6c);
 FUNC_2(VAR_22, VAR_10, 0x6c);

 FUNC_2(VAR_22, VAR_6, 0x01);
 FUNC_2(VAR_22, VAR_12, 0x21);

 FUNC_2(VAR_22, VAR_7, 0x20);
 FUNC_2(VAR_22, VAR_13, 0x20);

 FUNC_2(VAR_22, VAR_17, 0x80);
 FUNC_2(VAR_22, VAR_17, 0x00);

 return VAR_21;
}
