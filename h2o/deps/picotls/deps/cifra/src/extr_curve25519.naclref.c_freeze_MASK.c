
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned int*,unsigned int*,int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(unsigned int VAR_1[32])
{
  unsigned int VAR_2[32];
  unsigned int VAR_3;
  unsigned int VAR_4;

  for (VAR_3 = 0;VAR_3 < 32;++VAR_3) VAR_2[VAR_3] = VAR_1[VAR_3];
  FUNC_0(VAR_1,VAR_1,VAR_0);
  VAR_4 = -((VAR_1[31] >> 7) & 1);
  for (VAR_3 = 0;VAR_3 < 32;++VAR_3) VAR_1[VAR_3] ^= VAR_4 & (VAR_2[VAR_3] ^ VAR_1[VAR_3]);
}
