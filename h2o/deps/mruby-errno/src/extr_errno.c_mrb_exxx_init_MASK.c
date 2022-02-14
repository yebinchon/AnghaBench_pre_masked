
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mrb_value ;
typedef int mrb_state ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,char*,int *) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,int ,int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 () ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *,int ,int ) ;
 int FUNC_10 (int *,int ,char*) ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 (int ) ;

__attribute__((used)) static mrb_value
FUNC_13(mrb_state *VAR_0, mrb_value VAR_1)
{
  mrb_value VAR_2, VAR_3, VAR_4;

  VAR_3 = FUNC_1(VAR_0, FUNC_8(FUNC_0(VAR_0, VAR_1)), FUNC_4(VAR_0, "Errno"));
  VAR_4 = FUNC_11(VAR_0, FUNC_12(FUNC_2(VAR_3)));

  VAR_2 = FUNC_7();
  FUNC_3(VAR_0, "|S", &VAR_2);
  if (!FUNC_6(VAR_2)) {
    FUNC_10(VAR_0, VAR_4, " - ");
    FUNC_9(VAR_0, VAR_4, VAR_2);
  }
  FUNC_5(VAR_0, VAR_1, FUNC_4(VAR_0, "mesg"), VAR_4);
  return VAR_1;
}
