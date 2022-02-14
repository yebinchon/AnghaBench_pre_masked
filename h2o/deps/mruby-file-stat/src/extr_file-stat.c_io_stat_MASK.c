
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int dummy; } ;
struct RClass {int dummy; } ;
typedef int mrb_value ;
typedef int mrb_state ;


 int FUNC_0 (int *,struct RClass*,int *,struct stat*) ;
 int VAR_0 ;
 int FUNC_1 (int ,struct stat*) ;
 struct RClass* FUNC_2 (int *,char*) ;
 struct RClass* FUNC_3 (int *,struct RClass*,char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int ,char*,int ) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *,int ,char*) ;
 scalar_t__ FUNC_9 (int *,int ,int ) ;
 struct stat* FUNC_10 (int *) ;
 int VAR_1 ;
 int FUNC_11 (int *,char*) ;

__attribute__((used)) static mrb_value
FUNC_12(mrb_state *VAR_2, mrb_value VAR_3)
{
  struct RClass *VAR_4;
  struct RClass *VAR_5;
  struct stat VAR_6, *VAR_7;
  mrb_value VAR_8;

  if (FUNC_9(VAR_2, VAR_3, FUNC_6(VAR_2, "fileno"))) {
    VAR_8 = FUNC_5(VAR_2, VAR_3, "fileno", 0);
  }
  else {
    FUNC_8(VAR_2, VAR_0, "`fileno' is not implemented");
  }

  if (FUNC_1(FUNC_4(VAR_8), &VAR_6) == -1) {
    FUNC_11(VAR_2, "fstat");
  }

  VAR_4 = FUNC_2(VAR_2, "File");
  VAR_5 = FUNC_3(VAR_2, VAR_4, "Stat");
  VAR_7 = FUNC_10(VAR_2);
  *VAR_7 = VAR_6;

  return FUNC_7(FUNC_0(VAR_2, VAR_5, &VAR_1, VAR_7));
}
