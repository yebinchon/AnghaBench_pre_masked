
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int dummy; } ;
struct RClass {int dummy; } ;
typedef int mrb_value ;
typedef int mrb_state ;


 int FUNC_0 (int *,struct RClass*,int *,struct stat*) ;
 int FUNC_1 (char*,struct stat*) ;
 int VAR_0 ;
 int FUNC_2 (int *,int ,int ,char*,char*) ;
 struct RClass* FUNC_3 (int *,struct RClass*,char*) ;
 struct RClass* FUNC_4 (int ) ;
 int FUNC_5 (int *,int ,int ,char*,char*) ;
 int FUNC_6 (int *,char*,int *) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 struct stat* FUNC_9 (int *) ;
 int VAR_1 ;
 char* FUNC_10 (int *,int ) ;
 int FUNC_11 (int *,char*) ;

__attribute__((used)) static mrb_value
FUNC_12(mrb_state *VAR_2, mrb_value VAR_3)
{
  struct RClass *VAR_4;
  struct RClass *VAR_5;
  struct stat VAR_6, *VAR_7;
  mrb_value VAR_8, VAR_9;
  char *VAR_10;

  FUNC_6(VAR_2, "o", &VAR_8);

  VAR_9 = FUNC_2(VAR_2, VAR_8, VAR_0, "String", "to_path");
  if (FUNC_7(VAR_9)) {
    VAR_9 = FUNC_5(VAR_2, VAR_8, VAR_0, "String", "to_str");
  }
  VAR_10 = FUNC_10(VAR_2, VAR_9);
  if (FUNC_1(VAR_10, &VAR_6) == -1) {
    FUNC_11(VAR_2, VAR_10);
  }

  VAR_4 = FUNC_4(VAR_3);
  VAR_5 = FUNC_3(VAR_2, VAR_4, "Stat");
  VAR_7 = FUNC_9(VAR_2);
  *VAR_7 = VAR_6;

  return FUNC_8(FUNC_0(VAR_2, VAR_5, &VAR_1, VAR_7));
}
