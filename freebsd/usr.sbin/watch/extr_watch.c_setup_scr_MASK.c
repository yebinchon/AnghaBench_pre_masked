
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int VAR_0 ;
 char* VAR_1 ;
 char* FUNC_1 (char*) ;
 int VAR_2 ;
 int FUNC_2 () ;
 int VAR_3 ;
 int FUNC_3 (int ,char*) ;
 scalar_t__ FUNC_4 (char*,char**) ;

__attribute__((used)) static void
FUNC_5(void)
{
 char *VAR_4 = VAR_1, *VAR_5;

 if (!VAR_2)
  return;
 if ((VAR_5 = FUNC_1("TERM")))
  if (FUNC_3(VAR_3, VAR_5) == 1)
   if (FUNC_4("cl", &VAR_4))
    VAR_0 = 1;
 FUNC_2();
 FUNC_0();
}
