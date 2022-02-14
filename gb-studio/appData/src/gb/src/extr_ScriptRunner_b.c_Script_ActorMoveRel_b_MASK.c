
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ x; scalar_t__ y; } ;
struct TYPE_4__ {scalar_t__ x; scalar_t__ y; } ;
struct TYPE_5__ {TYPE_1__ pos; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_3__ VAR_7 ;
 int VAR_8 ;
 TYPE_2__* VAR_9 ;
 int VAR_10 ;
 size_t VAR_11 ;
 int* VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;

void FUNC_0()
{
  VAR_8 |= VAR_4;
  VAR_8 |= VAR_5;
  VAR_7.x = 0;
  VAR_7.x = VAR_9[VAR_11].pos.x;
  if (VAR_12[0] != 0)
  {
    if (VAR_12[1] == 1)
    {
      VAR_7.x = VAR_7.x - (VAR_12[0] << 3);

      if (VAR_7.x > VAR_9[VAR_11].pos.x)
      {
        VAR_7.x = VAR_2;
      }
      else if (VAR_7.x < VAR_2)
      {
        VAR_7.x = VAR_2;
      }
    }
    else
    {
      VAR_7.x = VAR_7.x + (VAR_12[0] << 3);

      if (VAR_7.x < VAR_9[VAR_11].pos.x)
      {
        VAR_7.x = VAR_0;
      }
    }
  }

  VAR_7.y = 0;
  VAR_7.y = VAR_9[VAR_11].pos.y;
  if (VAR_12[2] != 0)
  {
    if (VAR_12[3] == 1)
    {
      VAR_7.y = VAR_7.y - (VAR_12[2] << 3);

      if (VAR_7.y > VAR_9[VAR_11].pos.y)
      {
        VAR_7.y = VAR_3;
      }
      else if (VAR_7.y < VAR_3)
      {
        VAR_7.y = VAR_3;
      }
    }
    else
    {
      VAR_7.y = VAR_7.y + (VAR_12[2] << 3);

      if (VAR_7.y < VAR_9[VAR_11].pos.y)
      {
        VAR_7.y = VAR_1;
      }
    }
  }

  VAR_14 += 1 + VAR_13;
  VAR_10 = VAR_6;
}
