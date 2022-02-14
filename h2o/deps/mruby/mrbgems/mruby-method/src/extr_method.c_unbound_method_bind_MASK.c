
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct RObject {int dummy; } ;
typedef int mrb_value ;
typedef int mrb_state ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct RObject* FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,char*) ;
 char* FUNC_2 (int *,scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int *,char*,int *) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *,int ,int ) ;
 scalar_t__ FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,int ,scalar_t__) ;
 int FUNC_9 (int *,struct RObject*,int ,int ) ;
 int FUNC_10 (struct RObject*) ;
 int FUNC_11 (int *,int ,char*) ;
 int FUNC_12 (int *,int ,char*,int ) ;
 int FUNC_13 (int *,char const*,int ) ;
 scalar_t__ FUNC_14 (int ) ;
 int FUNC_15 (char const*) ;

__attribute__((used)) static mrb_value
FUNC_16(mrb_state *VAR_3, mrb_value VAR_4)
{
  struct RObject *VAR_5;
  mrb_value VAR_6 = FUNC_6(VAR_3, VAR_4, FUNC_5(VAR_3, "@owner"));
  mrb_value VAR_7 = FUNC_6(VAR_3, VAR_4, FUNC_5(VAR_3, "@name"));
  mrb_value VAR_8 = FUNC_6(VAR_3, VAR_4, FUNC_5(VAR_3, "proc"));
  mrb_value VAR_9 = FUNC_6(VAR_3, VAR_4, FUNC_5(VAR_3, "@klass"));
  mrb_value VAR_10;

  FUNC_4(VAR_3, "o", &VAR_10);

  if (FUNC_14(VAR_6) != VAR_1 &&
      FUNC_3(VAR_6) != FUNC_7(VAR_3, VAR_10) &&
      !FUNC_8(VAR_3, VAR_10, FUNC_3(VAR_6))) {
        if (FUNC_14(VAR_6) == VAR_2) {
          FUNC_11(VAR_3, VAR_0, "singleton method called for a different object");
        } else {
          const char *VAR_11 = FUNC_2(VAR_3, FUNC_3(VAR_6));
          FUNC_12(VAR_3, VAR_0, "bind argument must be an instance of %S", FUNC_13(VAR_3, VAR_11, FUNC_15(VAR_11)));
        }
  }
  VAR_5 = FUNC_0(VAR_3, FUNC_1(VAR_3, "Method"));
  FUNC_9(VAR_3, VAR_5, FUNC_5(VAR_3, "@owner"), VAR_6);
  FUNC_9(VAR_3, VAR_5, FUNC_5(VAR_3, "@recv"), VAR_10);
  FUNC_9(VAR_3, VAR_5, FUNC_5(VAR_3, "@name"), VAR_7);
  FUNC_9(VAR_3, VAR_5, FUNC_5(VAR_3, "proc"), VAR_8);
  FUNC_9(VAR_3, VAR_5, FUNC_5(VAR_3, "@klass"), VAR_9);

  return FUNC_10(VAR_5);
}
