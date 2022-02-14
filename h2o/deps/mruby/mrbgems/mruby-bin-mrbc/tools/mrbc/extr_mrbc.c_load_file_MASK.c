
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct mrbc_args {char** argv; size_t idx; char* prog; size_t argc; scalar_t__ verbose; } ;
struct TYPE_7__ {void* no_exec; void* dump_result; } ;
typedef TYPE_1__ mrbc_context ;
typedef int mrb_value ;
typedef int mrb_state ;
typedef void* mrb_bool ;
typedef int FILE ;


 void* VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,char*) ;
 int FUNC_2 (int ,char*,char*,char*) ;
 int FUNC_3 (int *,int *,TYPE_1__*) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int *,TYPE_1__*) ;
 TYPE_1__* FUNC_7 (int *) ;
 int FUNC_8 (int *,TYPE_1__*,char*) ;
 int FUNC_9 (int *,TYPE_1__*,int ,void*) ;
 int VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;

__attribute__((used)) static mrb_value
FUNC_10(mrb_state *VAR_5, struct mrbc_args *VAR_6)
{
  mrbc_context *VAR_7;
  mrb_value VAR_8;
  char *VAR_9 = VAR_6->argv[VAR_6->idx];
  FILE *VAR_10;
  mrb_bool VAR_11 = VAR_0;

  VAR_7 = FUNC_7(VAR_5);
  if (VAR_6->verbose)
    VAR_7->dump_result = VAR_1;
  VAR_7->no_exec = VAR_1;
  if (VAR_9[0] == '-' && VAR_9[1] == '\0') {
    VAR_10 = VAR_4;
  }
  else {
    VAR_11 = VAR_1;
    if ((VAR_10 = FUNC_1(VAR_9, "r")) == ((void*)0)) {
      FUNC_2(VAR_3, "%s: cannot open program file. (%s)\n", VAR_6->prog, VAR_9);
      return FUNC_4();
    }
  }
  FUNC_8(VAR_5, VAR_7, VAR_9);
  VAR_6->idx++;
  if (VAR_6->idx < VAR_6->argc) {
    VAR_11 = VAR_0;
    FUNC_9(VAR_5, VAR_7, VAR_2, (void*)VAR_6);
  }

  VAR_8 = FUNC_3(VAR_5, VAR_10, VAR_7);
  if (VAR_11) FUNC_0(VAR_10);
  FUNC_6(VAR_5, VAR_7);
  if (FUNC_5(VAR_8)) {
    return FUNC_4();
  }
  return VAR_8;
}
