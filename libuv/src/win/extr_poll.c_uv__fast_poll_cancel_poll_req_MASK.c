
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ socket; } ;
typedef TYPE_3__ uv_poll_t ;
typedef int uv_loop_t ;
struct TYPE_7__ {int QuadPart; } ;
struct TYPE_10__ {int NumberOfHandles; TYPE_2__* Handles; TYPE_1__ Timeout; int Exclusive; } ;
struct TYPE_8__ {int Events; scalar_t__ Status; scalar_t__ Handle; } ;
typedef scalar_t__ HANDLE ;
typedef scalar_t__ DWORD ;
typedef TYPE_4__ AFD_POLL_INFO ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ VAR_4 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (scalar_t__,TYPE_4__*,int ,int ) ;

__attribute__((used)) static int FUNC_4(uv_loop_t* VAR_5, uv_poll_t* VAR_6) {
  AFD_POLL_INFO VAR_7;
  int VAR_8;

  VAR_7.Exclusive = VAR_3;
  VAR_7.NumberOfHandles = 1;
  VAR_7.Timeout.QuadPart = VAR_1;
  VAR_7.Handles[0].Handle = (HANDLE) VAR_6->socket;
  VAR_7.Handles[0].Status = 0;
  VAR_7.Handles[0].Events = VAR_0;

  VAR_8 = FUNC_3(VAR_6->socket,
                         &VAR_7,
                         FUNC_1(),
                         FUNC_2());

  if (VAR_8 == VAR_2) {
    DWORD VAR_9 = FUNC_0();
    if (VAR_9 != VAR_4)
      return VAR_9;
  }

  return 0;
}
