
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int s32 ;
typedef enum fe_stv0900_search_algo { ____Placeholder_fe_stv0900_search_algo } fe_stv0900_search_algo ;






__attribute__((used)) static void FUNC_0(s32 *VAR_0, s32 *VAR_1,
     s32 VAR_2,
     enum fe_stv0900_search_algo VAR_3)
{
 switch (VAR_3) {
 case 130:
  if (VAR_2 <= 1500000) {
   (*VAR_0) = 1500;
   (*VAR_1) = 400;
  } else if (VAR_2 <= 5000000) {
   (*VAR_0) = 1000;
   (*VAR_1) = 300;
  } else {
   (*VAR_0) = 700;
   (*VAR_1) = 100;
  }

  break;
 case 129:
 case 128:
 default:
  if (VAR_2 <= 1000000) {
   (*VAR_0) = 3000;
   (*VAR_1) = 1700;
  } else if (VAR_2 <= 2000000) {
   (*VAR_0) = 2500;
   (*VAR_1) = 1100;
  } else if (VAR_2 <= 5000000) {
   (*VAR_0) = 1000;
   (*VAR_1) = 550;
  } else if (VAR_2 <= 10000000) {
   (*VAR_0) = 700;
   (*VAR_1) = 250;
  } else if (VAR_2 <= 20000000) {
   (*VAR_0) = 400;
   (*VAR_1) = 130;
  } else {
   (*VAR_0) = 300;
   (*VAR_1) = 100;
  }

  break;

 }

 if (VAR_3 == 128)
  (*VAR_0) /= 2;
}
