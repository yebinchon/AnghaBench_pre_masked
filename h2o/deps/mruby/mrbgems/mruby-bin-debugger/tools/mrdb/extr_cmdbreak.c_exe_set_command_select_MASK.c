
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef size_t (* select_command_func ) (int *,int ,int ) ;
struct TYPE_3__ {size_t wcnt; char** words; int dbg; } ;
typedef TYPE_1__ mrdb_state ;
typedef int mrb_state ;
typedef size_t int32_t ;


 char* VAR_0 ;
 char* VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t FUNC_0 (char*) ;
 int FUNC_1 (size_t) ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static void
FUNC_3(mrb_state *VAR_4, mrdb_state *VAR_5, select_command_func VAR_6)
{
  char* VAR_7;
  int32_t VAR_8 = VAR_3;
  int32_t VAR_9 = 0;
  int32_t VAR_10;

  for(VAR_10=1; VAR_10<VAR_5->wcnt; VAR_10++) {
    VAR_7 = VAR_5->words[VAR_10];
    VAR_9 = FUNC_0(VAR_7);
    if (VAR_9 == 0) {
      FUNC_2(VAR_0, VAR_7);
      break;
    }
    VAR_8 = VAR_6(VAR_4, VAR_5->dbg, (uint32_t)VAR_9);
    if (VAR_8 == VAR_2) {
      FUNC_2(VAR_1, VAR_9);
    }
    else if (VAR_8 != VAR_3) {
      FUNC_1(VAR_8);
    }
  }
}
