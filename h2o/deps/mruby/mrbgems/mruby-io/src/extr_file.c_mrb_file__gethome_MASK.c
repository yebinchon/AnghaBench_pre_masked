
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct passwd {char* pw_dir; } ;
typedef int mrb_value ;
typedef int mrb_state ;
typedef scalar_t__ mrb_int ;


 int VAR_0 ;
 char* FUNC_0 (char*) ;
 struct passwd* FUNC_1 (char const*) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,char*,int *) ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (char*,int) ;
 int FUNC_7 () ;
 int FUNC_8 (int *,int ,char*) ;
 int FUNC_9 (int *,int ,char*,int ) ;
 int FUNC_10 (int *,char*) ;
 char* FUNC_11 (int *,int ) ;

__attribute__((used)) static mrb_value
FUNC_12(mrb_state *VAR_1, mrb_value VAR_2)
{
  mrb_int VAR_3;
  char *VAR_4;
  mrb_value VAR_5;


  mrb_value VAR_6;

  VAR_3 = FUNC_4(VAR_1, "|S", &VAR_6);
  if (VAR_3 == 0) {
    VAR_4 = FUNC_0("HOME");
    if (VAR_4 == ((void*)0)) {
      return FUNC_7();
    }
    if (!FUNC_2(VAR_4)) {
      FUNC_8(VAR_1, VAR_0, "non-absolute home");
    }
  } else {
    const char *VAR_7 = FUNC_11(VAR_1, VAR_6);
    struct passwd *VAR_8 = FUNC_1(VAR_7);
    if (VAR_8 == ((void*)0)) {
      return FUNC_7();
    }
    VAR_4 = VAR_8->pw_dir;
    if (!FUNC_2(VAR_4)) {
      FUNC_9(VAR_1, VAR_0, "non-absolute home of ~%S", VAR_6);
    }
  }
  VAR_4 = FUNC_6(VAR_4, -1);
  VAR_5 = FUNC_10(VAR_1, VAR_4);
  FUNC_5(VAR_4);
  return VAR_5;
}
