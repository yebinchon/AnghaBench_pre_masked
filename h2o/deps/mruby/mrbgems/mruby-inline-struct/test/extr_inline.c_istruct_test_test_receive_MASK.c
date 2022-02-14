
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mrb_value ;
typedef int mrb_state ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*,int *) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ,char*) ;

__attribute__((used)) static mrb_value
FUNC_6(mrb_state *VAR_1, mrb_value VAR_2)
{
  mrb_value VAR_3;
  FUNC_2(VAR_1, "o", &VAR_3);
  if (FUNC_4(VAR_1, VAR_3) != FUNC_1(VAR_1, "InlineStructTest"))
  {
    FUNC_5(VAR_1, VAR_0, "Expected InlineStructTest");
  }
  return FUNC_0(((char*)FUNC_3(VAR_3))[0] == 's');
}
