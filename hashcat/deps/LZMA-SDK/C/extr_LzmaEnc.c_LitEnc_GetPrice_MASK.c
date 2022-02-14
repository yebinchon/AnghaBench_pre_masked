
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UInt32 ;
typedef int CProbPrice ;
typedef int CLzmaProb ;


 scalar_t__ FUNC_0 (int const,unsigned int) ;

__attribute__((used)) static UInt32 FUNC_1(const CLzmaProb *VAR_0, UInt32 VAR_1, const CProbPrice *VAR_2)
{
  UInt32 VAR_3 = 0;
  VAR_1 |= 0x100;
  do
  {
    unsigned VAR_4 = VAR_1 & 1;
    VAR_1 >>= 1;
    VAR_3 += FUNC_0(VAR_0[VAR_1], VAR_4);
  }
  while (VAR_1 >= 2);
  return VAR_3;
}
