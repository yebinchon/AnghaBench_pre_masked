
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;


 int FUNC_0 (int,int,int,int,int) ;

__attribute__((used)) static int
FUNC_1(int VAR_0, int VAR_1,
  int *VAR_2, int *VAR_3, int *VAR_4, int *VAR_5,
  int *VAR_6, int *VAR_7, int *VAR_8)
{
 int VAR_9 = VAR_0, VAR_10, VAR_11;
 bool VAR_12 = 0;

 *VAR_4 = 1;

 *VAR_7 = 1;

 *VAR_8 = 1;

 for (VAR_10 = 0x7; VAR_10 >= 0x5; --VAR_10) {
  for (VAR_11 = 0x25; VAR_11 <= 0x2b; ++VAR_11) {
   int VAR_13, VAR_14, VAR_15;

   VAR_14 = FUNC_0(0, 1, VAR_11, VAR_10, VAR_1);
   VAR_13 = VAR_0 / VAR_14;
   VAR_15 = VAR_0
    - FUNC_0(0xf000, 1, VAR_13, 1, VAR_14);


   if (VAR_15 < VAR_9) {
    VAR_9 = VAR_15;
    *VAR_6 = VAR_13;
    *VAR_2 = VAR_11;
    *VAR_5 = VAR_10;
    VAR_12 = 0;
   }

   VAR_13 += 1;
   VAR_15 = FUNC_0(0xf000, 1, VAR_13, 1, VAR_14)
    - VAR_0;
   if (VAR_15 < VAR_9) {
    VAR_9 = VAR_15;
    *VAR_6 = VAR_13;
    *VAR_2 = VAR_11;
    *VAR_5 = VAR_10;
    VAR_12 = 1;
   }
  }
 }


 *VAR_3 = (u16)((((VAR_9 / *VAR_6 * *VAR_8) * (*VAR_5 * *VAR_4)) << 13) / VAR_1);
 if (VAR_12)
  *VAR_3 = (u16)(1 - *VAR_3);

 return FUNC_0(*VAR_3, 1, *VAR_2, *VAR_5, VAR_1);
}
