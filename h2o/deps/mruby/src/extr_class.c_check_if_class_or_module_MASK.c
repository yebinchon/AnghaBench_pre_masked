
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mrb_value ;
typedef int mrb_state ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ,char*,int ) ;

__attribute__((used)) static void
FUNC_3(mrb_state *VAR_1, mrb_value VAR_2)
{
  if (!FUNC_0(VAR_2)) {
    FUNC_2(VAR_1, VAR_0, "%S is not a class/module", FUNC_1(VAR_1, VAR_2));
  }
}
