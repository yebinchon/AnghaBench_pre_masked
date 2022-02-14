
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mrb_value ;
typedef int mrb_state ;
typedef int JSON_Value ;


 int VAR_0 ;
 int * FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,char*,int *) ;
 int FUNC_4 () ;
 int FUNC_5 (int *,int ,char*) ;
 int FUNC_6 (int *,int ) ;

__attribute__((used)) static mrb_value
FUNC_7(mrb_state *VAR_1, mrb_value VAR_2)
{
  mrb_value VAR_3;
  JSON_Value *VAR_4;
  mrb_value VAR_5 = FUNC_4();
  FUNC_3(VAR_1, "S", &VAR_5);

  VAR_4 = FUNC_0(FUNC_6(VAR_1, VAR_5));
  if (!VAR_4) {
    FUNC_5(VAR_1, VAR_0, "invalid json");
  }

  VAR_3 = FUNC_2(VAR_1, VAR_4);
  FUNC_1(VAR_4);
  return VAR_3;
}
