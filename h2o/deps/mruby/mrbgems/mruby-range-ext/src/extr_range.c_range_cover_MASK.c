
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct RRange {int dummy; } ;
typedef int mrb_value ;
typedef int mrb_state ;


 int FUNC_0 (struct RRange*) ;
 int FUNC_1 (struct RRange*) ;
 scalar_t__ FUNC_2 (struct RRange*) ;
 int FUNC_3 () ;
 int FUNC_4 (int *,char*,int *) ;
 struct RRange* FUNC_5 (int *,int ) ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 (int *,int ,int ) ;
 scalar_t__ FUNC_8 (int *,int ,int ) ;

__attribute__((used)) static mrb_value
FUNC_9(mrb_state *VAR_0, mrb_value VAR_1)
{
  mrb_value VAR_2;
  struct RRange *VAR_3 = FUNC_5(VAR_0, VAR_1);
  mrb_value VAR_4, VAR_5;

  FUNC_4(VAR_0, "o", &VAR_2);

  VAR_4 = FUNC_0(VAR_3);
  VAR_5 = FUNC_1(VAR_3);

  if (FUNC_7(VAR_0, VAR_4, VAR_2)) {
    if (FUNC_2(VAR_3)) {
      if (FUNC_8(VAR_0, VAR_2, VAR_5))
        return FUNC_6();
    }
    else {
      if (FUNC_7(VAR_0, VAR_2, VAR_5))
        return FUNC_6();
    }
  }

  return FUNC_3();
}
