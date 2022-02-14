
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ y; scalar_t__ x; } ;
struct TYPE_4__ {TYPE_1__ pos; } ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 size_t VAR_2 ;
 int* VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

void FUNC_0()
{
  if (VAR_3[0] != 0)
  {
    if (VAR_3[1])
    {
      VAR_1[VAR_2].pos.x = VAR_1[VAR_2].pos.x - (VAR_3[0] << 3);
    }
    else
    {
      VAR_1[VAR_2].pos.x = VAR_1[VAR_2].pos.x + (VAR_3[0] << 3);
    }
  }

  if (VAR_3[2] != 0)
  {
    if (VAR_3[3])
    {
      VAR_1[VAR_2].pos.y = VAR_1[VAR_2].pos.y - (VAR_3[2] << 3);
    }
    else
    {
      VAR_1[VAR_2].pos.y = VAR_1[VAR_2].pos.y + (VAR_3[2] << 3);
    }
  }

  VAR_6 += 1 + VAR_4;
  VAR_5 = VAR_0;
}
