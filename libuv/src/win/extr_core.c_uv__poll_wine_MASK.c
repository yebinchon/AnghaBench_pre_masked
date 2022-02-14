
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uv_req_t ;
struct TYPE_5__ {scalar_t__ time; int iocp; } ;
typedef TYPE_1__ uv_loop_t ;
typedef scalar_t__ uint64_t ;
typedef int ULONG_PTR ;
typedef int OVERLAPPED ;
typedef scalar_t__ DWORD ;


 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int ,scalar_t__*,int *,int **,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (scalar_t__,char*) ;
 int FUNC_3 (TYPE_1__*,int *) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_6(uv_loop_t* VAR_1, DWORD VAR_2) {
  DWORD VAR_3;
  ULONG_PTR VAR_4;
  OVERLAPPED* VAR_5;
  uv_req_t* VAR_6;
  int VAR_7;
  uint64_t VAR_8;

  VAR_8 = VAR_1->time + VAR_2;

  for (VAR_7 = 0; ; VAR_7++) {
    FUNC_1(VAR_1->iocp,
                              &VAR_3,
                              &VAR_4,
                              &VAR_5,
                              VAR_2);

    if (VAR_5) {

      VAR_6 = FUNC_4(VAR_5);
      FUNC_3(VAR_1, VAR_6);




      FUNC_5(VAR_1);
    } else if (FUNC_0() != VAR_0) {

      FUNC_2(FUNC_0(), "GetQueuedCompletionStatus");
    } else if (VAR_2 > 0) {



      FUNC_5(VAR_1);
      if (VAR_8 > VAR_1->time) {
        VAR_2 = (DWORD)(VAR_8 - VAR_1->time);






        VAR_2 += VAR_7 ? (1 << (VAR_7 - 1)) : 0;
        continue;
      }
    }
    break;
  }
}
