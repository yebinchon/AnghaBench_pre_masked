
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UInt32 ;
typedef int UInt16 ;


 int FUNC_0 (int) ;

__attribute__((used)) static size_t FUNC_1(const UInt16 *VAR_0, const UInt16 *VAR_1)
{
  size_t VAR_2 = 0;
  for (;;)
  {
    UInt32 VAR_3;
    if (VAR_0 == VAR_1)
      return VAR_2;

    VAR_2++;
    VAR_3 = *VAR_0++;

    if (VAR_3 < 0x80)
      continue;

    if (VAR_3 < FUNC_0(1))
    {
      VAR_2++;
      continue;
    }

    if (VAR_3 >= 0xD800 && VAR_3 < 0xDC00 && VAR_0 != VAR_1)
    {
      UInt32 VAR_4 = *VAR_0;
      if (VAR_4 >= 0xDC00 && VAR_4 < 0xE000)
      {
        VAR_0++;
        VAR_2 += 3;
        continue;
      }
    }

    VAR_2 += 2;
  }
}
