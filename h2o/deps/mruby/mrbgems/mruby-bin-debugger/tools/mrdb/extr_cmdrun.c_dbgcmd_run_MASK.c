
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct RClass {int dummy; } ;
struct TYPE_8__ {TYPE_3__* dbg; } ;
typedef TYPE_1__ mrdb_state ;
struct TYPE_9__ {int eException_class; } ;
typedef TYPE_2__ mrb_state ;
struct TYPE_10__ {scalar_t__ xm; scalar_t__ xphase; } ;
typedef TYPE_3__ mrb_debug_context ;
typedef int dbgcmd_state ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 struct RClass* FUNC_0 (TYPE_2__*,char*,int ) ;
 int FUNC_1 (TYPE_2__*,struct RClass*,char*) ;
 int FUNC_2 (char*) ;

dbgcmd_state
FUNC_3(mrb_state *VAR_5, mrdb_state *VAR_6)
{
  mrb_debug_context *VAR_7 = VAR_6->dbg;

  if (VAR_7->xm == VAR_1){
    VAR_7->xm = VAR_4;
  }
  else {
    VAR_7->xm = VAR_3;
    if (VAR_7->xphase == VAR_2){
      struct RClass *VAR_8;
      FUNC_2("Start it from the beginning.");
      VAR_8 = FUNC_0(VAR_5, "DebuggerRestart", VAR_5->eException_class);
      FUNC_1(VAR_5, VAR_8, "Restart mrdb.");
    }
  }

  return VAR_0;
}
