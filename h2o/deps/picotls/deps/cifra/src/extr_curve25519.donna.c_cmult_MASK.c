
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int limb ;


 int FUNC_0 (int*,int*,int*,int*,int*,int*,int*,int*,int const*) ;
 int FUNC_1 (int*,int const*,int) ;
 int FUNC_2 (int*,int*,int const) ;

__attribute__((used)) static void
FUNC_3(limb *VAR_0, limb *VAR_1, const u8 *VAR_2, const limb *VAR_3) {
  limb VAR_4[19] = {0}, VAR_5[19] = {1}, VAR_6[19] = {1}, VAR_7[19] = {0};
  limb *VAR_8 = VAR_4, *VAR_9 = VAR_5, *VAR_10 = VAR_6, *VAR_11 = VAR_7, *VAR_12;
  limb VAR_13[19] = {0}, VAR_14[19] = {1}, VAR_15[19] = {0}, VAR_16[19] = {1};
  limb *VAR_17 = VAR_13, *VAR_18 = VAR_14, *VAR_19 = VAR_15, *VAR_20 = VAR_16;

  unsigned VAR_21, VAR_22;

  FUNC_1(VAR_8, VAR_3, sizeof(limb) * 10);

  for (VAR_21 = 0; VAR_21 < 32; ++VAR_21) {
    u8 VAR_23 = VAR_2[31 - VAR_21];
    for (VAR_22 = 0; VAR_22 < 8; ++VAR_22) {
      const limb VAR_24 = VAR_23 >> 7;

      FUNC_2(VAR_10, VAR_8, VAR_24);
      FUNC_2(VAR_11, VAR_9, VAR_24);
      FUNC_0(VAR_19, VAR_20,
             VAR_17, VAR_18,
             VAR_10, VAR_11,
             VAR_8, VAR_9,
             VAR_3);
      FUNC_2(VAR_19, VAR_17, VAR_24);
      FUNC_2(VAR_20, VAR_18, VAR_24);

      VAR_12 = VAR_10;
      VAR_10 = VAR_19;
      VAR_19 = VAR_12;
      VAR_12 = VAR_11;
      VAR_11 = VAR_20;
      VAR_20 = VAR_12;
      VAR_12 = VAR_8;
      VAR_8 = VAR_17;
      VAR_17 = VAR_12;
      VAR_12 = VAR_9;
      VAR_9 = VAR_18;
      VAR_18 = VAR_12;

      VAR_23 <<= 1;
    }
  }

  FUNC_1(VAR_0, VAR_10, sizeof(limb) * 10);
  FUNC_1(VAR_1, VAR_11, sizeof(limb) * 10);
}
