
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int64_t ;
typedef int* gf ;



__attribute__((used)) static void FUNC_0(gf VAR_0, gf VAR_1, int64_t VAR_2)
{
  int64_t VAR_3, VAR_4 = ~(VAR_2-1);
  size_t VAR_5;
  for (VAR_5 = 0; VAR_5 < 16; VAR_5++)
  {
    VAR_3 = VAR_4 & (VAR_0[VAR_5] ^ VAR_1[VAR_5]);
    VAR_0[VAR_5] ^= VAR_3;
    VAR_1[VAR_5] ^= VAR_3;
  }
}
