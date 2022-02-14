
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 char* FUNC_0 (char*) ;

const char *FUNC_1(void)
{
 static const char *VAR_1 = ((void*)0);

 if (!VAR_1) {
  VAR_1 = FUNC_0("GIT_USER_AGENT");
  if (!VAR_1)
   VAR_1 = VAR_0;
 }

 return VAR_1;
}
