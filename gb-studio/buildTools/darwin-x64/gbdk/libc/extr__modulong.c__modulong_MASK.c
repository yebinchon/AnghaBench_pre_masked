
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned long) ;

unsigned long
FUNC_1 (unsigned long VAR_0, unsigned long VAR_1)
{
  unsigned char VAR_2 = 0;

  while (!FUNC_0(VAR_1))
  {
     VAR_1 <<= 1;
     if (VAR_1 > VAR_0)
     {
        VAR_1 >>=1;
        break;
     }
     VAR_2++;
  }
  do
  {
    if (VAR_0 >= VAR_1)
      VAR_0 -= VAR_1;
    VAR_1 >>= 1;
  }
  while (VAR_2--);

  return VAR_0;
}
