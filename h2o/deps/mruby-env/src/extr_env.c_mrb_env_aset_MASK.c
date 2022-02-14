
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mrb_value ;
typedef int mrb_state ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ,char*,char*) ;
 int FUNC_1 (int *,char*,int *,int *) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *,int ,char*) ;
 char* FUNC_4 (int *,int *) ;
 scalar_t__ FUNC_5 (char const*,char const*,int) ;
 scalar_t__ FUNC_6 (char const*) ;

__attribute__((used)) static mrb_value
FUNC_7(mrb_state *VAR_2, mrb_value VAR_3)
{
  mrb_value VAR_4, VAR_5;
  const char *VAR_6, *VAR_7;

  FUNC_1(VAR_2, "So", &VAR_4, &VAR_5);
  VAR_6 = FUNC_4(VAR_2, &VAR_4);

  if (FUNC_2(VAR_5)) {
    if (FUNC_6(VAR_6) != 0) {
      FUNC_3(VAR_2, VAR_0, "can't delete environment variable");
    }
  } else {
    FUNC_0(VAR_2, VAR_5, VAR_1, "String", "to_str");
    VAR_7 = FUNC_4(VAR_2, &VAR_5);
    if (FUNC_5(VAR_6, VAR_7, 1) != 0) {
      FUNC_3(VAR_2, VAR_0, "can't change environment variable");
    }
  }
  return VAR_5;
}
