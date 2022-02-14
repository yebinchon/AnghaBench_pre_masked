
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char const*) ;
 int FUNC_2 (int ) ;
 char* FUNC_3 () ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,int) ;
 scalar_t__ VAR_1 ;

void FUNC_6(void)
{
 const char *VAR_2;
 static int VAR_3 = 0;

 if (VAR_3)
  return;

 if (VAR_1)
  FUNC_2(FUNC_0("unable to set up work tree using invalid config"));

 VAR_2 = FUNC_3();
 if (!VAR_2 || FUNC_1(VAR_2))
  FUNC_2(FUNC_0("this operation must be run in a work tree"));





 if (FUNC_4(VAR_0))
  FUNC_5(VAR_0, ".", 1);

 VAR_3 = 1;
}
