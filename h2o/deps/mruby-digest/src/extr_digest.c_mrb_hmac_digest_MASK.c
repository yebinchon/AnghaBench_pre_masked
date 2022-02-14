
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mrb_hmac {int dummy; } ;
typedef int mrb_value ;
typedef int mrb_state ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,struct mrb_hmac*) ;
 int FUNC_2 () ;

__attribute__((used)) static mrb_value
FUNC_3(mrb_state *VAR_0, mrb_value VAR_1)
{
  struct mrb_hmac *VAR_2;

  VAR_2 = (struct mrb_hmac *)FUNC_0(VAR_1);
  if (!VAR_2) return FUNC_2();
  return FUNC_1(VAR_0, VAR_2);
}
