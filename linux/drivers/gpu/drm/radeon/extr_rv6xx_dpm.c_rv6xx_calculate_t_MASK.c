
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;



__attribute__((used)) static void FUNC_0(u32 VAR_0, u32 VAR_1, int VAR_2,
         int VAR_3, int VAR_4, u8 *VAR_5, u8 *VAR_6)
{
 int VAR_7, VAR_8, VAR_9, VAR_10;

 VAR_9 = VAR_3;
 VAR_10 = 100 - VAR_4;

 VAR_7 = (int)VAR_1 * VAR_3 + (int)VAR_0 * (VAR_2 - VAR_4);
 VAR_8 = (int)VAR_0 * VAR_10 + (int)VAR_1 * VAR_9;

 if (VAR_8 != 0) {
  *VAR_5 = VAR_3 - VAR_9 * VAR_7 / VAR_8;
  *VAR_6 = VAR_4 + VAR_10 * VAR_7 / VAR_8;
 }
}
