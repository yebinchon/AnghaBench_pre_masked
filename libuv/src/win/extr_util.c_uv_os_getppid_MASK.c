
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uv_pid_t ;
struct TYPE_4__ {int dwSize; scalar_t__ th32ProcessID; int th32ParentProcessID; } ;
typedef TYPE_1__ PROCESSENTRY32 ;
typedef int HANDLE ;
typedef scalar_t__ DWORD ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 (int ,TYPE_1__*) ;
 scalar_t__ FUNC_4 (int ,TYPE_1__*) ;
 int VAR_0 ;

uv_pid_t FUNC_5(void) {
  int VAR_1 = -1;
  HANDLE VAR_2;
  PROCESSENTRY32 VAR_3;
  DWORD VAR_4 = FUNC_2();

  VAR_3.dwSize = sizeof(PROCESSENTRY32);
  VAR_2 = FUNC_1(VAR_0, 0);

  if (FUNC_3(VAR_2, &VAR_3)) {
    do {
      if (VAR_3.th32ProcessID == VAR_4) {
        VAR_1 = VAR_3.th32ParentProcessID;
        break;
      }
    } while( FUNC_4(VAR_2, &VAR_3));
  }

  FUNC_0(VAR_2);
  return VAR_1;
}
