
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int int64_t ;
typedef int* gf ;


 int* VAR_0 ;
 int FUNC_0 (int*,int*,int*) ;
 int FUNC_1 (int*,int*) ;
 int FUNC_2 (int*,int*,int*) ;
 int FUNC_3 (int*,int*) ;
 int FUNC_4 (int*,int*,int) ;
 int FUNC_5 (int*,int*) ;
 int FUNC_6 (int*,int*,int*) ;
 int FUNC_7 (int*,int const*) ;

void FUNC_8(uint8_t *VAR_1, const uint8_t *VAR_2, const uint8_t *VAR_3)
{
  uint8_t VAR_4[32];
  gf VAR_5;
  gf VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;

  {
  size_t VAR_12;
  for (VAR_12 = 0; VAR_12 < 31; VAR_12++)
    VAR_4[VAR_12] = VAR_2[VAR_12];
  VAR_4[31] = (VAR_2[31] & 127) | 64;
  VAR_4[0] &= 248;

  FUNC_7(VAR_5, VAR_3);

  for(VAR_12 = 0; VAR_12 < 16; VAR_12++)
  {
    VAR_7[VAR_12] = VAR_5[VAR_12];
    VAR_9[VAR_12] = VAR_6[VAR_12] = VAR_8[VAR_12] = 0;
  }
  }

  VAR_6[0] = VAR_9[0] = 1;

  {int VAR_13;
  for (VAR_13 = 254; VAR_13 >= 0; VAR_13--)
  {
    int64_t VAR_14 = (VAR_4[VAR_13 >> 3] >> (VAR_13 & 7)) & 1;
    FUNC_4(VAR_6, VAR_7, VAR_14);
    FUNC_4(VAR_8, VAR_9, VAR_14);
    FUNC_0(VAR_10, VAR_6, VAR_8);
    FUNC_6(VAR_6, VAR_6, VAR_8);
    FUNC_0(VAR_8, VAR_7, VAR_9);
    FUNC_6(VAR_7, VAR_7, VAR_9);
    FUNC_5(VAR_9, VAR_10);
    FUNC_5(VAR_11, VAR_6);
    FUNC_2(VAR_6, VAR_8, VAR_6);
    FUNC_2(VAR_8, VAR_7, VAR_10);
    FUNC_0(VAR_10, VAR_6, VAR_8);
    FUNC_6(VAR_6, VAR_6, VAR_8);
    FUNC_5(VAR_7, VAR_6);
    FUNC_6(VAR_8, VAR_9, VAR_11);
    FUNC_2(VAR_6, VAR_8, VAR_0);
    FUNC_0(VAR_6, VAR_6, VAR_9);
    FUNC_2(VAR_8, VAR_8, VAR_6);
    FUNC_2(VAR_6, VAR_9, VAR_11);
    FUNC_2(VAR_9, VAR_7, VAR_5);
    FUNC_5(VAR_7, VAR_10);
    FUNC_4(VAR_6, VAR_7, VAR_14);
    FUNC_4(VAR_8, VAR_9, VAR_14);
  }
  }

  FUNC_1(VAR_8, VAR_8);
  FUNC_2(VAR_6, VAR_6, VAR_8);
  FUNC_3(VAR_1, VAR_6);
}
