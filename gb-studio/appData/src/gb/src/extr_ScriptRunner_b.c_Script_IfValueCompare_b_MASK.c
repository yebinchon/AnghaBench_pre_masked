
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UBYTE ;


 int VAR_0 ;






 int VAR_1 ;
 int* VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 scalar_t__ VAR_8 ;
 int* VAR_9 ;

void FUNC_0()
{
  UBYTE VAR_10;
  UBYTE VAR_11 = VAR_9[VAR_6];
  UBYTE VAR_12 = VAR_9[VAR_7];

  switch (VAR_2[0])
  {
  case 133:
    VAR_10 = VAR_11 == VAR_12;
    break;
  case 130:
    VAR_10 = VAR_11 < VAR_12;
    break;
  case 129:
    VAR_10 = VAR_11 <= VAR_12;
    break;
  case 132:
    VAR_10 = VAR_11 > VAR_12;
    break;
  case 131:
    VAR_10 = VAR_11 >= VAR_12;
    break;
  case 128:
    VAR_10 = VAR_11 != VAR_12;
    break;
  default:
    VAR_10 = VAR_0;
  }

  if (VAR_10)
  {
    VAR_5 = VAR_8 + (VAR_2[1] * 256) + VAR_2[2];
  }
  else
  {
    VAR_5 += 1 + VAR_3;
  }
  VAR_4 = VAR_1;
}
