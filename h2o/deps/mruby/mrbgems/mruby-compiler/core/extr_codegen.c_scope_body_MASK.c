
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_14__ {int cdr; int car; } ;
typedef TYPE_2__ node ;
struct TYPE_15__ {TYPE_1__* irep; int iseq; scalar_t__ sp; int mrb; } ;
typedef TYPE_3__ codegen_scope ;
struct TYPE_13__ {int rlen; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_3__*,int ,int ) ;
 int FUNC_1 (TYPE_3__*,char*) ;
 int FUNC_2 (TYPE_3__*,int ,scalar_t__) ;
 int FUNC_3 (TYPE_3__*,int ) ;
 int FUNC_4 (TYPE_3__*) ;
 TYPE_3__* FUNC_5 (int ,TYPE_3__*,int ) ;

__attribute__((used)) static int
FUNC_6(codegen_scope *VAR_3, node *VAR_4, int VAR_5)
{
  codegen_scope *VAR_6 = FUNC_5(VAR_3->mrb, VAR_3, VAR_4->car);
  if (VAR_6 == ((void*)0)) {
    FUNC_1(VAR_3, "unexpected scope");
  }

  FUNC_0(VAR_6, VAR_4->cdr, VAR_2);
  FUNC_2(VAR_6, VAR_0, VAR_6->sp-1);
  if (!VAR_3->iseq) {
    FUNC_3(VAR_6, VAR_1);
  }
  FUNC_4(VAR_6);
  if (!VAR_3->irep) {

    return 0;
  }
  return VAR_3->irep->rlen - 1;
}
