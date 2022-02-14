
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*) ;
 int FUNC_1 (char*,char const**) ;
 char* FUNC_2 () ;

const char *FUNC_3(void)
{
 const char *VAR_0 = FUNC_0("GIT_SEQUENCE_EDITOR");

 if (!VAR_0)
  FUNC_1("sequence.editor", &VAR_0);
 if (!VAR_0)
  VAR_0 = FUNC_2();

 return VAR_0;
}
