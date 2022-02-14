
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int u8 ;
typedef int limb ;


 int FUNC_0 (int *,int *,int*,int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int*,int *) ;
 int FUNC_3 (int *,int const*) ;
 int FUNC_4 (int *,int *,int *) ;

void FUNC_5(u8 VAR_0[32], const u8 VAR_1[32], const u8 VAR_2[32])
{
  limb VAR_3[10], VAR_4[10], VAR_5[11], VAR_6[10];
  uint8_t VAR_7[32];
  int VAR_8;

  for (VAR_8 = 0; VAR_8 < 32; ++VAR_8) VAR_7[VAR_8] = VAR_1[VAR_8];
  VAR_7[0] &= 248;
  VAR_7[31] &= 127;
  VAR_7[31] |= 64;

  FUNC_3(VAR_3, VAR_2);
  FUNC_0(VAR_4, VAR_5, VAR_7, VAR_3);
  FUNC_1(VAR_6, VAR_5);
  FUNC_4(VAR_5, VAR_4, VAR_6);
  FUNC_2(VAR_0, VAR_5);
}
