
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mrb_value ;
typedef int mrb_state ;
typedef int mrb_int ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,char*,int ) ;
 int FUNC_2 (int *,char*,int) ;

__attribute__((used)) static mrb_value
FUNC_3(mrb_state *VAR_1, mrb_value VAR_2)
{
  mrb_int VAR_3 = FUNC_0(VAR_2);
  char VAR_4;

  if (VAR_3 < 0 || 0xff < VAR_3) {
    FUNC_1(VAR_1, VAR_0, "%S out of char range", VAR_2);
  }
  VAR_4 = (char)VAR_3;
  return FUNC_2(VAR_1, &VAR_4, 1);

}
