
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ no_parsing_spinner; } ;
struct TYPE_3__ {int curses; int mutex; int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;

void
FUNC_3 (void)
{
  if (VAR_2.no_parsing_spinner)
    return;

  FUNC_0 (&VAR_3->mutex);
  VAR_3->state = VAR_1;
  FUNC_1 (&VAR_3->mutex);
  if (!VAR_3->curses) {

    FUNC_2(VAR_0);
  }
}
