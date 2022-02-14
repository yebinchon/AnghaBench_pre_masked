
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int UBYTE ;
struct TYPE_2__ {scalar_t__ bank; } ;


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
  for (VAR_7 = 0; VAR_7 != 8; ++VAR_7)
  {
    if (VAR_6 & 1)
    {
      VAR_1[VAR_7].bank = 0;
    }
    VAR_6 = VAR_6 >> 1;
  }

  VAR_2 = VAR_0;
  VAR_5 += 1 + VAR_4;
}
