
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nLength; int bInheritHandle; int * lpSecurityDescriptor; } ;
typedef TYPE_1__ SECURITY_ATTRIBUTES ;
typedef scalar_t__ HANDLE ;
typedef int DWORD ;


 scalar_t__ FUNC_0 (char*,int ,int,TYPE_1__*,int ,int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 () ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

int FUNC_2(HANDLE* VAR_5,
    DWORD VAR_6) {
  HANDLE VAR_7;
  SECURITY_ATTRIBUTES VAR_8;

  VAR_8.nLength = sizeof VAR_8;
  VAR_8.lpSecurityDescriptor = ((void*)0);
  VAR_8.bInheritHandle = VAR_4;

  VAR_7 = FUNC_0(L"NUL",
                       VAR_6,
                       VAR_0 | VAR_1,
                       &VAR_8,
                       VAR_3,
                       0,
                       ((void*)0));
  if (VAR_7 == VAR_2) {
    return FUNC_1();
  }

  *VAR_5 = VAR_7;
  return 0;
}
