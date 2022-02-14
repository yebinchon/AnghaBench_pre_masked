
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 char* FUNC_1 (char const*) ;
 int FUNC_2 (char*) ;

char *
FUNC_3(const char *VAR_0)
{
 char *VAR_1;

 if ((VAR_1 = FUNC_1(VAR_0)) == ((void*)0)) {
  FUNC_2("strdup failed");
  FUNC_0();
 }
 return (VAR_1);
}
