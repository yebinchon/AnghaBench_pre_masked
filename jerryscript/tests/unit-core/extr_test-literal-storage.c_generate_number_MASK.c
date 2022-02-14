
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef double ecma_number_t ;


 int FUNC_0 () ;

__attribute__((used)) static ecma_number_t
FUNC_1 (void)
{
  ecma_number_t VAR_0 = ((ecma_number_t) FUNC_0 () / 32767.0);
  if (FUNC_0 () % 2)
  {
    VAR_0 = -VAR_0;
  }
  int VAR_1 = FUNC_0 () % 30;
  while (VAR_1-- > 0)
  {
    VAR_0 *= 10;
  }
  return VAR_0;
}
