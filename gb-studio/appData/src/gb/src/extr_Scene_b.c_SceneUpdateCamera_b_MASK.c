
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* UBYTE ;
struct TYPE_4__ {int y; int x; } ;
struct TYPE_6__ {TYPE_1__ pos; } ;
struct TYPE_5__ {scalar_t__ x; scalar_t__ y; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ,void*,void*) ;
 void* FUNC_1 (int ) ;
 void* VAR_2 ;
 void* VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_3__* VAR_6 ;
 TYPE_2__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;

void FUNC_2()
{
  UBYTE VAR_14, VAR_15;


  if ((VAR_9 & VAR_0) == VAR_0)
  {

    VAR_14 = FUNC_0(VAR_6[0].pos.x, VAR_3, FUNC_1(VAR_12) - VAR_3);
    VAR_7.x = VAR_14 - VAR_3;
    VAR_15 = FUNC_0(VAR_6[0].pos.y, VAR_2, FUNC_1(VAR_11) - VAR_2);
    VAR_7.y = VAR_15 - VAR_2;
  }

  VAR_8 = VAR_4 != VAR_7.x || VAR_5 != VAR_7.y;

  if (VAR_8)
  {

    if ((VAR_9 & VAR_1) == VAR_1)
    {
      if ((VAR_13 & VAR_10) == 0)
      {
        if (VAR_4 > VAR_7.x)
        {
          VAR_4--;
        }
        else if (VAR_4 < VAR_7.x)
        {
          VAR_4++;
        }
        if (VAR_5 > VAR_7.y)
        {
          VAR_5--;
        }
        else if (VAR_5 < VAR_7.y)
        {
          VAR_5++;
        }
      }
    }

    else
    {
      VAR_4 = VAR_7.x;
      VAR_5 = VAR_7.y;
    }
  }
}
