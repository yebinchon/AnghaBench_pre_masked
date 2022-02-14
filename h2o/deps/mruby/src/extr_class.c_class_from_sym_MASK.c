
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct RClass {int dummy; } ;
typedef int mrb_value ;
typedef int mrb_sym ;
typedef int mrb_state ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ) ;
 struct RClass* FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (struct RClass*) ;

__attribute__((used)) static struct RClass*
FUNC_4(mrb_state *VAR_1, struct RClass *VAR_2, mrb_sym VAR_3)
{
  mrb_value VAR_4 = FUNC_2(VAR_1, FUNC_3(VAR_2), VAR_3);

  FUNC_0(VAR_1, VAR_4, VAR_0);
  return FUNC_1(VAR_4);
}
