
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_34__ TYPE_3__ ;
typedef struct TYPE_33__ TYPE_2__ ;
typedef struct TYPE_32__ TYPE_1__ ;


struct loopinfo {void* pc0; } ;
struct TYPE_33__ {struct TYPE_33__* car; struct TYPE_33__* cdr; } ;
typedef TYPE_2__ node ;
typedef int mrb_sym ;
typedef int mrb_aspec ;
struct TYPE_34__ {int mscope; int ainfo; scalar_t__ pc; TYPE_1__* irep; int mrb; } ;
typedef TYPE_3__ codegen_scope ;
struct TYPE_32__ {int rlen; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 () ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_6 (TYPE_3__*,TYPE_2__*,int ) ;
 int FUNC_7 (TYPE_3__*,char*) ;
 int FUNC_8 () ;
 int FUNC_9 (TYPE_3__*,int) ;
 int FUNC_10 (TYPE_3__*,int,int,int ) ;
 int FUNC_11 (TYPE_3__*,int ,int) ;
 int FUNC_12 (TYPE_3__*,TYPE_2__*,int,int ) ;
 int FUNC_13 (TYPE_3__*,int ,int ) ;
 int FUNC_14 (TYPE_3__*,int ,int,int ,int ) ;
 int FUNC_15 (TYPE_3__*,int ) ;
 int FUNC_16 (TYPE_3__*,int ,int,int ) ;
 int FUNC_17 (TYPE_3__*,int ,int) ;
 int FUNC_18 (TYPE_3__*,int ) ;
 struct loopinfo* FUNC_19 (TYPE_3__*,int ) ;
 int FUNC_20 (TYPE_3__*,int ) ;
 int FUNC_21 (int) ;
 void* FUNC_22 (TYPE_3__*) ;
 int FUNC_23 (TYPE_3__*,int ) ;
 scalar_t__ FUNC_24 (TYPE_2__*) ;
 int FUNC_25 (TYPE_2__*) ;
 int FUNC_26 (TYPE_2__*) ;
 int FUNC_27 () ;
 int FUNC_28 (TYPE_3__*,char*) ;
 int FUNC_29 (TYPE_3__*) ;
 TYPE_3__* FUNC_30 (int ,TYPE_3__*,TYPE_2__*) ;

__attribute__((used)) static int
FUNC_31(codegen_scope *VAR_13, node *VAR_14, int VAR_15)
{
  codegen_scope *VAR_16 = VAR_13;
  VAR_13 = FUNC_30(VAR_13->mrb, VAR_13, VAR_14->car);
  if (VAR_13 == ((void*)0)) {
    FUNC_28(VAR_16, "unexpected scope");
  }

  VAR_13->mscope = !VAR_15;

  if (VAR_15) {
    struct loopinfo *VAR_17 = FUNC_19(VAR_13, VAR_0);
    VAR_17->pc0 = FUNC_22(VAR_13);
  }
  VAR_14 = VAR_14->cdr;
  if (VAR_14->car == ((void*)0)) {
    FUNC_17(VAR_13, VAR_5, 0);
  }
  else {
    mrb_aspec VAR_18;
    int VAR_19, VAR_20, VAR_21, VAR_22, VAR_23, VAR_24, VAR_25;
    int VAR_26, VAR_27;
    node *VAR_28;
    node *VAR_29, *VAR_30;
    node *VAR_31;


    VAR_19 = FUNC_25(VAR_14->car->car);
    VAR_29 = VAR_14->car->car;
    VAR_31 = VAR_14->car->cdr->cdr->cdr->cdr;


    VAR_20 = FUNC_25(VAR_14->car->cdr->car);

    VAR_21 = VAR_14->car->cdr->cdr->car ? 1 : 0;

    VAR_22 = FUNC_25(VAR_14->car->cdr->cdr->cdr->car);
    VAR_30 = VAR_14->car->cdr->cdr->cdr->car;

    VAR_23 = VAR_31? FUNC_25(VAR_31->cdr->car) : 0;

    VAR_24 = VAR_31 && VAR_31->cdr->cdr->car? 1 : 0;

    VAR_25 = VAR_31 && VAR_31->cdr->cdr->cdr->car ? 1 : 0;

    if (VAR_19 > 0x1f || VAR_20 > 0x1f || VAR_22 > 0x1f || VAR_23 > 0x1f) {
      FUNC_7(VAR_13, "too many formal arguments");
    }
    VAR_18 = FUNC_4(VAR_19)
      | FUNC_2(VAR_20)
      | (VAR_21? FUNC_5() : 0)
      | FUNC_3(VAR_22)
      | FUNC_1(VAR_23, VAR_24)
      | (VAR_25? FUNC_0() : 0);
    VAR_13->ainfo = (((VAR_19+VAR_20) & 0x3f) << 7)
      | ((VAR_21 & 0x1) << 6)
      | ((VAR_22 & 0x1f) << 1)
      | (VAR_24 & 0x1);
    FUNC_17(VAR_13, VAR_5, VAR_18);

    VAR_26 = FUNC_22(VAR_13);
    for (VAR_27=0; VAR_27<VAR_20; VAR_27++) {
      FUNC_22(VAR_13);
      FUNC_13(VAR_13, VAR_6, 0);
    }
    if (VAR_20 > 0) {
      FUNC_13(VAR_13, VAR_6, 0);
    }
    VAR_28 = VAR_14->car->cdr->car;
    VAR_27 = 0;
    while (VAR_28) {
      int VAR_32;

      FUNC_9(VAR_13, VAR_26+VAR_27*3+1);
      FUNC_6(VAR_13, VAR_28->car->cdr, VAR_12);
      FUNC_27();
      VAR_32 = FUNC_20(VAR_13, FUNC_26(VAR_28->car->car));
      FUNC_10(VAR_13, VAR_32, FUNC_8(), 0);
      VAR_27++;
      VAR_28 = VAR_28->cdr;
    }
    if (VAR_20 > 0) {
      FUNC_9(VAR_13, VAR_26+VAR_27*3+1);
    }


    if (VAR_31) {
      node *VAR_33 = VAR_31->cdr->car;
      int VAR_34 = 0;

      if (VAR_31->cdr->cdr->car) {
        VAR_34 = 1;
      }
      FUNC_21(FUNC_24(VAR_31->car) == VAR_1);
      FUNC_21(FUNC_25(VAR_31) == 4);

      while (VAR_33) {
        int VAR_35, VAR_36 = -1;
        node *VAR_37 = VAR_33->car, *VAR_38 = VAR_37->cdr->cdr->car;
        mrb_sym VAR_39 = FUNC_26(VAR_37->cdr->car);

        FUNC_21(FUNC_24(VAR_37->car) == VAR_2);

        if (VAR_38) {
          FUNC_16(VAR_13, VAR_10, FUNC_8(), FUNC_23(VAR_13, VAR_39));
          VAR_35 = FUNC_14(VAR_13, VAR_7, FUNC_8(), 0, 0);
          FUNC_6(VAR_13, VAR_38, VAR_12);
          FUNC_27();
          FUNC_10(VAR_13, FUNC_20(VAR_13, VAR_39), FUNC_8(), 0);
          VAR_36 = FUNC_13(VAR_13, VAR_6, 0);
          FUNC_9(VAR_13, VAR_35);
        }
        FUNC_16(VAR_13, VAR_8, FUNC_20(VAR_13, VAR_39), FUNC_23(VAR_13, VAR_39));
        if (VAR_36 != -1) {
          FUNC_9(VAR_13, VAR_36);
        }
        VAR_27++;

        VAR_33 = VAR_33->cdr;
      }
      if (VAR_31->cdr->car && !VAR_34) {
        FUNC_15(VAR_13, VAR_9);
      }
    }


    if (VAR_29) {
      node *VAR_40 = VAR_29;

      VAR_26 = 1;
      while (VAR_40) {
        if (FUNC_24(VAR_40->car->car) == VAR_3) {
          FUNC_12(VAR_13, VAR_40->car->cdr->car, VAR_26, VAR_4);
        }
        VAR_26++;
        VAR_40 = VAR_40->cdr;
      }
    }
    if (VAR_30) {
      node *VAR_41 = VAR_29;

      VAR_26 = VAR_19+VAR_20+VAR_21+1;
      while (VAR_41) {
        if (FUNC_24(VAR_41->car->car) == VAR_3) {
          FUNC_12(VAR_13, VAR_41->car->cdr->car, VAR_26, VAR_4);
        }
        VAR_26++;
        VAR_41 = VAR_41->cdr;
      }
    }
  }

  FUNC_6(VAR_13, VAR_14->cdr->car, VAR_12);
  FUNC_27();
  if (VAR_13->pc > 0) {
    FUNC_11(VAR_13, VAR_11, FUNC_8());
  }
  if (VAR_15) {
    FUNC_18(VAR_13, VAR_4);
  }
  FUNC_29(VAR_13);
  return VAR_16->irep->rlen - 1;
}
