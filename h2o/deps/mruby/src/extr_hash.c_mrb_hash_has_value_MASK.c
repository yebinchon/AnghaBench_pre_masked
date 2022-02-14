
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct has_v_arg {int found; int val; } ;
typedef int mrb_value ;
typedef int mrb_state ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int *,int ,int ,struct has_v_arg*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,char*,int *) ;

__attribute__((used)) static mrb_value
FUNC_4(mrb_state *VAR_2, mrb_value VAR_3)
{
  mrb_value VAR_4;
  struct has_v_arg VAR_5;

  FUNC_3(VAR_2, "o", &VAR_4);
  VAR_5.found = VAR_0;
  VAR_5.val = VAR_4;
  FUNC_1(VAR_2, FUNC_0(VAR_3), VAR_1, &VAR_5);
  return FUNC_2(VAR_5.found);
}
