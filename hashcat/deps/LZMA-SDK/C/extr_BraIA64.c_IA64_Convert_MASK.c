
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UInt32 ;
typedef int SizeT ;
typedef int Byte ;


 unsigned int FUNC_0 (int*) ;
 int FUNC_1 (int*,unsigned int) ;

SizeT FUNC_2(Byte *VAR_0, SizeT VAR_1, UInt32 VAR_2, int VAR_3)
{
  SizeT VAR_4;
  if (VAR_1 < 16)
    return 0;
  VAR_1 -= 16;
  VAR_4 = 0;
  do
  {
    unsigned VAR_5 = ((UInt32)0x334B0000 >> (VAR_0[VAR_4] & 0x1E)) & 3;
    if (VAR_5)
    {
      VAR_5++;
      do
      {
        Byte *VAR_6 = VAR_0 + (VAR_4 + (size_t)VAR_5 * 5 - 8);
        if (((VAR_6[3] >> VAR_5) & 15) == 5
            && (((VAR_6[-1] | ((UInt32)VAR_6[0] << 8)) >> VAR_5) & 0x70) == 0)
        {
          unsigned VAR_7 = FUNC_0(VAR_6);
          unsigned VAR_8 = VAR_7 >> VAR_5;
          VAR_8 = (VAR_8 & 0xFFFFF) | ((VAR_8 & (1 << 23)) >> 3);

          VAR_8 <<= 4;
          if (VAR_3)
            VAR_8 += VAR_2 + (UInt32)VAR_4;
          else
            VAR_8 -= VAR_2 + (UInt32)VAR_4;
          VAR_8 >>= 4;

          VAR_8 &= 0x1FFFFF;
          VAR_8 += 0x700000;
          VAR_8 &= 0x8FFFFF;
          VAR_7 &= ~((UInt32)0x8FFFFF << VAR_5);
          VAR_7 |= (VAR_8 << VAR_5);
          FUNC_1(VAR_6, VAR_7);
        }
      }
      while (++VAR_5 <= 4);
    }
    VAR_4 += 16;
  }
  while (VAR_4 <= VAR_1);
  return VAR_4;
}
