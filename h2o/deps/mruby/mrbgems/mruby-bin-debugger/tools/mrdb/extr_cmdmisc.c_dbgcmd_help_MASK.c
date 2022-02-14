
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int wcnt; int ** words; } ;
typedef TYPE_1__ mrdb_state ;
typedef int mrb_state ;
typedef int mrb_bool ;
typedef int dbgcmd_state ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 () ;

dbgcmd_state
FUNC_3(mrb_state *VAR_2, mrdb_state *VAR_3)
{
  mrb_bool VAR_4;
  int VAR_5;

  switch (VAR_3->wcnt) {
  case 0:
  case 1:
    VAR_4 = FUNC_2();
    break;
  case 2:
    VAR_4 = FUNC_1(VAR_3->words[1], ((void*)0));
    break;
  case 3:
    VAR_4 = FUNC_1(VAR_3->words[1], VAR_3->words[2]);
    break;
  default:
    VAR_4 = VAR_1;
    break;
  }

  if (!VAR_4) {
    FUNC_0("Invalid command \"");
    for (VAR_5 = 1; VAR_5 < VAR_3->wcnt; VAR_5++) {
      FUNC_0("%s%s", VAR_5 == 1 ? "" : " ", VAR_3->words[VAR_5]);
    }
    FUNC_0("\". Try \"help\".\n");
  }

  return VAR_0;
}
