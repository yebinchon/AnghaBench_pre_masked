
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef size_t UWORD ;
typedef size_t UBYTE ;
struct TYPE_12__ {int bank; int offset; } ;
struct TYPE_11__ {int x; int y; } ;
struct TYPE_15__ {void* y; void* x; } ;
struct TYPE_18__ {int sprite; int sprite_type; int frames_len; int animate; int frame; int move_speed; int anim_speed; int movement_type; TYPE_2__ events_ptr; TYPE_1__ dir; TYPE_5__ pos; void* flip; scalar_t__ frame_offset; void* moving; int enabled; } ;
struct TYPE_14__ {int bank; int offset; } ;
struct TYPE_13__ {int x; int y; } ;
struct TYPE_17__ {int w; int h; TYPE_4__ events_ptr; TYPE_3__ pos; } ;
struct TYPE_16__ {size_t bank; size_t offset; } ;
typedef TYPE_6__ BANK_PTR ;


 int VAR_0 ;
 void* VAR_1 ;
 size_t FUNC_0 (int) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (int ,TYPE_6__*,int *) ;
 int FUNC_3 (size_t,size_t) ;
 int FUNC_4 (size_t,size_t) ;
 int FUNC_5 (size_t,size_t,size_t,size_t) ;
 int VAR_2 ;
 TYPE_9__* VAR_3 ;
 scalar_t__* VAR_4 ;
 TYPE_6__ VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int * VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 int * VAR_14 ;
 TYPE_7__* VAR_15 ;

void FUNC_6()
{
  BANK_PTR VAR_16;
  UWORD VAR_17, VAR_18;
  UBYTE VAR_19, VAR_20, VAR_21, VAR_22;
  UBYTE VAR_23;
  UWORD VAR_24;

  FUNC_2(VAR_0, &VAR_5, &VAR_9[VAR_10]);
  VAR_24 = ((UWORD)VAR_4[VAR_5.bank]) + VAR_5.offset;
  VAR_8 = FUNC_4(VAR_5.bank, VAR_24);
  VAR_19 = FUNC_3(VAR_5.bank, VAR_24 + 2);


  VAR_20 = 24;
  VAR_24 = VAR_24 + 3;
  for (VAR_21 = 0; VAR_21 != VAR_19; VAR_21++)
  {

    VAR_18 = FUNC_3(VAR_5.bank, VAR_24 + VAR_21);

    FUNC_2(VAR_0, &VAR_16, &VAR_14[VAR_18]);
    VAR_17 = ((UWORD)VAR_4[VAR_16.bank]) + VAR_16.offset;
    VAR_23 = FUNC_0(FUNC_3(VAR_16.bank, VAR_17));

    FUNC_5(VAR_16.bank, VAR_20, VAR_23, VAR_17 + 1);
    VAR_20 += VAR_23;
  }
  VAR_24 = VAR_24 + VAR_19;


  VAR_12 = FUNC_3(VAR_5.bank, VAR_24) + 1;
  VAR_24 = VAR_24 + 1;

  for (VAR_21 = 1; VAR_21 != VAR_12; VAR_21++)
  {

    VAR_3[VAR_21].sprite = FUNC_3(VAR_5.bank, VAR_24);

    VAR_3[VAR_21].enabled = VAR_2;
    VAR_3[VAR_21].moving = VAR_1;
    VAR_3[VAR_21].sprite_type = VAR_1;
    VAR_3[VAR_21].sprite_type = FUNC_3(VAR_5.bank, VAR_24 + 1);
    VAR_3[VAR_21].frames_len = 0;
    VAR_3[VAR_21].frames_len = FUNC_3(VAR_5.bank, VAR_24 + 2);
    VAR_3[VAR_21].animate = VAR_1;
    VAR_3[VAR_21].frame_offset = 0;
    VAR_3[VAR_21].flip = VAR_1;
    VAR_3[VAR_21].animate = FUNC_3(VAR_5.bank, VAR_24 + 3) & 1;
    VAR_3[VAR_21].frame = 0;
    VAR_3[VAR_21].frame = FUNC_3(VAR_5.bank, VAR_24 + 3) >> 1;
    VAR_3[VAR_21].move_speed = 0;
    VAR_3[VAR_21].anim_speed = 0;

    VAR_3[VAR_21].pos.x = FUNC_1(FUNC_3(VAR_5.bank, VAR_24 + 4)) + 8;
    VAR_3[VAR_21].pos.y = FUNC_1(FUNC_3(VAR_5.bank, VAR_24 + 5)) + 8;
    VAR_22 = FUNC_3(VAR_5.bank, VAR_24 + 6);
    VAR_3[VAR_21].dir.x = VAR_22 == 2 ? -1 : VAR_22 == 4 ? 1 : 0;
    VAR_3[VAR_21].dir.y = VAR_22 == 8 ? -1 : VAR_22 == 1 ? 1 : 0;

    VAR_3[VAR_21].movement_type = 0;
    VAR_3[VAR_21].movement_type = FUNC_3(VAR_5.bank, VAR_24 + 7);

    VAR_3[VAR_21].move_speed = FUNC_3(VAR_5.bank, VAR_24 + 8);
    VAR_3[VAR_21].anim_speed = FUNC_3(VAR_5.bank, VAR_24 + 9);


    VAR_3[VAR_21].events_ptr.bank = FUNC_3(VAR_5.bank, VAR_24 + 10);
    VAR_3[VAR_21].events_ptr.offset = (FUNC_3(VAR_5.bank, VAR_24 + 11) * 256) + FUNC_3(VAR_5.bank, VAR_24 + 12);


    VAR_24 = VAR_24 + 13u;
  }


  VAR_13 = FUNC_3(VAR_5.bank, VAR_24);
  VAR_24 = VAR_24 + 1;

  for (VAR_21 = 0; VAR_21 != VAR_13; VAR_21++)
  {
    VAR_15[VAR_21].pos.x = FUNC_3(VAR_5.bank, (UWORD)VAR_24);
    VAR_15[VAR_21].pos.y = FUNC_3(VAR_5.bank, (UWORD)VAR_24 + 1);
    VAR_15[VAR_21].w = 0;
    VAR_15[VAR_21].w = FUNC_3(VAR_5.bank, (UWORD)VAR_24 + 2);
    VAR_15[VAR_21].h = 0;
    VAR_15[VAR_21].h = FUNC_3(VAR_5.bank, (UWORD)VAR_24 + 3);

    VAR_15[VAR_21].events_ptr.bank = FUNC_3(VAR_5.bank, (UWORD)VAR_24 + 5);
    VAR_15[VAR_21].events_ptr.offset = (FUNC_3(VAR_5.bank, (UWORD)VAR_24 + 6) * 256) + FUNC_3(VAR_5.bank, (UWORD)VAR_24 + 7);
    VAR_24 = VAR_24 + 8u;
  }


  VAR_7 = FUNC_3(VAR_5.bank, VAR_24);
  VAR_11 = VAR_24 + 1;
  VAR_6 = VAR_5.bank;
}
