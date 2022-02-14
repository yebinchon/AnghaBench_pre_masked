
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;


 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(uint8_t *VAR_0, size_t VAR_1, size_t VAR_2)
{
  while (VAR_2)
  {
    VAR_0[VAR_2 - 1] = VAR_1 & 0xff;
    VAR_1 >>= 8;
    VAR_2--;
  }

  FUNC_0(VAR_1 == 0);
}
