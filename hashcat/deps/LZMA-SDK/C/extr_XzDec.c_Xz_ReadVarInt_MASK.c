
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UInt64 ;
typedef int Byte ;



unsigned FUNC_0(const Byte *VAR_0, size_t VAR_1, UInt64 *VAR_2)
{
  unsigned VAR_3, VAR_4;
  *VAR_2 = 0;
  VAR_4 = (VAR_1 > 9) ? 9 : (unsigned)VAR_1;

  for (VAR_3 = 0; VAR_3 < VAR_4;)
  {
    Byte VAR_5 = VAR_0[VAR_3];
    *VAR_2 |= (UInt64)(VAR_5 & 0x7F) << (7 * VAR_3++);
    if ((VAR_5 & 0x80) == 0)
      return (VAR_5 == 0 && VAR_3 != 1) ? 0 : VAR_3;
  }
  return 0;
}
