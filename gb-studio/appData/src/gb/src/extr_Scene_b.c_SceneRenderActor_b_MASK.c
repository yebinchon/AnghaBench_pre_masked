
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t UBYTE ;
struct TYPE_3__ {scalar_t__ y; scalar_t__ x; } ;
struct TYPE_4__ {size_t flip; scalar_t__ sprite_type; size_t frame_offset; scalar_t__ frame; scalar_t__ sprite; TYPE_1__ dir; } ;


 size_t VAR_0 ;
 void* VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;
 size_t FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 TYPE_2__* VAR_6 ;
 int FUNC_3 (size_t,int) ;
 int FUNC_4 (size_t,size_t,size_t) ;

void FUNC_5(UBYTE VAR_7)
{
  UBYTE VAR_8, VAR_9, VAR_10, VAR_11;

  VAR_8 = FUNC_1(VAR_7) + VAR_0;
  VAR_11 = 0;

  VAR_9 = VAR_6[VAR_7].flip;

  if (VAR_6[VAR_7].sprite_type != VAR_3)
  {
    VAR_9 = VAR_1;


    if (FUNC_0(VAR_6[VAR_7].dir.y))
    {
      VAR_11 = 1 + (VAR_6[VAR_7].sprite_type == VAR_2);
    }
    else if (VAR_6[VAR_7].dir.x != 0)
    {
      VAR_11 = 2 + FUNC_1(VAR_6[VAR_7].sprite_type == VAR_2);


      if (FUNC_0(VAR_6[VAR_7].dir.x))
      {
        VAR_9 = VAR_5;
      }
    }
    else
    {
      VAR_11 = 0;
    }

    VAR_6[VAR_7].flip = VAR_1;
    VAR_6[VAR_7].flip = VAR_9;
  }

  VAR_10 = FUNC_2(VAR_6[VAR_7].sprite + VAR_6[VAR_7].frame + VAR_11);

  if (VAR_9)
  {

    FUNC_3(VAR_8, VAR_4);
    FUNC_4(VAR_8, VAR_10 + 2, VAR_10);
  }
  else
  {

    FUNC_3(VAR_8, 0x0);
    FUNC_4(VAR_8, VAR_10, VAR_10 + 2);
  }

  VAR_6[VAR_7].frame_offset = 0;
  VAR_6[VAR_7].frame_offset = VAR_11;
}
