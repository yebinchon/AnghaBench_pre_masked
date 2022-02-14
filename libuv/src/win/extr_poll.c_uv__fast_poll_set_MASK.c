
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ type; int flags; int events; int submitted_events_1; int submitted_events_2; int loop; } ;
typedef TYPE_1__ uv_poll_t ;
typedef int uv_loop_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_4(uv_loop_t* VAR_5, uv_poll_t* VAR_6, int VAR_7) {
  FUNC_0(VAR_6->type == VAR_2);
  FUNC_0(!(VAR_6->flags & VAR_1));
  FUNC_0((VAR_7 & ~(VAR_3 | VAR_4 | VAR_0)) == 0);

  VAR_6->events = VAR_7;

  if (VAR_6->events != 0) {
    FUNC_2(VAR_6);
  } else {
    FUNC_3(VAR_6);
  }

  if ((VAR_6->events & ~(VAR_6->submitted_events_1 |
      VAR_6->submitted_events_2)) != 0) {
    FUNC_1(VAR_6->loop, VAR_6);
  }

  return 0;
}
