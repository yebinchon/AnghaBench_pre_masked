
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;



__attribute__((used)) static void FUNC_0(uint32_t VAR_0[17],
                         const uint32_t VAR_1[17])
{
  uint32_t VAR_2 = 0;
  int VAR_3;

  for (VAR_3 = 0; VAR_3 < 17; VAR_3++)
  {
    VAR_2 += VAR_0[VAR_3] + VAR_1[VAR_3];
    VAR_0[VAR_3] = VAR_2 & 0xff;
    VAR_2 >>= 8;
  }
}
