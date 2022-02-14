
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UInt32 ;
typedef int Byte ;


 int FUNC_0 (int const*) ;

void FUNC_1(UInt32 *VAR_0, const Byte *VAR_1)
{
  unsigned VAR_2;
  for (VAR_2 = 0; VAR_2 < 4; VAR_2++)
    VAR_0[VAR_2] = FUNC_0(VAR_1 + VAR_2 * 4);
}
