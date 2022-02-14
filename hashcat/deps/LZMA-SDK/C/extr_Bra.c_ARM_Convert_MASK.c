
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UInt32 ;
typedef size_t SizeT ;
typedef int const Byte ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (int const*,int) ;

SizeT FUNC_2(Byte *VAR_0, SizeT VAR_1, UInt32 VAR_2, int VAR_3)
{
  Byte *VAR_4;
  const Byte *VAR_5;
  VAR_1 &= ~(size_t)3;
  VAR_2 += 4;
  VAR_4 = VAR_0;
  VAR_5 = VAR_0 + VAR_1;

  if (VAR_3)

  for (;;)
  {
    for (;;)
    {
      if (VAR_4 >= VAR_5)
        return VAR_4 - VAR_0;
      VAR_4 += 4;
      if (VAR_4[-1] == 0xEB)
        break;
    }
    {
      UInt32 VAR_6 = FUNC_0(VAR_4 - 4);
      VAR_6 <<= 2;
        VAR_6 += VAR_2 + (UInt32)(VAR_4 - VAR_0);
      VAR_6 >>= 2;
      VAR_6 &= 0x00FFFFFF;
      VAR_6 |= 0xEB000000;
      FUNC_1(VAR_4 - 4, VAR_6);
    }
  }

  for (;;)
  {
    for (;;)
    {
      if (VAR_4 >= VAR_5)
        return VAR_4 - VAR_0;
      VAR_4 += 4;
      if (VAR_4[-1] == 0xEB)
        break;
    }
    {
      UInt32 VAR_7 = FUNC_0(VAR_4 - 4);
      VAR_7 <<= 2;
        VAR_7 -= VAR_2 + (UInt32)(VAR_4 - VAR_0);
      VAR_7 >>= 2;
      VAR_7 &= 0x00FFFFFF;
      VAR_7 |= 0xEB000000;
      FUNC_1(VAR_4 - 4, VAR_7);
    }
  }
}
