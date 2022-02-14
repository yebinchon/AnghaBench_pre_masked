
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int UBYTE ;
struct TYPE_2__ {int bank; int offset; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int* VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;

void FUNC_0()
{
  UBYTE VAR_6, VAR_7;

  VAR_6 = VAR_3[0];

  VAR_7 = 0;
  while (!(VAR_6 & 1) && VAR_6 != 0)
  {
    VAR_7 += 1;
    VAR_6 = VAR_6 >> 1;
  }

  VAR_1[VAR_7].bank = VAR_3[1];
  VAR_1[VAR_7].offset = (VAR_3[2] * 256) + VAR_3[3];

  VAR_2 = VAR_0;
  VAR_5 += 1 + VAR_4;
}
