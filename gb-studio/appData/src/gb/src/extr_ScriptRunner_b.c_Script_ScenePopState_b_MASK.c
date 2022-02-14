
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {int y; int x; } ;
struct TYPE_9__ {int x; int y; } ;
struct TYPE_7__ {int y; int x; } ;
struct TYPE_6__ {int x; int y; } ;
struct TYPE_8__ {TYPE_2__ player_dir; TYPE_1__ player_pos; scalar_t__ scene_index; } ;


 void* VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 void* VAR_2 ;
 TYPE_5__ VAR_3 ;
 TYPE_4__ VAR_4 ;
 scalar_t__ VAR_5 ;
 void* VAR_6 ;
 scalar_t__ VAR_7 ;
 TYPE_3__* VAR_8 ;
 int VAR_9 ;
 void* VAR_10 ;
 int * VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;

void FUNC_2()
{
  if (VAR_9)
  {
    VAR_9--;

    VAR_7 = VAR_8[VAR_9].scene_index;
    VAR_5 = VAR_7 + 1;

    VAR_4.x = 0;
    VAR_4.x = VAR_8[VAR_9].player_pos.x << 3;
    VAR_4.y = 0;
    VAR_4.y = VAR_8[VAR_9].player_pos.y << 3;
    VAR_3.x = VAR_8[VAR_9].player_dir.x;
    VAR_3.y = VAR_8[VAR_9].player_dir.y;

    VAR_14 = VAR_1;
    VAR_6 = VAR_0;
    VAR_10 = VAR_0;
    FUNC_1(VAR_11[0]);
    FUNC_0();
    VAR_13 += 1 + VAR_12;

    return;
  }

  VAR_10 = VAR_2;
  VAR_13 += 1 + VAR_12;
}
