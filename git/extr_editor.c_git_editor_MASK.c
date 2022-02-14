
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 char* VAR_1 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 () ;

const char *FUNC_2(void)
{
 const char *VAR_2 = FUNC_0("GIT_EDITOR");
 int VAR_3 = FUNC_1();

 if (!VAR_2 && VAR_1)
  VAR_2 = VAR_1;
 if (!VAR_2 && !VAR_3)
  VAR_2 = FUNC_0("VISUAL");
 if (!VAR_2)
  VAR_2 = FUNC_0("EDITOR");

 if (!VAR_2 && VAR_3)
  return ((void*)0);

 if (!VAR_2)
  VAR_2 = VAR_0;

 return VAR_2;
}
