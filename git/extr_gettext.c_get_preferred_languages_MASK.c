
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char* FUNC_0 (char*) ;
 char* FUNC_1 (int ,int *) ;
 scalar_t__ FUNC_2 (char const*,char*) ;

const char *FUNC_3(void)
{
 const char *VAR_1;

 VAR_1 = FUNC_0("LANGUAGE");
 if (VAR_1 && *VAR_1)
  return VAR_1;


 VAR_1 = FUNC_1(VAR_0, ((void*)0));
 if (VAR_1 && *VAR_1 &&
  FUNC_2(VAR_1, "C") &&
  FUNC_2(VAR_1, "POSIX"))
  return VAR_1;


 return ((void*)0);
}
