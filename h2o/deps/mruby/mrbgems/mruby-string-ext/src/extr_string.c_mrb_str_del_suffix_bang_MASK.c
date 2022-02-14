
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct RString {int dummy; } ;
typedef int mrb_value ;
typedef int mrb_state ;
typedef scalar_t__ mrb_int ;


 int FUNC_0 (struct RString*) ;
 struct RString* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct RString*) ;
 scalar_t__ FUNC_3 (struct RString*) ;
 char* FUNC_4 (struct RString*) ;
 int FUNC_5 (struct RString*,scalar_t__) ;
 scalar_t__ FUNC_6 (struct RString*) ;
 scalar_t__ FUNC_7 (char*,char*,scalar_t__) ;
 int FUNC_8 (int *,char*,char**,scalar_t__*) ;
 int FUNC_9 () ;
 int FUNC_10 (int *,struct RString*) ;

__attribute__((used)) static mrb_value
FUNC_11(mrb_state *VAR_0, mrb_value VAR_1)
{
  mrb_int VAR_2, VAR_3;
  char *VAR_4, *VAR_5;
  struct RString *VAR_6 = FUNC_1(VAR_1);

  FUNC_8(VAR_0, "s", &VAR_4, &VAR_2);
  VAR_3 = FUNC_3(VAR_6);
  if (VAR_2 > VAR_3) return FUNC_9();
  VAR_5 = FUNC_4(VAR_6);
  if (FUNC_7(VAR_5+VAR_3-VAR_2, VAR_4, VAR_2) != 0) return FUNC_9();
  if (!FUNC_0(VAR_6) && (FUNC_6(VAR_6) || FUNC_2(VAR_6))) {

  }
  else {
    FUNC_10(VAR_0, VAR_6);
  }
  FUNC_5(VAR_6, VAR_3-VAR_2);
  return VAR_1;
}
