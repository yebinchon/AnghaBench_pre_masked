
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* acu_disconnect ) () ;int acu_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_5 ;
 int FUNC_1 (int ,char*,int ,char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;

void
FUNC_5(char *VAR_6)
{
 if (!VAR_5) {
  FUNC_1(FUNC_4(VAR_1), "", VAR_0, "call terminated");
  return;
 }
 if (VAR_6 == VAR_2) {
  FUNC_1(FUNC_4(VAR_1), "", VAR_4->acu_name, "call terminated");
  if (FUNC_0(FUNC_4(VAR_3)))
   FUNC_2("\r\ndisconnecting...");
 } else
  FUNC_1(FUNC_4(VAR_1), "", VAR_4->acu_name, VAR_6);
 (*VAR_4->acu_disconnect)();
}
