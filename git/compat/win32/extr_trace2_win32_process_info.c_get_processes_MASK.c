
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct json_writer {int dummy; } ;
struct TYPE_3__ {char* szExeFile; scalar_t__ th32ParentProcessID; } ;
typedef TYPE_1__ PROCESSENTRY32 ;
typedef int HANDLE ;
typedef scalar_t__ DWORD ;


 scalar_t__ FUNC_0 () ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (scalar_t__,int ,TYPE_1__*) ;
 int FUNC_2 (struct json_writer*,char*) ;

__attribute__((used)) static void FUNC_3(struct json_writer *VAR_1, HANDLE VAR_2)
{
 PROCESSENTRY32 VAR_3;
 DWORD VAR_4;
 DWORD VAR_5[VAR_0];
 int VAR_6, VAR_7 = 0;

 VAR_4 = FUNC_0();
 while (FUNC_1(VAR_4, VAR_2, &VAR_3)) {

  if (VAR_7)
   FUNC_2(VAR_1, VAR_3);


  for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++)
   if (VAR_4 == VAR_5[VAR_6]) {
    FUNC_2(VAR_1, "(cycle)");
    return;
   }

  if (VAR_7 == VAR_0) {
   FUNC_2(VAR_1, "(truncated)");
   return;
  }

  VAR_5[VAR_7++] = VAR_4;

  VAR_4 = VAR_3;
 }
}
