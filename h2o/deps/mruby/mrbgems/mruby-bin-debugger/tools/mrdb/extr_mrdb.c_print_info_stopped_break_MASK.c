
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_12__ {TYPE_7__* dbg; } ;
typedef TYPE_4__ mrdb_state ;
typedef int mrb_state ;
struct TYPE_10__ {char* method_name; char* class_name; } ;
struct TYPE_9__ {char* file; int lineno; } ;
struct TYPE_11__ {TYPE_2__ methodpoint; TYPE_1__ linepoint; } ;
struct TYPE_13__ {int type; int bpno; TYPE_3__ point; } ;
typedef TYPE_5__ mrb_debug_breakpoint ;
typedef scalar_t__ int32_t ;
struct TYPE_14__ {int isCfunc; int stopped_bpno; } ;




 scalar_t__ FUNC_0 (int *,TYPE_7__*,int ,TYPE_5__*) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void
FUNC_2(mrb_state *VAR_0, mrdb_state *VAR_1)
{
  mrb_debug_breakpoint VAR_2;
  int32_t VAR_3;
  uint16_t VAR_4;
  const char *VAR_5;
  const char *VAR_6;
  const char *VAR_7;

  VAR_3 = FUNC_0(VAR_0, VAR_1->dbg, VAR_1->dbg->stopped_bpno, &VAR_2);
  if (VAR_3 == 0) {
    switch(VAR_2.type) {
      case 129:
        VAR_5 = VAR_2.point.linepoint.file;
        VAR_4 = VAR_2.point.linepoint.lineno;
        FUNC_1("Breakpoint %d, at %s:%d\n", VAR_2.bpno, VAR_5, VAR_4);
        break;
      case 128:
        VAR_6 = VAR_2.point.methodpoint.method_name;
        VAR_7 = VAR_2.point.methodpoint.class_name;
        if (VAR_7 == ((void*)0)) {
          FUNC_1("Breakpoint %d, %s\n", VAR_2.bpno, VAR_6);
        }
        else {
          FUNC_1("Breakpoint %d, %s:%s\n", VAR_2.bpno, VAR_7, VAR_6);
        }
        if (VAR_1->dbg->isCfunc) {
          FUNC_1("Stopped before calling the C function.\n");
        }
        break;
      default:
        break;
    }
  }
}
