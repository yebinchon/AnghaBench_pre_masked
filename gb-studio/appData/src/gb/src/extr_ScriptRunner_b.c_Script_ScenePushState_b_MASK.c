
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int x; int y; } ;
struct TYPE_8__ {int y; int x; } ;
struct TYPE_12__ {TYPE_4__ pos; TYPE_2__ dir; } ;
struct TYPE_9__ {int x; int y; } ;
struct TYPE_7__ {int y; int x; } ;
struct TYPE_11__ {TYPE_3__ player_pos; TYPE_1__ player_dir; int scene_index; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 TYPE_6__* VAR_2 ;
 int VAR_3 ;
 TYPE_5__* VAR_4 ;
 size_t VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

void FUNC_0()
{
  if (VAR_5 < VAR_0)
  {
    VAR_4[VAR_5].scene_index = VAR_3;
    VAR_4[VAR_5].player_dir.x = VAR_2[0].dir.x;
    VAR_4[VAR_5].player_dir.y = VAR_2[0].dir.y;
    VAR_4[VAR_5].player_pos.x = 0;
    VAR_4[VAR_5].player_pos.x = VAR_2[0].pos.x >> 3;
    VAR_4[VAR_5].player_pos.y = 0;
    VAR_4[VAR_5].player_pos.y = VAR_2[0].pos.y >> 3;
    VAR_5++;
  }

  VAR_8 += 1 + VAR_6;
  VAR_7 = VAR_1;
}
