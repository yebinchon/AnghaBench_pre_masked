
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct RString {int dummy; } ;
typedef int mrb_value ;
typedef int mrb_state ;


 int FUNC_0 (struct RString*) ;
 struct RString* FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *,struct RString*,int ) ;

__attribute__((used)) static mrb_value
FUNC_3(mrb_state *VAR_0, mrb_value VAR_1)
{
  struct RString *VAR_2 = FUNC_1(VAR_0, 0, 0);

  FUNC_2(VAR_0, VAR_2, VAR_1);
  return FUNC_0(VAR_2);
}
