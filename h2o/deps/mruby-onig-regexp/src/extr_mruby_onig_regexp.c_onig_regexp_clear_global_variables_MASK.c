
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mrb_value ;
typedef int mrb_state ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,char const*,int) ;
 int FUNC_2 (int *,char*) ;

__attribute__((used)) static mrb_value
FUNC_3(mrb_state* VAR_0, mrb_value VAR_1) {
  FUNC_0(VAR_0, FUNC_2(VAR_0, "$~"));
  FUNC_0(VAR_0, FUNC_2(VAR_0, "$&"));
  FUNC_0(VAR_0, FUNC_2(VAR_0, "$`"));
  FUNC_0(VAR_0, FUNC_2(VAR_0, "$'"));
  FUNC_0(VAR_0, FUNC_2(VAR_0, "$+"));

  int VAR_2;
  for(VAR_2 = 1; VAR_2 < 10; ++VAR_2) {
    char const VAR_3[] = { '$', '0' + VAR_2 };
    FUNC_0(VAR_0, FUNC_1(VAR_0, VAR_3, 2));
  }

  return VAR_1;
}
