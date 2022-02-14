
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t UBYTE ;
struct TYPE_4__ {scalar_t__ y; scalar_t__ x; } ;
struct TYPE_6__ {void* moving; TYPE_1__ pos; } ;
struct TYPE_5__ {int events_ptr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 void* VAR_1 ;
 size_t FUNC_2 (scalar_t__,scalar_t__) ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 TYPE_3__* VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 TYPE_2__* VAR_8 ;

void FUNC_5()
{
  UBYTE VAR_9, VAR_10;

  if (VAR_3 && VAR_7 == 0 && (FUNC_0(0)))
  {
    VAR_3 = VAR_1;


    VAR_10 = VAR_2[0].pos.y == VAR_0;

    VAR_9 =
        FUNC_2(FUNC_1(VAR_2[0].pos.x),
                         VAR_10 + FUNC_1(VAR_2[0].pos.y));

    if (VAR_9 != VAR_5)
    {
      VAR_2[0].moving = VAR_1;
      VAR_4 = VAR_4 & 240;
      VAR_6 = 0;
      FUNC_4(&VAR_8[VAR_9].events_ptr);
      FUNC_3();
    }
  }
}
