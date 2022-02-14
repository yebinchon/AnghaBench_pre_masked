
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int y; int x; } ;
struct TYPE_6__ {int y; int x; } ;
struct TYPE_10__ {TYPE_2__ dir; TYPE_1__ pos; } ;
struct TYPE_9__ {int y; int x; } ;
struct TYPE_8__ {int y; int x; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 TYPE_5__* VAR_2 ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int VAR_3 ;
 int FUNC_6 () ;
 TYPE_4__ VAR_4 ;
 TYPE_3__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_7 () ;

void FUNC_8()
{
  FUNC_7();
  VAR_0 = 0x0;

  VAR_3 = FUNC_6();


  FUNC_0();


  if (VAR_11 != VAR_10 && !FUNC_1())
  {
    VAR_11 = VAR_10;
    VAR_8 = VAR_9;

    VAR_5.x = VAR_2[0].pos.x;
    VAR_5.y = VAR_2[0].pos.y;
    VAR_4.x = VAR_2[0].dir.x;
    VAR_4.y = VAR_2[0].dir.y;

    if (VAR_11 == VAR_1)
    {
      FUNC_2();
    }
  }

  if (VAR_11 == VAR_1)
  {
    FUNC_3();
  }

  VAR_6 = VAR_3;
  VAR_12++;

  VAR_7 += VAR_12;
  FUNC_5(VAR_7);

  FUNC_4();
}
