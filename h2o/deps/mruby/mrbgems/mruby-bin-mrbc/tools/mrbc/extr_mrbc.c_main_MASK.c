
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mrbc_args {char* prog; char* outfile; int idx; scalar_t__ check_syntax; scalar_t__ initname; } ;
typedef int mrb_value ;
typedef int mrb_state ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,struct mrbc_args*) ;
 int FUNC_1 (int *,int *,char*,int ,struct mrbc_args*) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char*,char*) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (char*,int ) ;
 char* FUNC_6 (int *,char*,int ) ;
 int FUNC_7 (int *,struct mrbc_args*) ;
 scalar_t__ FUNC_8 (int ) ;
 int * FUNC_9 () ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int *,int,char**,struct mrbc_args*) ;
 int FUNC_12 (char*,char*,char*) ;
 int VAR_5 ;
 int * VAR_6 ;
 scalar_t__ FUNC_13 (char*,char*) ;
 int FUNC_14 (char*) ;

int
FUNC_15(int VAR_7, char **VAR_8)
{
  mrb_state *VAR_9 = FUNC_9();
  int VAR_10, VAR_11;
  struct mrbc_args VAR_12;
  FILE *VAR_13;
  mrb_value VAR_14;

  if (VAR_9 == ((void*)0)) {
    FUNC_5("Invalid mrb_state, exiting mrbc\n", VAR_5);
    return VAR_1;
  }

  VAR_10 = FUNC_11(VAR_9, VAR_7, VAR_8, &VAR_12);
  if (VAR_10 < 0) {
    FUNC_0(VAR_9, &VAR_12);
    FUNC_14(VAR_8[0]);
    return VAR_1;
  }
  if (VAR_10 == VAR_7) {
    FUNC_4(VAR_5, "%s: no program file given\n", VAR_12.prog);
    return VAR_1;
  }
  if (VAR_12.outfile == ((void*)0) && !VAR_12.check_syntax) {
    if (VAR_10 + 1 == VAR_7) {
      VAR_12.outfile = FUNC_6(VAR_9, VAR_8[VAR_10], VAR_12.initname ? VAR_0 : VAR_4);
    }
    else {
      FUNC_4(VAR_5, "%s: output file should be specified to compile multiple files\n", VAR_12.prog);
      return VAR_1;
    }
  }

  VAR_12.idx = VAR_10;
  VAR_14 = FUNC_7(VAR_9, &VAR_12);
  if (FUNC_8(VAR_14)) {
    FUNC_0(VAR_9, &VAR_12);
    return VAR_1;
  }
  if (VAR_12.check_syntax) {
    FUNC_12("%s:%s:Syntax OK\n", VAR_12.prog, VAR_8[VAR_10]);
  }

  if (VAR_12.check_syntax) {
    FUNC_0(VAR_9, &VAR_12);
    return VAR_2;
  }

  if (VAR_12.outfile) {
    if (FUNC_13("-", VAR_12.outfile) == 0) {
      VAR_13 = VAR_6;
    }
    else if ((VAR_13 = FUNC_3(VAR_12.outfile, "wb")) == ((void*)0)) {
      FUNC_4(VAR_5, "%s: cannot open output file:(%s)\n", VAR_12.prog, VAR_12.outfile);
      return VAR_1;
    }
  }
  else {
    FUNC_4(VAR_5, "Output file is required\n");
    return VAR_1;
  }
  VAR_11 = FUNC_1(VAR_9, VAR_13, VAR_12.outfile, FUNC_10(VAR_14), &VAR_12);
  FUNC_2(VAR_13);
  FUNC_0(VAR_9, &VAR_12);
  if (VAR_11 != VAR_3) {
    return VAR_1;
  }
  return VAR_2;
}
