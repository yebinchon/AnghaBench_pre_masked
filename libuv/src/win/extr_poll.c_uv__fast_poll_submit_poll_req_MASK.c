
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_15__ {int overlapped; } ;
struct TYPE_16__ {TYPE_3__ io; } ;
struct TYPE_17__ {TYPE_4__ u; } ;
typedef TYPE_5__ uv_req_t ;
struct TYPE_13__ {int QuadPart; } ;
struct TYPE_19__ {int NumberOfHandles; TYPE_2__* Handles; TYPE_1__ Timeout; int Exclusive; } ;
struct TYPE_18__ {scalar_t__ submitted_events_1; int events; int mask_events_1; int mask_events_2; scalar_t__ submitted_events_2; scalar_t__ peer_socket; scalar_t__ socket; TYPE_7__ afd_poll_info_2; TYPE_5__ poll_req_2; TYPE_7__ afd_poll_info_1; TYPE_5__ poll_req_1; } ;
typedef TYPE_6__ uv_poll_t ;
typedef int uv_loop_t ;
struct TYPE_14__ {int Events; scalar_t__ Status; scalar_t__ Handle; } ;
typedef int SOCKET ;
typedef scalar_t__ HANDLE ;
typedef TYPE_7__ AFD_POLL_INFO ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_5__*,scalar_t__) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ VAR_11 ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int *,TYPE_5__*) ;
 int FUNC_4 (int ,TYPE_7__*,TYPE_7__*,int *) ;

__attribute__((used)) static void FUNC_5(uv_loop_t* VAR_12, uv_poll_t* VAR_13) {
  uv_req_t* VAR_14;
  AFD_POLL_INFO* VAR_15;
  int VAR_16;


  if (VAR_13->submitted_events_1 == 0) {
    VAR_14 = &VAR_13->poll_req_1;
    VAR_15 = &VAR_13->afd_poll_info_1;
    VAR_13->submitted_events_1 = VAR_13->events;
    VAR_13->mask_events_1 = 0;
    VAR_13->mask_events_2 = VAR_13->events;
  } else if (VAR_13->submitted_events_2 == 0) {
    VAR_14 = &VAR_13->poll_req_2;
    VAR_15 = &VAR_13->afd_poll_info_2;
    VAR_13->submitted_events_2 = VAR_13->events;
    VAR_13->mask_events_1 = VAR_13->events;
    VAR_13->mask_events_2 = 0;
  } else {





    return;
  }



  VAR_15->Exclusive = VAR_7;
  VAR_15->NumberOfHandles = 1;
  VAR_15->Timeout.QuadPart = VAR_6;
  VAR_15->Handles[0].Handle = (HANDLE) VAR_13->socket;
  VAR_15->Handles[0].Status = 0;
  VAR_15->Handles[0].Events = 0;

  if (VAR_13->events & VAR_9) {
    VAR_15->Handles[0].Events |= VAR_4 |
        VAR_3 | VAR_1 | VAR_0;
  } else {
    if (VAR_13->events & VAR_8) {
      VAR_15->Handles[0].Events |= VAR_3;
    }
  }
  if (VAR_13->events & VAR_10) {
    VAR_15->Handles[0].Events |= VAR_5 | VAR_2;
  }

  FUNC_2(&VAR_14->u.io.overlapped, 0, sizeof VAR_14->u.io.overlapped);

  VAR_16 = FUNC_4((SOCKET) VAR_13->peer_socket,
                         VAR_15,
                         VAR_15,
                         &VAR_14->u.io.overlapped);
  if (VAR_16 != 0 && FUNC_1() != VAR_11) {

    FUNC_0(VAR_14, FUNC_1());
    FUNC_3(VAR_12, VAR_14);
  }
}
