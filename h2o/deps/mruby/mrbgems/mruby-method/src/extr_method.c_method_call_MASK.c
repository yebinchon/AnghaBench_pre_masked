
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct RClass {int dummy; } ;
typedef int mrb_value ;
typedef int mrb_sym ;
struct TYPE_15__ {TYPE_2__* c; } ;
typedef TYPE_3__ mrb_state ;
typedef scalar_t__ mrb_int ;
struct TYPE_14__ {TYPE_1__* ci; } ;
struct TYPE_13__ {int mid; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*,scalar_t__,int *) ;
 int FUNC_2 (TYPE_3__*,int ,int ) ;
 struct RClass* FUNC_3 (int ) ;
 int FUNC_4 (TYPE_3__*,int ,int ,scalar_t__,int ) ;
 int FUNC_5 (TYPE_3__*,int ,int ,scalar_t__,int *,int ) ;
 int FUNC_6 (TYPE_3__*,char*,int **,scalar_t__*,int *) ;
 int FUNC_7 (TYPE_3__*,char*) ;
 int FUNC_8 (TYPE_3__*,int ,int ) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (TYPE_3__*,int ,scalar_t__,int *,int ,struct RClass*) ;

__attribute__((used)) static mrb_value
FUNC_12(mrb_state *VAR_0, mrb_value VAR_1)
{
  mrb_value VAR_2 = FUNC_8(VAR_0, VAR_1, FUNC_7(VAR_0, "proc"));
  mrb_value VAR_3 = FUNC_8(VAR_0, VAR_1, FUNC_7(VAR_0, "@name"));
  mrb_value VAR_4 = FUNC_8(VAR_0, VAR_1, FUNC_7(VAR_0, "@recv"));
  struct RClass *VAR_5 = FUNC_3(FUNC_8(VAR_0, VAR_1, FUNC_7(VAR_0, "@owner")));
  mrb_int VAR_6;
  mrb_value *VAR_7, VAR_8, VAR_9;
  mrb_sym VAR_10;

  FUNC_6(VAR_0, "*&", &VAR_7, &VAR_6, &VAR_9);
  VAR_10 = VAR_0->c->ci->mid;
  VAR_0->c->ci->mid = FUNC_10(VAR_3);
  if (FUNC_9(VAR_2)) {
    mrb_value VAR_11 = FUNC_1(VAR_0, VAR_6, VAR_7);
    FUNC_2(VAR_0, VAR_11, VAR_3);
    VAR_8 = FUNC_4(VAR_0, VAR_4, FUNC_7(VAR_0, "method_missing"), VAR_6 + 1, FUNC_0(VAR_11));
  }
  else if (!FUNC_9(VAR_9)) {




    VAR_8 = FUNC_5(VAR_0, VAR_4, FUNC_10(VAR_3), VAR_6, VAR_7, VAR_9);
  }
  else {
    VAR_8 = FUNC_11(VAR_0, VAR_2, VAR_6, VAR_7, VAR_4, VAR_5);
  }
  VAR_0->c->ci->mid = VAR_10;
  return VAR_8;
}
