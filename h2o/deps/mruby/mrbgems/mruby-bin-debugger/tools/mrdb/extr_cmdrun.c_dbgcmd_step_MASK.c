
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* dbg; } ;
typedef TYPE_2__ mrdb_state ;
typedef int mrb_state ;
typedef int dbgcmd_state ;
struct TYPE_4__ {int xm; } ;


 int VAR_0 ;
 int VAR_1 ;

dbgcmd_state
FUNC_0(mrb_state *VAR_2, mrdb_state *VAR_3)
{
  VAR_3->dbg->xm = VAR_1;
  return VAR_0;
}
