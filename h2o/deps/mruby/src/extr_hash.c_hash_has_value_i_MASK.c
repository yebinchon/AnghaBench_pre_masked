
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct has_v_arg {int found; int val; } ;
typedef int mrb_value ;
typedef int mrb_state ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int ,int ) ;

__attribute__((used)) static int
FUNC_1(mrb_state *VAR_1, mrb_value VAR_2, mrb_value VAR_3, void *VAR_4)
{
  struct has_v_arg *VAR_5 = (struct has_v_arg*)VAR_4;

  if (FUNC_0(VAR_1, VAR_5->val, VAR_3)) {
    VAR_5->found = VAR_0;
    return 1;
  }
  return 0;
}
