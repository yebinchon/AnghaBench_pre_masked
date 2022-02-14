
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int no_progress; scalar_t__ load_from_disk; } ;
struct TYPE_5__ {char* label; int mutex; scalar_t__ curses; int state; } ;
typedef TYPE_1__ GSpinner ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 TYPE_4__ VAR_1 ;
 scalar_t__ FUNC_1 (int *,int *) ;
 TYPE_1__* FUNC_2 (int,int) ;

GSpinner *
FUNC_3 (void)
{
  GSpinner *VAR_2;

  VAR_2 = FUNC_2 (1, sizeof (GSpinner));
  VAR_2->label = "Parsing...";
  VAR_2->state = VAR_0;
  VAR_2->curses = 0;
  if (VAR_1.load_from_disk)
    VAR_1.no_progress = 1;

  if (FUNC_1 (&(VAR_2->mutex), ((void*)0)))
    FUNC_0 ("Failed init thread mutex");

  return VAR_2;
}
