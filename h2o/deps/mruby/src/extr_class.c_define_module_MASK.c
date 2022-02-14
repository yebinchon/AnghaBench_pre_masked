
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct RClass {int dummy; } ;
typedef int mrb_sym ;
typedef int mrb_state ;


 struct RClass* FUNC_0 (int *,struct RClass*,int ) ;
 scalar_t__ FUNC_1 (int *,int ,int ) ;
 struct RClass* FUNC_2 (int *) ;
 int FUNC_3 (struct RClass*) ;
 int FUNC_4 (int *,struct RClass*,struct RClass*,int ) ;

__attribute__((used)) static struct RClass*
FUNC_5(mrb_state *VAR_0, mrb_sym VAR_1, struct RClass *VAR_2)
{
  struct RClass *VAR_3;

  if (FUNC_1(VAR_0, FUNC_3(VAR_2), VAR_1)) {
    return FUNC_0(VAR_0, VAR_2, VAR_1);
  }
  VAR_3 = FUNC_2(VAR_0);
  FUNC_4(VAR_0, VAR_2, VAR_3, VAR_1);

  return VAR_3;
}
