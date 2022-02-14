
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mrb_value ;
typedef int mrb_state ;
typedef size_t mrb_int ;


 size_t FUNC_0 (int ) ;
 size_t FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (size_t,size_t,size_t) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,char*,int **,size_t*) ;
 int FUNC_8 () ;

__attribute__((used)) static mrb_value
FUNC_9(mrb_state *VAR_0, mrb_value VAR_1)
{
  mrb_value *VAR_2, VAR_3;
  mrb_int VAR_4, VAR_5;
  FUNC_7(VAR_0, "*", &VAR_2, &VAR_4);

  for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
    size_t VAR_6, VAR_7;
    int VAR_8 = FUNC_6(VAR_0);
    VAR_3 = FUNC_3(VAR_0, VAR_2[VAR_5]);
    FUNC_5(VAR_0, VAR_8);
    VAR_6 = FUNC_0(VAR_1);
    VAR_7 = FUNC_0(VAR_3);
    if (VAR_6 >= VAR_7) {
      if (FUNC_2(FUNC_1(VAR_1) + (VAR_6 - VAR_7),
                 FUNC_1(VAR_3),
                 VAR_7) == 0) {
        return FUNC_8();
      }
    }
  }
  return FUNC_4();
}
