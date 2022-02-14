
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mrb_value ;
typedef int mrb_state ;


 int FUNC_0 (int *,int ,char*) ;

__attribute__((used)) static mrb_value
FUNC_1(mrb_state* VAR_0, mrb_value VAR_1, int VAR_2) {
  int VAR_3;
  VAR_1 = FUNC_0(VAR_0, VAR_1, "\n");
  for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) VAR_1 = FUNC_0(VAR_0, VAR_1, "  ");
  return VAR_1;
}
