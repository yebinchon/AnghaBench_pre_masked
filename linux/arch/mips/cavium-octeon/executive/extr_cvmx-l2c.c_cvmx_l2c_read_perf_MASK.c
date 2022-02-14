
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

uint64_t FUNC_6(uint32_t VAR_7)
{
 switch (VAR_7) {
 case 0:
  if (FUNC_4(VAR_6) || FUNC_4(VAR_5))
   return FUNC_5(VAR_0);
  else {
   uint64_t VAR_8 = 0;
   int VAR_9;

   for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9++)
    VAR_8 += FUNC_5(FUNC_0(VAR_9));
   return VAR_8;
  }
 case 1:
  if (FUNC_4(VAR_6) || FUNC_4(VAR_5))
   return FUNC_5(VAR_1);
  else {
   uint64_t VAR_10 = 0;
   int VAR_11;

   for (VAR_11 = 0; VAR_11 < VAR_4; VAR_11++)
    VAR_10 += FUNC_5(FUNC_1(VAR_11));
   return VAR_10;
  }
 case 2:
  if (FUNC_4(VAR_6) || FUNC_4(VAR_5))
   return FUNC_5(VAR_2);
  else {
   uint64_t VAR_12 = 0;
   int VAR_13;

   for (VAR_13 = 0; VAR_13 < VAR_4; VAR_13++)
    VAR_12 += FUNC_5(FUNC_2(VAR_13));
   return VAR_12;
  }
 case 3:
 default:
  if (FUNC_4(VAR_6) || FUNC_4(VAR_5))
   return FUNC_5(VAR_3);
  else {
   uint64_t VAR_14 = 0;
   int VAR_15;

   for (VAR_15 = 0; VAR_15 < VAR_4; VAR_15++)
    VAR_14 += FUNC_5(FUNC_3(VAR_15));
   return VAR_14;
  }
 }
}
