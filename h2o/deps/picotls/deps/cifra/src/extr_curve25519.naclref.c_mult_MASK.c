
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned int*) ;

__attribute__((used)) static void FUNC_1(unsigned int VAR_0[32],const unsigned int VAR_1[32],const unsigned int VAR_2[32])
{
  unsigned int VAR_3;
  unsigned int VAR_4;
  unsigned int VAR_5;

  for (VAR_3 = 0;VAR_3 < 32;++VAR_3) {
    VAR_5 = 0;
    for (VAR_4 = 0;VAR_4 <= VAR_3;++VAR_4) VAR_5 += VAR_1[VAR_4] * VAR_2[VAR_3 - VAR_4];
    for (VAR_4 = VAR_3 + 1;VAR_4 < 32;++VAR_4) VAR_5 += 38 * VAR_1[VAR_4] * VAR_2[VAR_3 + 32 - VAR_4];
    VAR_0[VAR_3] = VAR_5;
  }
  FUNC_0(VAR_0);
}
