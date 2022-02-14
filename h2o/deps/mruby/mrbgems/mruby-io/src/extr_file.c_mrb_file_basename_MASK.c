
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mrb_value ;
typedef int mrb_state ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*,int *,int *,char*,char*) ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (int *,char*,int *) ;
 int FUNC_3 (int *,char*) ;
 char* FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (char*,int,char*,char*,char*) ;
 size_t FUNC_7 (char*) ;
 scalar_t__ FUNC_8 (char*,char*,int) ;

__attribute__((used)) static mrb_value
FUNC_9(mrb_state *VAR_2, mrb_value VAR_3)
{
  char *VAR_4, *VAR_5;
  mrb_value VAR_6;
  FUNC_2(VAR_2, "S", &VAR_6);
  VAR_5 = FUNC_4(VAR_2, VAR_6);
  if ((VAR_4 = FUNC_1(VAR_5)) == ((void*)0)) {
    FUNC_5(VAR_2, "basename");
  }
  if (FUNC_8(VAR_4, "//", 3) == 0) VAR_4[1] = '\0';
  return FUNC_3(VAR_2, VAR_4);

}
