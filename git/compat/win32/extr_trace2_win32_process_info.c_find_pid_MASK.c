
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int dwSize; scalar_t__ th32ProcessID; } ;
typedef TYPE_1__ PROCESSENTRY32 ;
typedef int HANDLE ;
typedef scalar_t__ DWORD ;


 scalar_t__ FUNC_0 (int ,TYPE_1__*) ;
 scalar_t__ FUNC_1 (int ,TYPE_1__*) ;

__attribute__((used)) static int FUNC_2(DWORD VAR_0, HANDLE VAR_1, PROCESSENTRY32 *VAR_2)
{
 VAR_2->dwSize = sizeof(PROCESSENTRY32);

 if (FUNC_0(VAR_1, VAR_2)) {
  do {
   if (VAR_2->th32ProcessID == VAR_0)
    return 1;
  } while (FUNC_1(VAR_1, VAR_2));
 }
 return 0;
}
