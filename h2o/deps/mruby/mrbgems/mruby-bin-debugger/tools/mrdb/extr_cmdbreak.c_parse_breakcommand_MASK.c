
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {int wcnt; char** words; TYPE_2__* dbg; } ;
typedef TYPE_1__ mrdb_state ;
struct TYPE_6__ {TYPE_4__* irep; scalar_t__ pc; } ;
typedef TYPE_2__ mrb_debug_context ;
typedef int mrb_debug_bptype ;
struct TYPE_7__ {scalar_t__ iseq; } ;


 int VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 char* VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char) ;
 int FUNC_1 (char) ;



 int FUNC_2 (int,char*) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (TYPE_4__*,scalar_t__) ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (int ) ;
 char* FUNC_7 (char*,char) ;

mrb_debug_bptype
FUNC_8(mrdb_state *VAR_5, const char **VAR_6, uint32_t *VAR_7, char **VAR_8, char **VAR_9)
{
  mrb_debug_context *VAR_10 = VAR_5->dbg;
  char *VAR_11;
  char *VAR_12;
  mrb_debug_bptype VAR_13;
  uint32_t VAR_14;

  if (VAR_5->wcnt <= 1) {
    FUNC_6(VAR_0);
    return 128;
  }

  VAR_11 = VAR_5->words[1];
  if ((VAR_12 = FUNC_7(VAR_11, ':')) == ((void*)0)) {
    VAR_12 = VAR_11;
    VAR_13 = FUNC_3(VAR_12);
  }
  else {
    if (VAR_12 == VAR_11) {
      FUNC_5(VAR_3, VAR_11);
      return 128;
    }
    *VAR_12 = '\0';
    VAR_13 = FUNC_3(++VAR_12);
  }

  switch(VAR_13) {
    case 130:
      FUNC_2(VAR_14, VAR_12);
      if (VAR_14 <= 65535) {
        *VAR_7 = VAR_14;
        *VAR_6 = (VAR_12 == VAR_11)? FUNC_4(VAR_10->irep, VAR_10->pc - VAR_10->irep->iseq): VAR_11;
      }
      else {
        FUNC_6(VAR_4);
        VAR_13 = 128;
      }
      break;
    case 129:
      if (VAR_12 == VAR_11) {

        if (FUNC_1(*VAR_12)||FUNC_0(*VAR_12)||(*VAR_12 == '_')) {
          *VAR_9 = VAR_12;
          *VAR_8 = ((void*)0);
        }
        else {
          FUNC_5(VAR_2, VAR_11);
          VAR_13 = 128;
        }
      }
      else {
        if (FUNC_1(*VAR_11)) {
          switch(*VAR_12) {
            case '@': case '$': case '?': case '.': case ',': case ':':
            case ';': case '#': case '\\': case '\'': case '\"':
            FUNC_5(VAR_2, VAR_12);
            VAR_13 = 128;
            break;
          default:
            *VAR_9 = VAR_12;
            *VAR_8 = VAR_11;
            break;
          }
        }
        else {
          FUNC_5(VAR_1, VAR_11);
          VAR_13 = 128;
        }
      }
      break;
    case 128:
    default:
      break;
  }

  return VAR_13;
}
