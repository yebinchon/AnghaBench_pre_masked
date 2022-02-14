
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (int ) ;

__attribute__((used)) static const char *FUNC_2(void)
{
 static const char *VAR_1 = ((void*)0);
 static int VAR_2 = 0;

 if (VAR_2)
  return VAR_1;
 VAR_1 = FUNC_1(FUNC_0("GIT_EXTERNAL_DIFF"));
 if (!VAR_1)
  VAR_1 = VAR_0;
 VAR_2 = 1;
 return VAR_1;
}
