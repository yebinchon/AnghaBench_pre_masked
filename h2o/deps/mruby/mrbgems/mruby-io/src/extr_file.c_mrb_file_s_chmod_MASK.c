
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mrb_value ;
typedef int mrb_state ;
typedef size_t mrb_int ;


 int FUNC_0 (char*,size_t) ;
 int FUNC_1 (size_t) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,char*,size_t*,int **,size_t*) ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (char const*,int) ;
 char* FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,char const*) ;

__attribute__((used)) static mrb_value
FUNC_9(mrb_state *VAR_0, mrb_value VAR_1) {
  mrb_int VAR_2;
  mrb_int VAR_3, VAR_4;
  mrb_value *VAR_5;
  int VAR_6 = FUNC_3(VAR_0);

  FUNC_4(VAR_0, "i*", &VAR_2, &VAR_5, &VAR_3);
  for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
    const char *VAR_7 = FUNC_7(VAR_0, VAR_5[VAR_4]);
    char *VAR_8 = FUNC_6(VAR_7, -1);
    if (FUNC_0(VAR_8, VAR_2) == -1) {
      FUNC_5(VAR_8);
      FUNC_8(VAR_0, VAR_7);
    }
    FUNC_5(VAR_8);
  }

  FUNC_2(VAR_0, VAR_6);
  return FUNC_1(VAR_3);
}
