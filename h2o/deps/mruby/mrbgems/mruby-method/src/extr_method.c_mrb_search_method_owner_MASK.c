
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct RProc {int dummy; } ;
struct RClass {scalar_t__ tt; struct RClass* c; } ;
typedef int mrb_value ;
typedef int mrb_sym ;
typedef int mrb_state ;
typedef scalar_t__ mrb_bool ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct RProc* FUNC_0 (int *,struct RClass**,int ) ;
 char* FUNC_1 (int *,struct RClass*) ;
 int FUNC_2 (int *,int ,char*,int,int ,int ) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,int ,char*,int ,int ) ;
 int FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (int *,char const*,int ) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 () ;
 int FUNC_11 (char const*) ;

__attribute__((used)) static void
FUNC_12(mrb_state *VAR_2, struct RClass *VAR_3, mrb_value VAR_4, mrb_sym VAR_5, struct RClass **VAR_6, struct RProc **VAR_7, mrb_bool VAR_8)
{
  mrb_value VAR_9;
  const char *VAR_10;

  *VAR_6 = VAR_3;
  *VAR_7 = FUNC_0(VAR_2, VAR_6, VAR_5);
  if (!*VAR_7) {
    if (VAR_8) {
      goto name_error;
    }
    if (!FUNC_5(VAR_2, VAR_4, FUNC_3(VAR_2, "respond_to_missing?"))) {
      goto name_error;
    }
    VAR_9 = FUNC_2(VAR_2, VAR_4, "respond_to_missing?", 2, FUNC_8(VAR_5), FUNC_10());
    if (!FUNC_9(VAR_9)) {
      goto name_error;
    }
    *VAR_6 = VAR_3;
  }

  while ((*VAR_6)->tt == VAR_1)
    *VAR_6 = (*VAR_6)->c;

  return;

name_error:
  VAR_10 = FUNC_1(VAR_2, VAR_3);
  FUNC_4(
    VAR_2, VAR_0,
    "undefined method `%S' for class `%S'",
    FUNC_7(VAR_2, VAR_5),
    FUNC_6(VAR_2, VAR_10, FUNC_11(VAR_10))
  );
}
