
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mrb_value ;
typedef int mrb_state ;
typedef int mrb_int ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,char*,int ) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static mrb_value
FUNC_3(mrb_state *VAR_2, mrb_value VAR_3)
{
  mrb_int VAR_4;
  char VAR_5;

  VAR_4 = FUNC_2(VAR_2, VAR_3);
  if (VAR_4 >= (1 << VAR_0)) {
    FUNC_0(VAR_2, VAR_1, "%S out of char range", VAR_3);
  }
  VAR_5 = (char)VAR_4;

  return FUNC_1(VAR_2, &VAR_5, 1);
}
