
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int FUNC_0 (int,int,int,int) ;
 int FUNC_1 (int,int,int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(u32 *VAR_0, u32 *VAR_1, u32 *VAR_2)
{
 u32 VAR_3;
 u32 VAR_4;
 u32 VAR_5;
 u32 VAR_6;
 u32 VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;
 int VAR_15;

 VAR_7 = VAR_2[0];
 VAR_8 = VAR_2[1];
 VAR_9 = VAR_2[2];
 VAR_10 = VAR_2[3];
 VAR_11 = VAR_2[4];
 VAR_12 = VAR_2[5];
 VAR_13 = VAR_2[6];
 VAR_14 = VAR_2[7];

 for (VAR_15 = 0; VAR_15 <= 63; VAR_15++) {

  VAR_3 = FUNC_3((FUNC_3(VAR_7, 12) + VAR_11 + FUNC_3(FUNC_4(VAR_15), VAR_15 & 31)), 7);

  VAR_4 = VAR_3 ^ FUNC_3(VAR_7, 12);

  VAR_5 = FUNC_0(VAR_15, VAR_7, VAR_8, VAR_9) + VAR_10 + VAR_4 + *VAR_1;
  VAR_1++;

  VAR_6 = FUNC_1(VAR_15, VAR_11, VAR_12, VAR_13) + VAR_14 + VAR_3 + *VAR_0;
  VAR_0++;

  VAR_10 = VAR_9;
  VAR_9 = FUNC_3(VAR_8, 9);
  VAR_8 = VAR_7;
  VAR_7 = VAR_5;
  VAR_14 = VAR_13;
  VAR_13 = FUNC_3(VAR_12, 19);
  VAR_12 = VAR_11;
  VAR_11 = FUNC_2(VAR_6);
 }

 VAR_2[0] = VAR_7 ^ VAR_2[0];
 VAR_2[1] = VAR_8 ^ VAR_2[1];
 VAR_2[2] = VAR_9 ^ VAR_2[2];
 VAR_2[3] = VAR_10 ^ VAR_2[3];
 VAR_2[4] = VAR_11 ^ VAR_2[4];
 VAR_2[5] = VAR_12 ^ VAR_2[5];
 VAR_2[6] = VAR_13 ^ VAR_2[6];
 VAR_2[7] = VAR_14 ^ VAR_2[7];

 VAR_7 = VAR_8 = VAR_9 = VAR_10 = VAR_11 = VAR_12 = VAR_13 = VAR_14 = VAR_3 = VAR_4 = VAR_5 = VAR_6 = 0;
}
