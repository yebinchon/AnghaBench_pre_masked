
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


typedef int mrb_value ;
struct TYPE_11__ {scalar_t__ jmp; scalar_t__ exc; } ;
typedef TYPE_1__ mrb_state ;
typedef int mrb_irep ;
typedef int mode_t ;
typedef int jmp_buf ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*,int ,int ,char*,int *) ;
 int FUNC_4 (TYPE_1__*,int *) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int,char*) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (TYPE_1__*,char*,int *,int *) ;
 int FUNC_10 () ;
 int FUNC_11 (TYPE_1__*,int ,char*,int ) ;
 int * FUNC_12 (TYPE_1__*,int *) ;
 int FUNC_13 (TYPE_1__*,char*) ;
 char* FUNC_14 (TYPE_1__*,int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (TYPE_1__*,char*) ;
 int FUNC_17 () ;
 int FUNC_18 (char*) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int) ;

__attribute__((used)) static mrb_value
FUNC_21(mrb_state *VAR_3, mrb_value VAR_4)
{
  char *VAR_5 = ((void*)0);



  char VAR_6[] = "tmp.XXXXXXXX";

  mode_t VAR_7;
  FILE *VAR_8 = ((void*)0);
  int VAR_9 = -1, VAR_10;
  mrb_irep *VAR_11;
  mrb_value VAR_12, VAR_13 = FUNC_10();

  FUNC_9(VAR_3, "S|S", &VAR_12, &VAR_13);
  if (!FUNC_15(VAR_13)) {
    VAR_13 = FUNC_13(VAR_3, "-");
  }
  VAR_5 = FUNC_14(VAR_3, VAR_13);

  VAR_7 = FUNC_20(077);
  VAR_9 = FUNC_8(VAR_6);
  if (VAR_9 == -1) {
    FUNC_16(VAR_3, "can't create mkstemp() at mrb_require_load_rb_str");
  }
  FUNC_20(VAR_7);

  VAR_8 = FUNC_6(VAR_9, "r+");
  if (VAR_8 == ((void*)0)) {
    FUNC_2(VAR_9);
    FUNC_16(VAR_3, "can't open temporay file at mrb_require_load_rb_str");
  }

  VAR_10 = FUNC_3(VAR_3, FUNC_1(VAR_12), FUNC_0(VAR_12), VAR_5, VAR_8);
  if (VAR_10 != VAR_2) {
    FUNC_5(VAR_8);
    FUNC_18(VAR_6);
    FUNC_11(VAR_3, VAR_0, "can't load file -- %S", VAR_13);
    return FUNC_10();
  }

  FUNC_19(VAR_8);
  VAR_11 = FUNC_12(VAR_3, VAR_8);
  FUNC_5(VAR_8);
  FUNC_18(VAR_6);

  if (VAR_11) {
    FUNC_4(VAR_3, VAR_11);
  } else if (VAR_3->exc) {

    FUNC_7(*(jmp_buf*)VAR_3->jmp, 1);
  } else {
    FUNC_11(VAR_3, VAR_0, "can't load file -- %S", VAR_13);
    return FUNC_10();
  }

  return FUNC_17();
}
