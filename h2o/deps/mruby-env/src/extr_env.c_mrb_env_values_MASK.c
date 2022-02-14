
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mrb_value ;
typedef int mrb_state ;


 int ** VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *,char*,int) ;
 char* FUNC_3 (int *,char) ;
 int FUNC_4 (char*) ;

mrb_value
FUNC_5(mrb_state *VAR_1, mrb_value VAR_2)
{
  int VAR_3;
  mrb_value VAR_4;

  VAR_4 = FUNC_0(VAR_1);
  for (VAR_3 = 0; VAR_0[VAR_3] != ((void*)0); VAR_3++) {
    char *VAR_5 = FUNC_3(VAR_0[VAR_3], '=');
    if (VAR_5) {
      int VAR_6;
      VAR_5++;
      VAR_6 = FUNC_4(VAR_5);
      FUNC_1(VAR_1, VAR_4, FUNC_2(VAR_1, VAR_5, VAR_6));
    }
  }

  return VAR_4;
}
