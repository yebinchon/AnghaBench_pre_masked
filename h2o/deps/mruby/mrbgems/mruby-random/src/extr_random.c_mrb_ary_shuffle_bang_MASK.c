
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mt_state ;
typedef int mrb_value ;
typedef int mrb_state ;
typedef size_t mrb_int ;


 int FUNC_0 (int ) ;
 int * FUNC_1 (int ) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int ) ;
 size_t FUNC_5 (int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int *,char*,int **,int *) ;
 int FUNC_8 (int *,int *,int ) ;
 int FUNC_9 (int *,int *) ;
 int VAR_0 ;

__attribute__((used)) static mrb_value
FUNC_10(mrb_state *VAR_1, mrb_value VAR_2)
{
  mrb_int VAR_3;
  mt_state *VAR_4 = ((void*)0);

  if (FUNC_0(VAR_2) > 1) {
    FUNC_7(VAR_1, "|d", &VAR_4, &VAR_0);

    if (VAR_4 == ((void*)0)) {
      VAR_4 = FUNC_2(VAR_1);
    }
    FUNC_9(VAR_1, VAR_4);

    FUNC_3(VAR_1, FUNC_4(VAR_2));

    for (VAR_3 = FUNC_0(VAR_2) - 1; VAR_3 > 0; VAR_3--) {
      mrb_int VAR_5;
      mrb_value *VAR_6 = FUNC_1(VAR_2);
      mrb_value VAR_7;


      VAR_5 = FUNC_5(FUNC_8(VAR_1, VAR_4, FUNC_6(FUNC_0(VAR_2))));

      VAR_7 = VAR_6[VAR_3];
      VAR_6[VAR_3] = VAR_6[VAR_5];
      VAR_6[VAR_5] = VAR_7;
    }
  }

  return VAR_2;
}
