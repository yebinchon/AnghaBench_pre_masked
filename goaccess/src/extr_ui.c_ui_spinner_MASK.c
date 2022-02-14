
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ time_t ;
struct TYPE_10__ {scalar_t__ no_progress; } ;
struct TYPE_9__ {TYPE_1__* pair; } ;
struct TYPE_8__ {scalar_t__ state; long long* processed; int mutex; int win; int spin_x; int y; TYPE_3__* (* color ) () ;int w; int x; scalar_t__ curses; int label; } ;
struct TYPE_7__ {int idx; } ;
typedef TYPE_2__ GSpinner ;
typedef TYPE_3__ GColors ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_6__ VAR_6 ;
 int FUNC_1 (int ,char*,char*,int ,int ,int ,TYPE_3__* (*) ()) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int ,int ,int ,char const) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (char*,int,char*,int ,...) ;
 int VAR_7 ;
 TYPE_3__* FUNC_8 () ;
 scalar_t__ FUNC_9 (scalar_t__*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int ) ;

__attribute__((used)) static void
FUNC_14 (void *VAR_8)
{
  GSpinner *VAR_9 = (GSpinner *) VAR_8;
  GColors *VAR_10 = ((void*)0);

  static char const VAR_11[] = "/-\\|";
  char VAR_12[VAR_3];
  int VAR_13 = 0;
  long long VAR_14 = 0, VAR_15 = 0;
  time_t VAR_16;

  if (VAR_9->curses)
    VAR_10 = (*VAR_9->color) ();

  FUNC_9 (&VAR_16);
  while (1) {
    FUNC_4 (&VAR_9->mutex);
    if (VAR_9->state == VAR_5) {
      if (!VAR_9->curses && !VAR_6.no_progress)
        FUNC_2(VAR_7, "\n");

      break;
    }

    FUNC_6 (VAR_0, "");
    if (VAR_6.no_progress) {
      FUNC_7 (VAR_12, sizeof VAR_12, VAR_1, VAR_9->label);
    } else {
      VAR_14 = (long long) (FUNC_9 (((void*)0)) - VAR_16);
      VAR_15 = VAR_14 >= 1 ? *(VAR_9->processed) / VAR_14 : 0;
      FUNC_7 (VAR_12, sizeof VAR_12, VAR_2, VAR_9->label, *(VAR_9->processed), VAR_15);
    }
    FUNC_6 (VAR_0, "POSIX");

    if (VAR_9->curses) {

      FUNC_1 (VAR_9->win, VAR_12, " %s", VAR_9->y, VAR_9->x, VAR_9->w, VAR_9->color);

      FUNC_12 (VAR_9->win, FUNC_0 (VAR_10->pair->idx));
      FUNC_3 (VAR_9->win, VAR_9->y, VAR_9->spin_x, VAR_11[VAR_13++ & 3]);
      FUNC_11 (VAR_9->win, FUNC_0 (VAR_10->pair->idx));
      FUNC_13 (VAR_9->win);
    } else if (!VAR_6.no_progress) {

      FUNC_2 (VAR_7, "%s\r", VAR_12);
    }

    FUNC_5 (&VAR_9->mutex);
    FUNC_10 (VAR_4);
  }
}
