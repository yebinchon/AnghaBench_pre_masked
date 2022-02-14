
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


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

__attribute__((used)) static int FUNC_0(u32 VAR_11, int *VAR_12, int *VAR_13)
{
 u32 VAR_14;

 switch (VAR_11) {
 case 133:
 case 129:
 case 128:
  *VAR_12 = VAR_7;
  return 1;

 case 132:
 case 130:
 case 131:
  *VAR_12 = VAR_8;
  return 1;

 default:

  if ((VAR_11 >= VAR_0) &&
      (VAR_11 < VAR_0 +
     VAR_10)) {
   *VAR_13 = VAR_11 - VAR_0;
   *VAR_12 = VAR_6;
   return 1;
  }

  if ((VAR_11 >= VAR_2) &&
      (VAR_11 < VAR_2 + VAR_9)) {
   *VAR_13 = VAR_11 - VAR_2;
   *VAR_12 = VAR_5;
   return 1;
  }

  VAR_14 = VAR_11 & VAR_3;
  if ((VAR_14 >= VAR_1) &&
      (VAR_14 < VAR_1 +
         VAR_9)) {
   *VAR_12 = VAR_4;
   *VAR_13 = VAR_14 - VAR_1;
   return 1;
  }
  return 0;
 }
}
