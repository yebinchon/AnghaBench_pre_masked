
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_5__ ;
typedef struct TYPE_28__ TYPE_4__ ;
typedef struct TYPE_27__ TYPE_3__ ;
typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_1__ ;


struct loopinfo {int pc2; } ;
struct TYPE_28__ {TYPE_2__* cdr; struct TYPE_28__* car; } ;
typedef TYPE_4__ node ;
struct TYPE_29__ {int mrb; TYPE_3__* irep; } ;
typedef TYPE_5__ codegen_scope ;
struct TYPE_27__ {scalar_t__ rlen; } ;
struct TYPE_26__ {TYPE_1__* cdr; int car; } ;
struct TYPE_25__ {int car; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_5__*,int ,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_5__*,TYPE_4__*,int,int ) ;
 int FUNC_3 (TYPE_5__*,int ,int ) ;
 int FUNC_4 (TYPE_5__*,TYPE_4__*,int,int ) ;
 int FUNC_5 (TYPE_5__*,int ,int ,scalar_t__) ;
 int FUNC_6 (TYPE_5__*,int ,int ,int,int ) ;
 int FUNC_7 (TYPE_5__*,int ,int) ;
 int FUNC_8 (TYPE_5__*,int ) ;
 struct loopinfo* FUNC_9 (TYPE_5__*,int ) ;
 int FUNC_10 (int ,char*) ;
 int FUNC_11 (TYPE_5__*) ;
 int FUNC_12 (TYPE_5__*,int ) ;
 int FUNC_13 () ;
 int FUNC_14 () ;
 int FUNC_15 (TYPE_5__*,char*) ;
 int FUNC_16 (TYPE_5__*) ;
 TYPE_5__* FUNC_17 (int ,TYPE_5__*,int *) ;

__attribute__((used)) static void
FUNC_18(codegen_scope *VAR_7, node *VAR_8)
{
  codegen_scope *VAR_9 = VAR_7;
  int VAR_10;
  struct loopinfo *VAR_11;
  node *VAR_12;


  FUNC_0(VAR_7, VAR_8->cdr->car, VAR_6);

  VAR_7 = FUNC_17(VAR_7->mrb, VAR_7, ((void*)0));
  if (VAR_7 == ((void*)0)) {
    FUNC_15(VAR_9, "unexpected scope");
  }

  FUNC_14();


  VAR_12 = VAR_8->car;
  FUNC_7(VAR_7, VAR_3, 0x40000);
  if (VAR_12->car && !VAR_12->car->cdr && !VAR_12->cdr) {
    FUNC_2(VAR_7, VAR_12->car->car, 1, VAR_1);
  }
  else {
    FUNC_4(VAR_7, VAR_12, 1, VAR_6);
  }

  VAR_11 = FUNC_9(VAR_7, VAR_0);
  VAR_11->pc2 = FUNC_11(VAR_7);


  FUNC_0(VAR_7, VAR_8->cdr->cdr->car, VAR_6);
  FUNC_13();
  FUNC_3(VAR_7, VAR_4, FUNC_1());
  FUNC_8(VAR_7, VAR_1);
  FUNC_16(VAR_7);
  VAR_7 = VAR_9;
  FUNC_5(VAR_7, VAR_2, FUNC_1(), VAR_7->irep->rlen-1);
  FUNC_14();FUNC_13();
  FUNC_13();
  VAR_10 = FUNC_12(VAR_7, FUNC_10(VAR_7->mrb, "each"));
  FUNC_6(VAR_7, VAR_5, FUNC_1(), VAR_10, 0);
}
