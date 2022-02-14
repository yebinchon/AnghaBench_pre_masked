
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mrb_value ;
typedef int mrb_state ;
typedef int mrb_int ;


 int FUNC_0 (int ) ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int ,int,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_5(mrb_state *VAR_1, mrb_value VAR_2)
{
  char *VAR_3;
  mrb_int VAR_4;

  if (FUNC_4(VAR_2)) {
    VAR_3 = FUNC_1(VAR_2);
    VAR_4 = FUNC_0(VAR_2);
    FUNC_3(VAR_3, VAR_4, 1, VAR_0);
    FUNC_2(VAR_0);
  }
}
