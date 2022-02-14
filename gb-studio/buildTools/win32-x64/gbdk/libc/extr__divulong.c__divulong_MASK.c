
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ bit ;


 scalar_t__ FUNC_0 (unsigned long) ;

unsigned long
FUNC_1 (unsigned long VAR_0, unsigned long VAR_1)
{
  unsigned long VAR_2 = 0L;
  unsigned char VAR_3 = 32;



    bit VAR_4;


  do
  {

    VAR_4 = FUNC_0(VAR_0);
    VAR_0 <<= 1;
    VAR_2 <<= 1;
    if (VAR_4)
      VAR_2 |= 1L;

    if (VAR_2 >= VAR_1)
    {
      VAR_2 -= VAR_1;

      VAR_0 |= 1L;
    }
  }
  while (--VAR_3);
  return VAR_0;
}
