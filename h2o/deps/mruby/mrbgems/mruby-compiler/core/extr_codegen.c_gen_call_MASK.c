
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_10__ ;


struct TYPE_20__ {TYPE_10__* cdr; TYPE_10__* car; } ;
typedef TYPE_2__ node ;
typedef scalar_t__ mrb_sym ;
typedef int mrb_int ;
struct TYPE_21__ {int mrb; } ;
typedef TYPE_3__ codegen_scope ;
struct TYPE_19__ {TYPE_2__* car; } ;
struct TYPE_18__ {TYPE_1__* cdr; int car; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (TYPE_3__*,TYPE_10__*,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_3__*,int) ;
 int FUNC_3 (TYPE_3__*,int ,int) ;
 int FUNC_4 (TYPE_3__*,int,int,int) ;
 int FUNC_5 (TYPE_3__*,TYPE_10__*,int ,int) ;
 int FUNC_6 (TYPE_3__*,int ,int,int ,int) ;
 int FUNC_7 (TYPE_3__*,int ,int) ;
 int FUNC_8 (TYPE_3__*,int ,int,int) ;
 int FUNC_9 (TYPE_3__*,int ,int,int,int) ;
 char* FUNC_10 (int ,scalar_t__,int*) ;
 int FUNC_11 (TYPE_3__*,scalar_t__) ;
 scalar_t__ FUNC_12 (int ) ;
 int FUNC_13 () ;
 int FUNC_14 (int) ;
 int FUNC_15 () ;

__attribute__((used)) static void
FUNC_16(codegen_scope *VAR_16, node *VAR_17, mrb_sym VAR_18, int VAR_19, int VAR_20, int VAR_21)
{
  mrb_sym VAR_22 = VAR_18 ? VAR_18 : FUNC_12(VAR_17->cdr->car);
  int VAR_23 = 0;
  int VAR_24 = 0, VAR_25 = 0, VAR_26 = 0, VAR_27 = 0;

  FUNC_0(VAR_16, VAR_17->car, VAR_15);
  if (VAR_21) {
    int VAR_28 = FUNC_1()-1;
    FUNC_4(VAR_16, FUNC_1(), VAR_28, 1);
    VAR_23 = FUNC_6(VAR_16, VAR_6, FUNC_1(), 0, VAR_20);
  }
  VAR_17 = VAR_17->cdr->cdr->car;
  if (VAR_17) {
    VAR_24 = FUNC_5(VAR_16, VAR_17->car, VAR_15, VAR_19?1:0);
    if (VAR_24 < 0) {
      VAR_24 = VAR_25 = VAR_26 = 1;
      FUNC_15();
    }
  }
  if (VAR_19) {
    if (VAR_26) {
      FUNC_4(VAR_16, FUNC_1(), VAR_19, 0);
      FUNC_13();
      FUNC_7(VAR_16, VAR_1, FUNC_1());
      FUNC_15();
    }
    else {
      FUNC_4(VAR_16, FUNC_1(), VAR_19, 0);
      FUNC_15();
      VAR_24++;
    }
  }
  if (VAR_17 && VAR_17->cdr) {
    VAR_25 = 1;
    FUNC_0(VAR_16, VAR_17->cdr, VAR_15);
    FUNC_13();
    VAR_27 = 1;
  }
  FUNC_15();FUNC_13();
  FUNC_14(VAR_24+1);
  {
    mrb_int VAR_29;
    const char *VAR_30 = FUNC_10(VAR_16->mrb, VAR_22, &VAR_29);

    if (!VAR_25 && VAR_29 == 1 && VAR_30[0] == '+' && VAR_24 == 1) {
      FUNC_3(VAR_16, VAR_0, FUNC_1());
    }
    else if (!VAR_25 && VAR_29 == 1 && VAR_30[0] == '-' && VAR_24 == 1) {
      FUNC_3(VAR_16, VAR_14, FUNC_1());
    }
    else if (!VAR_25 && VAR_29 == 1 && VAR_30[0] == '*' && VAR_24 == 1) {
      FUNC_7(VAR_16, VAR_9, FUNC_1());
    }
    else if (!VAR_25 && VAR_29 == 1 && VAR_30[0] == '/' && VAR_24 == 1) {
      FUNC_7(VAR_16, VAR_2, FUNC_1());
    }
    else if (!VAR_25 && VAR_29 == 1 && VAR_30[0] == '<' && VAR_24 == 1) {
      FUNC_7(VAR_16, VAR_8, FUNC_1());
    }
    else if (!VAR_25 && VAR_29 == 2 && VAR_30[0] == '<' && VAR_30[1] == '=' && VAR_24 == 1) {
      FUNC_7(VAR_16, VAR_7, FUNC_1());
    }
    else if (!VAR_25 && VAR_29 == 1 && VAR_30[0] == '>' && VAR_24 == 1) {
      FUNC_7(VAR_16, VAR_5, FUNC_1());
    }
    else if (!VAR_25 && VAR_29 == 2 && VAR_30[0] == '>' && VAR_30[1] == '=' && VAR_24 == 1) {
      FUNC_7(VAR_16, VAR_4, FUNC_1());
    }
    else if (!VAR_25 && VAR_29 == 2 && VAR_30[0] == '=' && VAR_30[1] == '=' && VAR_24 == 1) {
      FUNC_7(VAR_16, VAR_3, FUNC_1());
    }
    else {
      int VAR_31 = FUNC_11(VAR_16, VAR_22);

      if (VAR_26) {
        FUNC_8(VAR_16, VAR_27 ? VAR_13 : VAR_12, FUNC_1(), VAR_31);
      }
      else {
        FUNC_9(VAR_16, VAR_27 ? VAR_11 : VAR_10, FUNC_1(), VAR_31, VAR_24);
      }
    }
  }
  if (VAR_21) {
    FUNC_2(VAR_16, VAR_23);
  }
  if (VAR_20) {
    FUNC_15();
  }
}
