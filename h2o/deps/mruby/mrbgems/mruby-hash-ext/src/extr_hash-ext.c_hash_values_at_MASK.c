
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mrb_value ;
typedef int mrb_state ;
typedef size_t mrb_int ;


 int FUNC_0 (int *,size_t) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,char*,int **,size_t*) ;
 int FUNC_5 (int *,int ,int ) ;

__attribute__((used)) static mrb_value
FUNC_6(mrb_state *VAR_0, mrb_value VAR_1)
{
  mrb_value *VAR_2, VAR_3;
  mrb_int VAR_4, VAR_5;
  int VAR_6;

  FUNC_4(VAR_0, "*", &VAR_2, &VAR_4);
  VAR_3 = FUNC_0(VAR_0, VAR_4);
  VAR_6 = FUNC_3(VAR_0);
  for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
    FUNC_1(VAR_0, VAR_3, FUNC_5(VAR_0, VAR_1, VAR_2[VAR_5]));
    FUNC_2(VAR_0, VAR_6);
  }
  return VAR_3;
}
