
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int UBYTE ;
struct TYPE_8__ {scalar_t__ bank; } ;
struct TYPE_7__ {int y; int x; } ;
struct TYPE_6__ {int y; int x; } ;
struct TYPE_9__ {scalar_t__ movement_type; void* moving; TYPE_3__ events_ptr; TYPE_2__ dir; TYPE_1__ pos; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ) ;
 void* VAR_1 ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_4 (int ,int,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 () ;
 TYPE_4__* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 TYPE_3__* VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 scalar_t__ VAR_22 ;
 int * VAR_23 ;

__attribute__((used)) static void FUNC_9()
{
  UBYTE VAR_24, VAR_25, VAR_26, VAR_27;
  UBYTE VAR_28;


  if (!VAR_19 || !VAR_18)
  {


    if (VAR_19)
    {
      VAR_18 = (VAR_16 & 240) == 0;
    }
    return;
  }


  FUNC_8();


  if (!FUNC_0(0))
  {
    return;
  }


  if (VAR_22 != 0 || VAR_13 != 0 || VAR_14)
  {
    VAR_8[0].moving = VAR_1;
    return;
  }

  if (VAR_16 != 0 && VAR_16 != VAR_17)
  {
    VAR_26 = 0;
    VAR_27 = VAR_16;
    for (VAR_26 = 0; VAR_26 != 8; ++VAR_26)
    {
      if (VAR_27 & 1)
      {
        if (VAR_15[VAR_26].bank)
        {
          VAR_8[0].moving = VAR_1;
          VAR_17 = VAR_16;
          FUNC_7(&VAR_15[VAR_26]);
          return;
        }
      }
      VAR_27 = VAR_27 >> 1;
    }
  }

  if (FUNC_3(VAR_2))
  {
    VAR_17 = VAR_16;
    VAR_8[0].moving = VAR_1;
    VAR_24 = FUNC_1(VAR_8[0].pos.x) + VAR_8[0].dir.x;
    VAR_25 = FUNC_1(VAR_8[0].pos.y) + VAR_8[0].dir.y;
    VAR_28 = FUNC_4(0, VAR_24, VAR_25);
    if (VAR_28 != VAR_20)
    {
      VAR_8[0].moving = VAR_1;
      if (VAR_8[VAR_28].movement_type != VAR_7 && VAR_8[VAR_28].movement_type != VAR_0)
      {
        VAR_8[VAR_28].dir.x = -VAR_8[0].dir.x;
        VAR_8[VAR_28].dir.y = -VAR_8[0].dir.y;
      }
      VAR_8[VAR_28].moving = VAR_1;
      FUNC_5(VAR_28);
      VAR_21 = VAR_28;
      FUNC_7(&VAR_8[VAR_28].events_ptr);
    }
  }
  else if ((VAR_8[0].moving || VAR_16 != VAR_17))
  {
    VAR_17 = VAR_16;

    if (FUNC_2(VAR_4))
    {
      VAR_23 = &VAR_10;
    }
    else if (FUNC_2(VAR_5))
    {
      VAR_23 = &VAR_11;
    }
    else if (FUNC_2(VAR_6))
    {
      VAR_23 = &VAR_12;
    }
    else if (FUNC_2(VAR_3))
    {
      VAR_23 = &VAR_9;
    }
    else
    {
      VAR_8[0].moving = VAR_1;
      return;
    }

    FUNC_6(0);
  }
}
