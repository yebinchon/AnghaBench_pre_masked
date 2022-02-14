
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int wcnt; int dbg; } ;
typedef TYPE_1__ mrdb_state ;
typedef int mrb_state ;
typedef int mrb_bool ;
typedef int int32_t ;
typedef int (* all_command_func ) (int *,int ) ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static mrb_bool
FUNC_1(mrb_state *VAR_3, mrdb_state *VAR_4, all_command_func VAR_5)
{
  int32_t VAR_6 = VAR_1;

  if (VAR_4->wcnt == 1) {
    VAR_6 = VAR_5(VAR_3, VAR_4->dbg);
    FUNC_0(VAR_6);
    return VAR_2;
  }
  return VAR_0;
}
