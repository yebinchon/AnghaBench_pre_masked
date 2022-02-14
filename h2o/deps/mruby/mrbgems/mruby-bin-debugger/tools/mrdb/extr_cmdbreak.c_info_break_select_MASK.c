
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* command; size_t wcnt; char** words; int dbg; } ;
typedef TYPE_1__ mrdb_state ;
typedef int mrb_state ;
typedef int mrb_debug_breakpoint ;
typedef scalar_t__ mrb_bool ;
typedef size_t int32_t ;


 int VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 scalar_t__ VAR_6 ;
 size_t FUNC_0 (int *,int ,size_t,int *) ;
 size_t FUNC_1 (char*) ;
 int FUNC_2 (size_t) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,size_t) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void
FUNC_6(mrb_state *VAR_7, mrdb_state *VAR_8)
{
  int32_t VAR_9 = VAR_5;
  int32_t VAR_10 = 0;
  char* VAR_11 = VAR_8->command;
  mrb_debug_breakpoint VAR_12;
  mrb_bool VAR_13 = VAR_6;
  int32_t VAR_14;

  for(VAR_14=2; VAR_14<VAR_8->wcnt; VAR_14++) {
    VAR_11 = VAR_8->words[VAR_14];
    VAR_10 = FUNC_1(VAR_11);
    if (VAR_10 == 0) {
      FUNC_5(VAR_0);
      break;
    }

    VAR_9 = FUNC_0(VAR_7, VAR_8->dbg, VAR_10, &VAR_12);
    if (VAR_9 == VAR_4) {
      FUNC_4(VAR_1, VAR_10);
      break;
    }
    else if (VAR_9 != VAR_5) {
      FUNC_2(VAR_9);
      break;
    }
    else if (VAR_13 == VAR_6) {
      VAR_13 = VAR_3;
      FUNC_5(VAR_2);
    }
    FUNC_3(&VAR_12);
  }
}
