
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
struct TYPE_6__ {int x; int y; } ;
struct TYPE_10__ {int anim_speed; int move_speed; void* enabled; int movement_type; TYPE_2__ dir; TYPE_1__ pos; void* moving; void* redraw; scalar_t__ sprite; } ;
struct TYPE_9__ {int y; int x; } ;
struct TYPE_8__ {int x; int y; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 void* VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 void* VAR_18 ;
 int FUNC_1 () ;
 int VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 TYPE_5__* VAR_22 ;
 int FUNC_2 () ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_3 () ;
 TYPE_4__ VAR_25 ;
 TYPE_3__ VAR_26 ;
 int VAR_27 ;
 void* VAR_28 ;
 void* VAR_29 ;
 int FUNC_4 (int ,int,int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,int,int ) ;

int FUNC_7()
{

  VAR_3 = 0x67;
  FUNC_5(VAR_19 | VAR_4);
  VAR_17 = 0x45;
  {
    VAR_0 = 0xE4U;
    VAR_6 = 0xD2U;
  }
  VAR_20 = VAR_5 - 7;
  VAR_20 = VAR_5 + 1;

  VAR_22[0].sprite = 0;
  VAR_22[0].redraw = VAR_18;
  VAR_22[0].moving = VAR_18;
  VAR_26.x = VAR_22[0].pos.x = (VAR_15 << 3) + 8;
  VAR_26.y = VAR_22[0].pos.y = (VAR_16 << 3) + 8;
  VAR_25.x = VAR_22[0].dir.x = VAR_12;
  VAR_25.y = VAR_22[0].dir.y = VAR_13;
  VAR_27 = VAR_11;
  VAR_22[0].movement_type = VAR_7;
  VAR_22[0].enabled = VAR_18;
  VAR_22[0].move_speed = VAR_10;
  VAR_22[0].anim_speed = VAR_9;

  VAR_28 = VAR_14;
  VAR_29 = VAR_14;

  FUNC_1();
  FUNC_0();

  VAR_2;
  VAR_8;

  while (1)
  {
    FUNC_3();
  }
}
