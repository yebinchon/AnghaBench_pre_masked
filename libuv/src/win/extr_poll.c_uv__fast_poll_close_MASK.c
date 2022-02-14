
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ submitted_events_1; scalar_t__ submitted_events_2; scalar_t__ events; } ;
typedef TYPE_1__ uv_poll_t ;
typedef int uv_loop_t ;
typedef int uv_handle_t ;


 int FUNC_0 (int *,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static int FUNC_3(uv_loop_t* VAR_0, uv_poll_t* VAR_1) {
  VAR_1->events = 0;
  FUNC_1(VAR_1);

  if (VAR_1->submitted_events_1 == 0 &&
      VAR_1->submitted_events_2 == 0) {
    FUNC_2(VAR_0, (uv_handle_t*) VAR_1);
    return 0;
  } else {


    return FUNC_0(VAR_0, VAR_1);
  }
}
