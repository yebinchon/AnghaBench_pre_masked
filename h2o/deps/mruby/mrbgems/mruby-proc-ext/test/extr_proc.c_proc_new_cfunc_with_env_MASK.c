
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct RProc {int dummy; } ;
typedef int mrb_value ;
typedef int mrb_sym ;
typedef int mrb_state ;
typedef int mrb_method_t ;


 int FUNC_0 (int ,struct RProc*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int ,int ) ;
 int FUNC_3 (int *,char*,int *) ;
 struct RProc* FUNC_4 (int *,int ,int,int *) ;
 int FUNC_5 (int ) ;
 int VAR_0 ;

__attribute__((used)) static mrb_value
FUNC_6(mrb_state *VAR_1, mrb_value VAR_2)
{
  mrb_sym VAR_3;
  mrb_value VAR_4;
  mrb_method_t VAR_5;
  struct RProc *VAR_6;
  FUNC_3(VAR_1, "n", &VAR_3);
  VAR_4 = FUNC_5(VAR_3);
  VAR_6 = FUNC_4(VAR_1, VAR_0, 1, &VAR_4);
  FUNC_0(VAR_5, VAR_6);
  FUNC_2(VAR_1, FUNC_1(VAR_2), VAR_3, VAR_5);
  return VAR_2;
}
