
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t SizeT ;
typedef scalar_t__ Byte ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__*,scalar_t__*,unsigned int) ;

void FUNC_1(Byte *VAR_1, unsigned VAR_2, Byte *VAR_3, SizeT VAR_4)
{
  Byte VAR_5[VAR_0];
  unsigned VAR_6 = 0;
  FUNC_0(VAR_5, VAR_1, VAR_2);
  {
    SizeT VAR_7;
    for (VAR_7 = 0; VAR_7 < VAR_4;)
    {
      for (VAR_6 = 0; VAR_6 < VAR_2 && VAR_7 < VAR_4; VAR_7++, VAR_6++)
      {
        VAR_5[VAR_6] = VAR_3[VAR_7] = (Byte)(VAR_5[VAR_6] + VAR_3[VAR_7]);
      }
    }
  }
  if (VAR_6 == VAR_2)
    VAR_6 = 0;
  FUNC_0(VAR_1, VAR_5 + VAR_6, VAR_2 - VAR_6);
  FUNC_0(VAR_1 + VAR_2 - VAR_6, VAR_5, VAR_6);
}
