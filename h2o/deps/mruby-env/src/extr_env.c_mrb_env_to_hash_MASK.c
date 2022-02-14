
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mrb_value ;
typedef int mrb_state ;


 char** VAR_0 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int ,int ) ;
 int FUNC_4 (int *,char*,int) ;
 char* FUNC_5 (char*,char) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static mrb_value
FUNC_7(mrb_state *VAR_1, mrb_value VAR_2)
{
  int VAR_3;
  mrb_value VAR_4;

  VAR_4 = FUNC_2(VAR_1);
  for (VAR_3 = 0; VAR_0[VAR_3] != ((void*)0); VAR_3++) {
    char *VAR_5 = FUNC_5(VAR_0[VAR_3], '=');
    if (VAR_5 != ((void*)0)) {
      mrb_value VAR_6;
      int VAR_7 = FUNC_1(VAR_1);
      int VAR_8 = VAR_5 - VAR_0[VAR_3];
      mrb_value VAR_9 = FUNC_4(VAR_1, VAR_0[VAR_3], VAR_8);
      VAR_5++;
      VAR_6 = FUNC_4(VAR_1, VAR_5, FUNC_6(VAR_5));
      FUNC_3(VAR_1, VAR_4, VAR_9, VAR_6);
      FUNC_0(VAR_1, VAR_7);
    }
  }

  return VAR_4;
}
