
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;


 int VAR_0 ;
 int FUNC_0 (int*,int) ;
 unsigned int FUNC_1 (int const*,unsigned int) ;
 int FUNC_2 (int*,unsigned int) ;
 int FUNC_3 (int*,int const*,unsigned int) ;

__attribute__((used)) static void FUNC_4(u64 *VAR_1, u64 *VAR_2, const u64 *VAR_3,
     unsigned int VAR_4)
{
 u64 VAR_5[2 * VAR_0];
 u64 VAR_6[2 * VAR_0];
 u64 *VAR_7[2] = { VAR_6, VAR_2 };
 u64 VAR_8 = 0;
 unsigned int VAR_9;

 int VAR_10 = (VAR_4 * 2 * 64) - FUNC_1(VAR_3, VAR_4);
 int VAR_11 = VAR_10 / 64;
 int VAR_12 = VAR_10 % 64;

 FUNC_0(VAR_5, VAR_11);
 if (VAR_12 > 0) {
  for (VAR_9 = 0; VAR_9 < VAR_4; ++VAR_9) {
   VAR_5[VAR_11 + VAR_9] = (VAR_3[VAR_9] << VAR_12) | VAR_8;
   VAR_8 = VAR_3[VAR_9] >> (64 - VAR_12);
  }
 } else
  FUNC_3(VAR_5 + VAR_11, VAR_3, VAR_4);

 for (VAR_9 = 1; VAR_10 >= 0; --VAR_10) {
  u64 VAR_13 = 0;
  unsigned int VAR_14;

  for (VAR_14 = 0; VAR_14 < VAR_4 * 2; ++VAR_14) {
   u64 VAR_15 = VAR_7[VAR_9][VAR_14] - VAR_5[VAR_14] - VAR_13;

   if (VAR_15 != VAR_7[VAR_9][VAR_14])
    VAR_13 = (VAR_15 > VAR_7[VAR_9][VAR_14]);
   VAR_7[1 - VAR_9][VAR_14] = VAR_15;
  }
  VAR_9 = !(VAR_9 ^ VAR_13);
  FUNC_2(VAR_5, VAR_4);
  VAR_5[VAR_4 - 1] |= VAR_5[VAR_4] << (64 - 1);
  FUNC_2(VAR_5 + VAR_4, VAR_4);
 }
 FUNC_3(VAR_1, VAR_7[VAR_9], VAR_4);
}
