
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct RObject {int tt; } ;
struct RClass {int dummy; } ;
typedef int mrb_value ;
typedef int mrb_sym ;
struct TYPE_7__ {struct RClass* object_class; } ;
typedef TYPE_1__ mrb_state ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,char*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,struct RObject*,int ) ;
 int FUNC_4 (TYPE_1__*,struct RObject*,int ,int ) ;
 struct RObject* FUNC_5 (int ) ;
 int FUNC_6 (struct RObject*) ;
 int * FUNC_7 (TYPE_1__*,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ) ;

__attribute__((used)) static inline void
FUNC_11(mrb_state *VAR_0, struct RObject *VAR_1, mrb_sym VAR_2, mrb_value VAR_3)
{
  if (FUNC_10(VAR_1->tt) && FUNC_10(FUNC_9(VAR_3))) {
    struct RObject *VAR_4 = FUNC_5(VAR_3);
    if (VAR_1 != VAR_4 && FUNC_0(FUNC_7(VAR_0, VAR_2)[0])) {
      mrb_sym VAR_5 = FUNC_1(VAR_0, "__classname__");
      mrb_value VAR_6 = FUNC_3(VAR_0, VAR_4, VAR_5);

      if (FUNC_2(VAR_6)) {
        mrb_sym VAR_7 = FUNC_1(VAR_0, "__outer__");
        VAR_6 = FUNC_3(VAR_0, VAR_4, VAR_7);

        if (FUNC_2(VAR_6)) {
          if ((struct RClass *)VAR_1 == VAR_0->object_class) {
            FUNC_4(VAR_0, VAR_4, VAR_5, FUNC_8(VAR_2));
          }
          else {
            FUNC_4(VAR_0, VAR_4, VAR_7, FUNC_6(VAR_1));
          }
        }
      }
    }
  }
}
