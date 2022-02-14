
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uv_req_t ;
struct TYPE_8__ {scalar_t__ time; int iocp; } ;
typedef TYPE_1__ uv_loop_t ;
typedef scalar_t__ uint64_t ;
typedef size_t ULONG ;
struct TYPE_9__ {scalar_t__ lpOverlapped; } ;
typedef TYPE_2__ OVERLAPPED_ENTRY ;
typedef scalar_t__ DWORD ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 (int ,TYPE_2__*,int ,size_t*,scalar_t__,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (scalar_t__,char*) ;
 int FUNC_4 (TYPE_1__*,int *) ;
 int * FUNC_5 (scalar_t__) ;
 int FUNC_6 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_7(uv_loop_t* VAR_2, DWORD VAR_3) {
  BOOL VAR_4;
  uv_req_t* VAR_5;
  OVERLAPPED_ENTRY VAR_6[128];
  ULONG VAR_7;
  ULONG VAR_8;
  int VAR_9;
  uint64_t VAR_10;

  VAR_10 = VAR_2->time + VAR_3;

  for (VAR_9 = 0; ; VAR_9++) {
    VAR_4 = FUNC_2(VAR_2->iocp,
                                          VAR_6,
                                          FUNC_0(VAR_6),
                                          &VAR_7,
                                          VAR_3,
                                          VAR_0);

    if (VAR_4) {
      for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++) {



        if (VAR_6[VAR_8].lpOverlapped) {
          VAR_5 = FUNC_5(VAR_6[VAR_8].lpOverlapped);
          FUNC_4(VAR_2, VAR_5);
        }
      }




      FUNC_6(VAR_2);
    } else if (FUNC_1() != VAR_1) {

      FUNC_3(FUNC_1(), "GetQueuedCompletionStatusEx");
    } else if (VAR_3 > 0) {



      FUNC_6(VAR_2);
      if (VAR_10 > VAR_2->time) {
        VAR_3 = (DWORD)(VAR_10 - VAR_2->time);






        VAR_3 += VAR_9 ? (1 << (VAR_9 - 1)) : 0;
        continue;
      }
    }
    break;
  }
}
