
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UInt32 ;
typedef unsigned int Byte ;



__attribute__((used)) static UInt32 FUNC_0(const Byte *VAR_0, UInt32 VAR_1)
{
  Byte VAR_2 = 0;
  unsigned VAR_3 = 0;
  UInt32 VAR_4 = 0;
  for (; VAR_1 != 0; VAR_1--)
  {
    if (VAR_3 == 0)
    {
      VAR_2 = *VAR_0++;
      VAR_3 = 8;
    }
    VAR_3--;
    VAR_4 += ((VAR_2 >> VAR_3) & 1);
  }
  return VAR_4;
}
