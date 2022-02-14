
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UInt32 ;
typedef scalar_t__ CProbPrice ;


 int VAR_0 ;
 unsigned int const VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_0(CProbPrice *VAR_4)
{
  UInt32 VAR_5;
  for (VAR_5 = 0; VAR_5 < (VAR_0 >> VAR_3); VAR_5++)
  {
    const unsigned VAR_6 = VAR_2;
    UInt32 VAR_7 = (VAR_5 << VAR_3) + (1 << (VAR_3 - 1));
    unsigned VAR_8 = 0;
    unsigned VAR_9;
    for (VAR_9 = 0; VAR_9 < VAR_6; VAR_9++)
    {
      VAR_7 = VAR_7 * VAR_7;
      VAR_8 <<= 1;
      while (VAR_7 >= ((UInt32)1 << 16))
      {
        VAR_7 >>= 1;
        VAR_8++;
      }
    }
    VAR_4[VAR_5] = (CProbPrice)((VAR_1 << VAR_6) - 15 - VAR_8);

  }
}
