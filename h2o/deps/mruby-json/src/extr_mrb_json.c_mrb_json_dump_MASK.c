
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mrb_value ;
typedef int mrb_state ;


 int FUNC_0 (int *,int ,char*,int,int ) ;
 int FUNC_1 (int *,char*,int *,int *) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int *,int ,int) ;

__attribute__((used)) static mrb_value
FUNC_5(mrb_state *VAR_0, mrb_value VAR_1) {
  mrb_value VAR_2, VAR_3 = FUNC_3(), VAR_4;
  FUNC_1(VAR_0, "o|o", &VAR_2, &VAR_3);
  VAR_4 = FUNC_4(VAR_0, VAR_2, -1);
  if (FUNC_2(VAR_3)) {
    return VAR_4;
  }
  FUNC_0(VAR_0, VAR_3, "write", 1, VAR_4);
  return VAR_3;
}
