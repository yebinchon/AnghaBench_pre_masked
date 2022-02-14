
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ data; } ;
typedef TYPE_1__ uv_timer_t ;
typedef int uv_handle_t ;
struct TYPE_5__ {int events; int poll_handle; int delayed_events; } ;
typedef TYPE_2__ connection_context_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int ) ;

__attribute__((used)) static void FUNC_3(uv_timer_t* VAR_1) {
  connection_context_t* VAR_2 = (connection_context_t*) VAR_1->data;
  int VAR_3;


  FUNC_0(0 == FUNC_1((uv_handle_t*) VAR_1));


  FUNC_0(VAR_2->delayed_events != 0);
  VAR_2->events |= VAR_2->delayed_events;
  VAR_2->delayed_events = 0;

  VAR_3 = FUNC_2(&VAR_2->poll_handle,
                    VAR_2->events,
                    VAR_0);
  FUNC_0(VAR_3 == 0);
}
