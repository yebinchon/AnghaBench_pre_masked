
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mrb_value ;
typedef int mrb_state ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,char*) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static void
FUNC_4(mrb_state *VAR_1, mrb_value VAR_2)
{
  if (FUNC_0(FUNC_1(VAR_2))) {
    FUNC_2(VAR_1, VAR_0, "can't modify frozen struct");
  }

  FUNC_3(VAR_1, FUNC_1(VAR_2));
}
