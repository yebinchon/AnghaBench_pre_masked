
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t UWORD ;
typedef int UBYTE ;
struct TYPE_5__ {scalar_t__ x; scalar_t__ y; } ;
struct TYPE_4__ {int x; int y; } ;
struct TYPE_6__ {TYPE_2__ dir; TYPE_1__ pos; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int* VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 void* VAR_6 ;
 TYPE_3__* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 void* VAR_11 ;
 int VAR_12 ;
 int* VAR_13 ;

void FUNC_0()
{
  UWORD VAR_14;

  VAR_1;

  VAR_3 = (UBYTE *)VAR_4;
  VAR_3[0] = VAR_6;


  VAR_3[1] = VAR_9;


  VAR_3[2] = VAR_7[0].pos.x;
  VAR_3[3] = VAR_7[0].pos.y;
  if (VAR_7[0].dir.x < 0)
  {
    VAR_3[4] = 2;
  }
  else if (VAR_7[0].dir.x > 0)
  {
    VAR_3[4] = 4;
  }
  else if (VAR_7[0].dir.y < 0)
  {
    VAR_3[4] = 8;
  }
  else
  {
    VAR_3[4] = 1;
  }


  VAR_3[5] = VAR_8;


  VAR_3 = (UBYTE *)VAR_5;
  for (VAR_14 = 0; VAR_14 < VAR_2; VAR_14++)
  {
    VAR_3[VAR_14] = VAR_13[VAR_14];
  }

  VAR_0;

  VAR_12 += 1 + VAR_10;
  VAR_11 = VAR_6;
}
