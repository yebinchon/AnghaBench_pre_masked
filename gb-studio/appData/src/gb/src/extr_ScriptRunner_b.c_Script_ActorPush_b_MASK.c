
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void* UBYTE ;
struct TYPE_8__ {void* y; void* x; } ;
struct TYPE_6__ {int x; int y; } ;
struct TYPE_5__ {void* y; void* x; } ;
struct TYPE_7__ {TYPE_2__ dir; TYPE_1__ pos; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_4__ VAR_5 ;
 int VAR_6 ;
 TYPE_3__* VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 scalar_t__* VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;

void FUNC_0()
{
  UBYTE VAR_13, VAR_14;

  if (VAR_10[0])
  {
    if (VAR_7[0].dir.x < 0)
    {
      VAR_13 = 0;
    }
    else if (VAR_7[0].dir.x > 0)
    {
      VAR_13 = VAR_0;
    }
    else
    {
      VAR_13 = VAR_7[VAR_9].pos.x;
    }
    if (VAR_7[0].dir.y < 0)
    {
      VAR_14 = 0;
    }
    else if (VAR_7[0].dir.y > 0)
    {
      VAR_14 = VAR_1;
    }
    else
    {
      VAR_14 = VAR_7[VAR_9].pos.y;
    }
  }
  else
  {
    VAR_13 = VAR_7[VAR_9].pos.x + (VAR_7[0].dir.x * 16);
    VAR_14 = VAR_7[VAR_9].pos.y + (VAR_7[0].dir.y * 16);
  }

  VAR_6 |= VAR_2;
  VAR_6 &= ~VAR_3;
  VAR_5.x = 0;
  VAR_5.x = VAR_13;
  VAR_5.y = 0;
  VAR_5.y = VAR_14;



  VAR_12 += 1 + VAR_11;
  VAR_8 = VAR_4;
}
