
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct RProc {struct RClass* c; } ;
struct RClass {int dummy; } ;
typedef int mrb_value ;
struct TYPE_6__ {struct RClass* proc_class; } ;
typedef TYPE_1__ mrb_state ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int ,char*,int ) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 int FUNC_3 (TYPE_1__*,int ,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 struct RProc* FUNC_5 (int ) ;

__attribute__((used)) static mrb_value
FUNC_6(mrb_state *VAR_0, mrb_value VAR_1)
{
  mrb_value VAR_2 = FUNC_3(VAR_0, VAR_1, FUNC_2(VAR_0, "proc"));
  struct RProc *VAR_3;
  struct RClass *VAR_4;
  mrb_value VAR_5;

  if (FUNC_4(VAR_2))
    return FUNC_0(-1);

  VAR_3 = FUNC_5(VAR_2);
  VAR_4 = VAR_3->c;
  VAR_3->c = VAR_0->proc_class;
  VAR_5 = FUNC_1(VAR_0, VAR_2, "arity", 0);
  VAR_3->c = VAR_4;
  return VAR_5;
}
