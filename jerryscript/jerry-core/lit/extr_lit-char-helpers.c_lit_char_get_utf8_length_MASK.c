
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ecma_char_t ;


 int VAR_0 ;
 int VAR_1 ;

size_t
FUNC_0 (ecma_char_t VAR_2)
{
  if (!(VAR_2 & ~VAR_0))
  {

    return 1;
  }

  if (!(VAR_2 & ~VAR_1))
  {

    return 2;
  }


  return 3;
}
