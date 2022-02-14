
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_2__ ;
typedef struct TYPE_29__ TYPE_1__ ;


struct _args {char* cmdline; int argc; char** argv; int libc; char** libv; scalar_t__ check_syntax; int * rfp; scalar_t__ mrbfile; scalar_t__ verbose; int debug; } ;
struct TYPE_29__ {void* no_exec; void* dump_result; } ;
typedef TYPE_1__ mrbc_context ;
typedef int mrb_value ;
typedef int mrb_sym ;
struct TYPE_30__ {scalar_t__ exc; } ;
typedef TYPE_2__ mrb_state ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (TYPE_2__*,struct _args*) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char*,char*) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (TYPE_2__*,int) ;
 int FUNC_6 (TYPE_2__*,int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (TYPE_2__*,char*,int ) ;
 int FUNC_9 (TYPE_2__*,int) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (TYPE_2__*,int ,int ) ;
 int FUNC_12 (TYPE_2__*,char*) ;
 int FUNC_13 (TYPE_2__*,int *,TYPE_1__*) ;
 int FUNC_14 (TYPE_2__*,int *,TYPE_1__*) ;
 int FUNC_15 (TYPE_2__*,char*,TYPE_1__*) ;
 int FUNC_16 (scalar_t__) ;
 TYPE_2__* FUNC_17 () ;
 int FUNC_18 (TYPE_2__*,int ) ;
 int FUNC_19 (TYPE_2__*) ;
 int FUNC_20 (TYPE_2__*,char const*) ;
 int FUNC_21 (TYPE_2__*,char*) ;
 scalar_t__ FUNC_22 (int ) ;
 int FUNC_23 (char*) ;
 char* FUNC_24 (char*,int) ;
 int FUNC_25 (TYPE_2__*,TYPE_1__*) ;
 TYPE_1__* FUNC_26 (TYPE_2__*) ;
 int FUNC_27 (TYPE_2__*,TYPE_1__*,char const*) ;
 int FUNC_28 (TYPE_2__*,int,char**,struct _args*) ;
 int FUNC_29 (char*,...) ;
 int VAR_3 ;
 int FUNC_30 (char*) ;

int
FUNC_31(int VAR_4, char **VAR_5)
{
  mrb_state *VAR_6 = FUNC_17();
  int VAR_7 = -1;
  int VAR_8;
  struct _args VAR_9;
  mrb_value VAR_10;
  mrbc_context *VAR_11;
  mrb_value VAR_12;
  mrb_sym VAR_13;

  if (VAR_6 == ((void*)0)) {
    FUNC_4("Invalid mrb_state, exiting mruby\n", VAR_3);
    return VAR_0;
  }

  VAR_7 = FUNC_28(VAR_6, VAR_4, VAR_5, &VAR_9);
  if (VAR_7 == VAR_0 || (VAR_9.cmdline == ((void*)0) && VAR_9.rfp == ((void*)0))) {
    FUNC_1(VAR_6, &VAR_9);
    FUNC_30(VAR_5[0]);
    return VAR_7;
  }
  else {
    int VAR_14 = FUNC_10(VAR_6);
    VAR_10 = FUNC_5(VAR_6, VAR_9.argc);
    for (VAR_8 = 0; VAR_8 < VAR_9.argc; VAR_8++) {
      char* VAR_15 = FUNC_24(VAR_9.argv[VAR_8], -1);
      if (VAR_15) {
        FUNC_6(VAR_6, VAR_10, FUNC_20(VAR_6, VAR_15));
        FUNC_23(VAR_15);
      }
    }
    FUNC_8(VAR_6, "ARGV", VAR_10);
    FUNC_11(VAR_6, FUNC_12(VAR_6, "$DEBUG"), FUNC_7(VAR_9.debug));

    VAR_11 = FUNC_26(VAR_6);
    if (VAR_9.verbose)
      VAR_11->dump_result = VAR_2;
    if (VAR_9.check_syntax)
      VAR_11->no_exec = VAR_2;


    VAR_13 = FUNC_12(VAR_6, "$0");
    if (VAR_9.rfp) {
      const char *VAR_16;
      VAR_16 = VAR_9.cmdline ? VAR_9.cmdline : "-";
      FUNC_27(VAR_6, VAR_11, VAR_16);
      FUNC_11(VAR_6, VAR_13, FUNC_20(VAR_6, VAR_16));
    }
    else {
      FUNC_27(VAR_6, VAR_11, "-e");
      FUNC_11(VAR_6, VAR_13, FUNC_21(VAR_6, "-e"));
    }


    for (VAR_8 = 0; VAR_8 < VAR_9.libc; VAR_8++) {
      FILE *VAR_17 = FUNC_3(VAR_9.libv[VAR_8], VAR_9.mrbfile ? "rb" : "r");
      if (VAR_17 == ((void*)0)) {
        FUNC_29("Cannot open library file: %s\n", VAR_9.libv[VAR_8]);
        FUNC_25(VAR_6, VAR_11);
        FUNC_1(VAR_6, &VAR_9);
        return VAR_0;
      }
      if (VAR_9.mrbfile) {
        VAR_12 = FUNC_14(VAR_6, VAR_17, VAR_11);
      }
      else {
        VAR_12 = FUNC_13(VAR_6, VAR_17, VAR_11);
      }
      FUNC_2(VAR_17);
    }


    if (VAR_9.mrbfile) {
      VAR_12 = FUNC_14(VAR_6, VAR_9.rfp, VAR_11);
    }
    else if (VAR_9.rfp) {
      VAR_12 = FUNC_13(VAR_6, VAR_9.rfp, VAR_11);
    }
    else {
      char* VAR_18 = FUNC_24(VAR_9.cmdline, -1);
      if (!VAR_18) FUNC_0();
      VAR_12 = FUNC_15(VAR_6, VAR_18, VAR_11);
      FUNC_23(VAR_18);
    }

    FUNC_9(VAR_6, VAR_14);
    FUNC_25(VAR_6, VAR_11);
    if (VAR_6->exc) {
      if (FUNC_22(VAR_12)) {
        FUNC_18(VAR_6, FUNC_16(VAR_6->exc));
      }
      else {
        FUNC_19(VAR_6);
      }
      VAR_7 = -1;
    }
    else if (VAR_9.check_syntax) {
      FUNC_29("Syntax OK\n");
    }
  }
  FUNC_1(VAR_6, &VAR_9);

  return VAR_7 == 0 ? VAR_1 : VAR_0;
}
