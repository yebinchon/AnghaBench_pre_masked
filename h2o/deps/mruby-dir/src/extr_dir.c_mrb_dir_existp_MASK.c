
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;
typedef int mrb_value ;
typedef int mrb_state ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int *,char*,int *) ;
 char* FUNC_3 (int *,int ) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (char*,struct stat*) ;

mrb_value
FUNC_6(mrb_state *VAR_0, mrb_value VAR_1)
{
  mrb_value VAR_2;
  struct stat VAR_3;
  char *VAR_4;

  FUNC_2(VAR_0, "S", &VAR_2);
  VAR_4 = FUNC_3(VAR_0, VAR_2);
  if (FUNC_5(VAR_4, &VAR_3) == 0 && FUNC_0(VAR_3.st_mode)) {
    return FUNC_4();
  } else {
    return FUNC_1();
  }
}
