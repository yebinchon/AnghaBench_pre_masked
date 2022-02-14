
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*,int) ;
 char* FUNC_1 (char const*,char) ;
 int FUNC_2 (char const*) ;

int FUNC_3(const char *VAR_0)
{
 const char *VAR_1 = VAR_0;

 while ((VAR_1 = FUNC_1(VAR_0, '\n')) != ((void*)0)) {
  if (VAR_1 != VAR_0)
   FUNC_0(VAR_0, VAR_1 - VAR_0);
  FUNC_0("\r\n", 2);
  VAR_0 = VAR_1 + 1;
 }
 if (*VAR_0 != '\0')
  FUNC_0(VAR_0, FUNC_2(VAR_0));

 return 0;
}
