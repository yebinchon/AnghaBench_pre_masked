
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uv_req_t ;
struct TYPE_12__ {int NumberOfHandles; TYPE_1__* Handles; } ;
struct TYPE_11__ {int submitted_events_1; unsigned char mask_events_1; int submitted_events_2; unsigned char mask_events_2; scalar_t__ events; int flags; int (* poll_cb ) (TYPE_2__*,int ,unsigned char) ;TYPE_3__ afd_poll_info_2; int poll_req_2; TYPE_3__ afd_poll_info_1; int poll_req_1; } ;
typedef TYPE_2__ uv_poll_t ;
typedef int uv_loop_t ;
typedef int uv_handle_t ;
struct TYPE_10__ {int Events; } ;
typedef scalar_t__ DWORD ;
typedef TYPE_3__ AFD_POLL_INFO ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 unsigned char VAR_7 ;
 int VAR_8 ;
 unsigned char VAR_9 ;
 unsigned char VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*,int ,unsigned char) ;
 int FUNC_4 (TYPE_2__*,int ,unsigned char) ;
 int FUNC_5 (int *,TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 scalar_t__ FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (int *,int *) ;

__attribute__((used)) static void FUNC_10(uv_loop_t* VAR_12, uv_poll_t* VAR_13,
    uv_req_t* VAR_14) {
  unsigned char VAR_15;
  AFD_POLL_INFO* VAR_16;

  if (VAR_14 == &VAR_13->poll_req_1) {
    VAR_16 = &VAR_13->afd_poll_info_1;
    VAR_13->submitted_events_1 = 0;
    VAR_15 = VAR_13->mask_events_1;
  } else if (VAR_14 == &VAR_13->poll_req_2) {
    VAR_16 = &VAR_13->afd_poll_info_2;
    VAR_13->submitted_events_2 = 0;
    VAR_15 = VAR_13->mask_events_2;
  } else {
    FUNC_2(0);
    return;
  }


  if (!FUNC_1(VAR_14)) {
    DWORD VAR_17 = FUNC_0(VAR_14);
    if (VAR_17 != VAR_11 && VAR_13->events != 0) {
      VAR_13->events = 0;
      VAR_13->poll_cb(VAR_13, FUNC_8(VAR_17), 0);
    }

  } else if (VAR_16->NumberOfHandles >= 1) {
    unsigned char VAR_18 = 0;

    if ((VAR_16->Handles[0].Events & (VAR_5 |
        VAR_3 | VAR_1 | VAR_0)) != 0) {
      VAR_18 |= VAR_9;
      if ((VAR_16->Handles[0].Events & VAR_3) != 0) {
        VAR_18 |= VAR_7;
      }
    }
    if ((VAR_16->Handles[0].Events & (VAR_6 |
        VAR_2)) != 0) {
      VAR_18 |= VAR_10;
    }

    VAR_18 &= VAR_13->events & ~VAR_15;

    if (VAR_16->Handles[0].Events & VAR_4) {

      VAR_13->events = 0;
      if (FUNC_7(VAR_13))
        FUNC_6(VAR_13);
    }

    if (VAR_18 != 0) {
      VAR_13->poll_cb(VAR_13, 0, VAR_18);
    }
  }

  if ((VAR_13->events & ~(VAR_13->submitted_events_1 |
      VAR_13->submitted_events_2)) != 0) {
    FUNC_5(VAR_12, VAR_13);
  } else if ((VAR_13->flags & VAR_8) &&
             VAR_13->submitted_events_1 == 0 &&
             VAR_13->submitted_events_2 == 0) {
    FUNC_9(VAR_12, (uv_handle_t*) VAR_13);
  }
}
