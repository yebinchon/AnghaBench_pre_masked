
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*,char*,int) ;
 int FUNC_1 (int,char*) ;
 char* FUNC_2 (unsigned int) ;
 int FUNC_3 (char const*) ;

char *
FUNC_4(const char *VAR_0)
{
 char *VAR_1;
 unsigned VAR_2;

 if (*VAR_0 == '\0')
  return ("");
 VAR_2 = FUNC_3(VAR_0) + 1;
 if ((VAR_1 = FUNC_2(VAR_2)) == ((void*)0))
  FUNC_1(1, "Out of memory");
 FUNC_0(VAR_0, VAR_1, (int)VAR_2);
 return (VAR_1);
}
