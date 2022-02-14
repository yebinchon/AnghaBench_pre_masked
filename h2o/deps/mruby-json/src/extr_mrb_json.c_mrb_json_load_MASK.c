
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
 int FUNC_3 (int *,char*,int *,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 (int *,int ,char*) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,int ,int,int *) ;

__attribute__((used)) static mrb_value
FUNC_9(mrb_state *VAR_1, mrb_value VAR_2)
{
  mrb_value VAR_3, VAR_4;
  JSON_Value *VAR_5;
  mrb_value VAR_6 = FUNC_5();
  FUNC_3(VAR_1, "S&", &VAR_6, &VAR_4);

  VAR_5 = FUNC_0(FUNC_7(VAR_1, VAR_6));
  if (!VAR_5) {
    FUNC_6(VAR_1, VAR_0, "invalid json");
  }

  VAR_3 = FUNC_2(VAR_1, VAR_5);
  FUNC_1(VAR_5);
  if (!FUNC_4(VAR_4)) {
    mrb_value VAR_7[1];
    VAR_7[0] = VAR_3;
    FUNC_8(VAR_1, VAR_4, 1, VAR_7);
  }
  return VAR_3;
}
