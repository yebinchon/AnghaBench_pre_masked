
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int * dbg; } ;
typedef TYPE_1__ mrdb_state ;
typedef int mrb_state ;
typedef int mrb_debug_context ;
typedef int mrb_debug_bptype ;
typedef int int32_t ;
typedef int dbgcmd_state ;


 char* VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 char* VAR_3 ;
 char* VAR_4 ;
 char* VAR_5 ;
 char* VAR_6 ;
 char* VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *,int *,char const*,int ) ;
 int FUNC_1 (int *,int *,char*,char*) ;
 int FUNC_2 (TYPE_1__*,char const**,int *,char**,char**) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (char*) ;

dbgcmd_state
FUNC_5(mrb_state *VAR_9, mrdb_state *VAR_10)
{
  mrb_debug_bptype VAR_11;
  mrb_debug_context *VAR_12 = VAR_10->dbg;
  const char *VAR_13 = ((void*)0);
  uint32_t VAR_14 = 0;
  char *VAR_15 = ((void*)0);
  char *VAR_16 = ((void*)0);
  int32_t VAR_17;

  VAR_11 = FUNC_2(VAR_10, &VAR_13, &VAR_14, &VAR_15, &VAR_16);
  switch (VAR_11) {
    case 136:
      VAR_17 = FUNC_0(VAR_9, VAR_12, VAR_13, VAR_14);
      break;
    case 135:
      VAR_17 = FUNC_1(VAR_9, VAR_12, VAR_15, VAR_16);
      break;
    case 134:
    default:
      return VAR_8;
  }

  if (VAR_17 >= 0) {
    if (VAR_11 == 136) {
      FUNC_3(VAR_6, VAR_17, VAR_13, VAR_14);
    }
    else if ((VAR_11 == 135)&&(VAR_15 == ((void*)0))) {
      FUNC_3(VAR_7, VAR_17, VAR_16);
    }
    else {
      FUNC_3(VAR_5, VAR_17, VAR_15, VAR_16);
    }
  }
  else {
    switch (VAR_17) {
      case 132:
        FUNC_3(VAR_2, VAR_14, VAR_13);
        break;
      case 133:
        FUNC_3(VAR_1, VAR_13);
        break;
      case 130:
        FUNC_4(VAR_4);
        break;
      case 131:
        FUNC_4(VAR_3);
        break;
      case 129:
        FUNC_4(VAR_0);
        break;
      case 128:
        FUNC_4("T.B.D.");
        break;
      default:
        break;
    }
  }

  return VAR_8;
}
