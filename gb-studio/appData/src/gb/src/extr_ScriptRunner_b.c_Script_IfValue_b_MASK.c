
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t UWORD ;
typedef int UBYTE ;


 int VAR_0 ;






 int VAR_1 ;
 int* VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int* VAR_7 ;

void FUNC_0()
{
  UBYTE VAR_8, VAR_9;
  UWORD VAR_10 = (VAR_2[0] * 256) + VAR_2[1];
  VAR_8 = VAR_7[VAR_10];

  switch (VAR_2[2])
  {
  case 133:
    VAR_9 = VAR_8 == VAR_2[3];
    break;
  case 130:
    VAR_9 = VAR_8 < VAR_2[3];
    break;
  case 129:
    VAR_9 = VAR_8 <= VAR_2[3];
    break;
  case 132:
    VAR_9 = VAR_8 > VAR_2[3];
    break;
  case 131:
    VAR_9 = VAR_8 >= VAR_2[3];
    break;
  case 128:
    VAR_9 = VAR_8 != VAR_2[3];
    break;
  default:
    VAR_9 = VAR_0;
  }

  if (VAR_9)
  {
    VAR_5 = VAR_6 + (VAR_2[4] * 256) + VAR_2[5];
  }
  else
  {
    VAR_5 += 1 + VAR_3;
  }
  VAR_4 = VAR_1;
}
