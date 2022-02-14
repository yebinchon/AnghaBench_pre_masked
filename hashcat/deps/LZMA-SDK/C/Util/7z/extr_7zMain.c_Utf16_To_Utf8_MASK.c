
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UInt32 ;
typedef int UInt16 ;
typedef int Byte ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static Byte *FUNC_3(Byte *VAR_0, const UInt16 *VAR_1, const UInt16 *VAR_2)
{
  for (;;)
  {
    UInt32 VAR_3;
    if (VAR_1 == VAR_2)
      return VAR_0;

    VAR_3 = *VAR_1++;

    if (VAR_3 < 0x80)
    {
      *VAR_0++ = (char)VAR_3;
      continue;
    }

    if (VAR_3 < FUNC_2(1))
    {
      VAR_0[0] = FUNC_1(1, VAR_3);
      VAR_0[1] = FUNC_0(0, VAR_3);
      VAR_0 += 2;
      continue;
    }

    if (VAR_3 >= 0xD800 && VAR_3 < 0xDC00 && VAR_1 != VAR_2)
    {
      UInt32 VAR_4 = *VAR_1;
      if (VAR_4 >= 0xDC00 && VAR_4 < 0xE000)
      {
        VAR_1++;
        VAR_3 = (((VAR_3 - 0xD800) << 10) | (VAR_4 - 0xDC00)) + 0x10000;
        VAR_0[0] = FUNC_1(3, VAR_3);
        VAR_0[1] = FUNC_0(2, VAR_3);
        VAR_0[2] = FUNC_0(1, VAR_3);
        VAR_0[3] = FUNC_0(0, VAR_3);
        VAR_0 += 4;
        continue;
      }
    }

    VAR_0[0] = FUNC_1(2, VAR_3);
    VAR_0[1] = FUNC_0(1, VAR_3);
    VAR_0[2] = FUNC_0(0, VAR_3);
    VAR_0 += 3;
  }
}
