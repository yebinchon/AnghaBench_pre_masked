
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct RClass {int dummy; } ;
typedef int mrb_value ;
typedef int mrb_state ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct RClass*) ;
 int FUNC_4 (int *,int ,char*) ;
 int FUNC_5 (int *,int ,int ) ;

__attribute__((used)) static mrb_value
FUNC_6(mrb_state *VAR_1, struct RClass *VAR_2)
{
  mrb_value VAR_3 = FUNC_5(VAR_1, FUNC_3(VAR_2), FUNC_1(VAR_1, "__members__"));

  if (FUNC_2(VAR_3)) {
    FUNC_4(VAR_1, VAR_0, "uninitialized struct");
  }
  if (!FUNC_0(VAR_3)) {
    FUNC_4(VAR_1, VAR_0, "corrupted struct");
  }
  return VAR_3;
}
