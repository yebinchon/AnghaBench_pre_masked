
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct RObject {int dummy; } ;
struct RClass {int dummy; } ;
typedef int mrb_value ;
typedef int mrb_sym ;
struct TYPE_9__ {struct RClass* object_class; } ;
typedef TYPE_1__ mrb_state ;


 int FUNC_0 (TYPE_1__*,struct RClass*) ;
 int FUNC_1 (TYPE_1__*,char*) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (TYPE_1__*,struct RObject*,int ) ;
 int FUNC_4 (TYPE_1__*,struct RObject*,int ,int ) ;
 int FUNC_5 (struct RClass*) ;
 int FUNC_6 (TYPE_1__*,int ,char*) ;
 char* FUNC_7 (TYPE_1__*,int ) ;
 int FUNC_8 (int ) ;

void
FUNC_9(mrb_state *VAR_0, struct RClass *VAR_1, struct RClass *VAR_2, mrb_sym VAR_3)
{
  mrb_value VAR_4;
  mrb_sym VAR_5 = FUNC_1(VAR_0, "__classname__");

  if (FUNC_3(VAR_0, (struct RObject*)VAR_2, VAR_5)) return;
  if (VAR_1 == ((void*)0) || VAR_1 == VAR_0->object_class) {
    VAR_4 = FUNC_8(VAR_3);
  }
  else {
    VAR_4 = FUNC_0(VAR_0, VAR_1);
    if (FUNC_2(VAR_4)) {
      if (VAR_1 != VAR_0->object_class && VAR_1 != VAR_2) {
        FUNC_4(VAR_0, (struct RObject*)VAR_2, FUNC_1(VAR_0, "__outer__"),
                       FUNC_5(VAR_1));
      }
      return;
    }
    FUNC_6(VAR_0, VAR_4, "::");
    FUNC_6(VAR_0, VAR_4, FUNC_7(VAR_0, VAR_3));
  }
  FUNC_4(VAR_0, (struct RObject*)VAR_2, VAR_5, VAR_4);
}
