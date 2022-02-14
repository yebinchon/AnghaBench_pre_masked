
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UInt32 ;
typedef int CProbPrice ;
typedef int CLzmaProb ;


 scalar_t__ FUNC_0 (int const,int) ;

__attribute__((used)) static UInt32 FUNC_1(const CLzmaProb *VAR_0, UInt32 VAR_1, UInt32 VAR_2, const CProbPrice *VAR_3)
{
  UInt32 VAR_4 = 0;
  UInt32 VAR_5 = 0x100;
  VAR_1 |= 0x100;
  do
  {
    VAR_2 <<= 1;
    VAR_4 += FUNC_0(VAR_0[VAR_5 + (VAR_2 & VAR_5) + (VAR_1 >> 8)], (VAR_1 >> 7) & 1);
    VAR_1 <<= 1;
    VAR_5 &= ~(VAR_2 ^ VAR_1);
  }
  while (VAR_1 < 0x10000);
  return VAR_4;
}
