
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static void FUNC_0(unsigned int VAR_0[32])
{
  unsigned int VAR_1;
  unsigned int VAR_2;
  VAR_2 = 0;
  for (VAR_1 = 0;VAR_1 < 31;++VAR_1) { VAR_2 += VAR_0[VAR_1]; VAR_0[VAR_1] = VAR_2 & 255; VAR_2 >>= 8; }
  VAR_2 += VAR_0[31]; VAR_0[31] = VAR_2 & 127;
  VAR_2 = 19 * (VAR_2 >> 7);
  for (VAR_1 = 0;VAR_1 < 31;++VAR_1) { VAR_2 += VAR_0[VAR_1]; VAR_0[VAR_1] = VAR_2 & 255; VAR_2 >>= 8; }
  VAR_2 += VAR_0[31]; VAR_0[31] = VAR_2;
}
