
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* dbg; } ;
typedef TYPE_2__ mrdb_state ;
typedef int mrb_state ;
struct TYPE_7__ {int bm; } ;





 int FUNC_0 (int *,TYPE_2__*) ;
 int FUNC_1 (int *,TYPE_2__*) ;
 int FUNC_2 (int *,TYPE_2__*) ;

__attribute__((used)) static void
FUNC_3(mrb_state *VAR_0, mrdb_state *VAR_1)
{
  switch(VAR_1->dbg->bm) {
    case 130:
      FUNC_0(VAR_0, VAR_1);
      FUNC_1(VAR_0, VAR_1);
      break;
    case 128:
    case 129:
      FUNC_2(VAR_0, VAR_1);
      FUNC_1(VAR_0, VAR_1);
      break;
    default:
      break;
  }
}
