
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t ptrdiff_t ;
typedef size_t UInt32 ;
typedef size_t CLzRef ;
typedef scalar_t__ Byte ;



__attribute__((used)) static UInt32 * FUNC_0(unsigned VAR_0, UInt32 VAR_1, UInt32 VAR_2, const Byte *VAR_3, CLzRef *VAR_4,
    UInt32 VAR_5, UInt32 VAR_6, UInt32 VAR_7,
    UInt32 *VAR_8, unsigned VAR_9)
{
  const Byte *VAR_10 = VAR_3 + VAR_0;
  VAR_4[VAR_5] = VAR_1;
  do
  {
    UInt32 VAR_11 = VAR_2 - VAR_1;
    if (VAR_11 >= VAR_6)
      break;
    {
      ptrdiff_t VAR_12;
      VAR_1 = VAR_4[VAR_5 - VAR_11 + ((VAR_11 > VAR_5) ? VAR_6 : 0)];
      VAR_12 = (ptrdiff_t)0 - VAR_11;
      if (VAR_3[VAR_9] == VAR_3[VAR_9 + VAR_12])
      {
        const Byte *VAR_13 = VAR_3;
        while (*VAR_13 == VAR_13[VAR_12])
        {
          if (++VAR_13 == VAR_10)
          {
            VAR_8[0] = (UInt32)(VAR_10 - VAR_3);
            VAR_8[1] = VAR_11 - 1;
            return VAR_8 + 2;
          }
        }
        {
          unsigned VAR_14 = (unsigned)(VAR_13 - VAR_3);
          if (VAR_9 < VAR_14)
          {
            VAR_9 = VAR_14;
            VAR_8[0] = (UInt32)VAR_14;
            VAR_8[1] = VAR_11 - 1;
            VAR_8 += 2;
          }
        }
      }
    }
  }
  while (--VAR_7);

  return VAR_8;
}
