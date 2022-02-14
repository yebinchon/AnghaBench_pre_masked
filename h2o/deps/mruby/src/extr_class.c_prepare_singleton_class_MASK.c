
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct RObject {int dummy; } ;
struct RClass {scalar_t__ tt; struct RClass* super; struct RClass* c; scalar_t__ iv; int mt; int flags; } ;
struct RBasic {scalar_t__ tt; struct RClass* c; } ;
struct TYPE_9__ {struct RClass* class_class; } ;
typedef TYPE_1__ mrb_state ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,struct RClass*) ;
 int FUNC_2 (TYPE_1__*,struct RBasic*,struct RBasic*) ;
 int FUNC_3 (TYPE_1__*,char*) ;
 scalar_t__ FUNC_4 (TYPE_1__*,scalar_t__,struct RClass*) ;
 int FUNC_5 (TYPE_1__*,struct RObject*,int ,int ) ;
 int FUNC_6 (struct RBasic*) ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_7(mrb_state *VAR_5, struct RBasic *VAR_6)
{
  struct RClass *VAR_7, *VAR_8;

  if (VAR_6->c->tt == VAR_3) return;
  VAR_7 = (struct RClass*)FUNC_4(VAR_5, VAR_3, VAR_5->class_class);
  VAR_7->flags |= VAR_0;
  VAR_7->mt = FUNC_0(VAR_4, VAR_5);
  VAR_7->iv = 0;
  if (VAR_6->tt == VAR_1) {
    VAR_8 = (struct RClass*)VAR_6;
    if (!VAR_8->super) {
      VAR_7->super = VAR_5->class_class;
    }
    else {
      VAR_7->super = VAR_8->super->c;
    }
  }
  else if (VAR_6->tt == VAR_3) {
    VAR_8 = (struct RClass*)VAR_6;
    while (VAR_8->super->tt == VAR_2)
      VAR_8 = VAR_8->super;
    FUNC_1(VAR_5, VAR_8->super);
    VAR_7->super = VAR_8->super->c;
  }
  else {
    VAR_7->super = VAR_6->c;
    FUNC_7(VAR_5, (struct RBasic*)VAR_7);
  }
  VAR_6->c = VAR_7;
  FUNC_2(VAR_5, (struct RBasic*)VAR_6, (struct RBasic*)VAR_7);
  FUNC_2(VAR_5, (struct RBasic*)VAR_7, (struct RBasic*)VAR_6);
  FUNC_5(VAR_5, (struct RObject*)VAR_7, FUNC_3(VAR_5, "__attached__"), FUNC_6(VAR_6));
}
