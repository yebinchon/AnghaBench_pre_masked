
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mrb_sym ;
typedef int mrb_state ;
typedef size_t mrb_int ;


 int FUNC_0 (char*,char const*,size_t) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*,size_t) ;
 scalar_t__ FUNC_3 (int *,size_t) ;
 char* FUNC_4 (int *,int ,size_t*) ;

__attribute__((used)) static mrb_sym
FUNC_5(mrb_state *VAR_0, mrb_sym VAR_1)
{
  const char *VAR_2;
  char *VAR_3;
  mrb_int VAR_4;
  mrb_sym VAR_5;

  VAR_2 = FUNC_4(VAR_0, VAR_1, &VAR_4);
  VAR_3 = (char *)FUNC_3(VAR_0, (size_t)VAR_4+2);
  FUNC_0(VAR_3, VAR_2, (size_t)VAR_4);
  VAR_3[VAR_4] = '=';
  VAR_3[VAR_4+1] = '\0';

  VAR_5 = FUNC_2(VAR_0, VAR_3, VAR_4+1);
  FUNC_1(VAR_0, VAR_3);
  return VAR_5;
}
