
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UBYTE ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__* VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int* VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;

void FUNC_0()
{
  UBYTE VAR_9;

  VAR_1;
  VAR_2 = (UBYTE *)VAR_3;
  VAR_9 = 0;
  VAR_9 = *VAR_2 == VAR_4;
  VAR_0;

  if (VAR_9)
  {
    VAR_7 = VAR_8 + (VAR_5[0] * 256) + VAR_5[1];
  }
  else
  {
    VAR_7 += 1 + VAR_6;
  }
}
