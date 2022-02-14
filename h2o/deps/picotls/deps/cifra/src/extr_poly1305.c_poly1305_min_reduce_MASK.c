
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;



__attribute__((used)) static void FUNC_0(uint32_t VAR_0[17])
{
  uint32_t VAR_1 = 0;
  int VAR_2;
  for (VAR_2 = 0; VAR_2 < 16; VAR_2++)
  {
    VAR_1 += VAR_0[VAR_2];
    VAR_0[VAR_2] = VAR_1 & 0xff;
    VAR_1 >>= 8;
  }






  VAR_1 += VAR_0[16];
  VAR_0[16] = VAR_1 & 0x03;
  VAR_1 = 5 * (VAR_1 >> 2);

  for (VAR_2 = 0; VAR_2 < 16; VAR_2++)
  {
    VAR_1 += VAR_0[VAR_2];
    VAR_0[VAR_2] = VAR_1 & 0xff;
    VAR_1 >>= 8;
  }

  VAR_0[16] += VAR_1;
}
