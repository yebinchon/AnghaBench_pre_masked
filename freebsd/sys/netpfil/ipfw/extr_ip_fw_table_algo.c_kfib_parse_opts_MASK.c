
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char* FUNC_0 (char*,char) ;
 scalar_t__ FUNC_1 (char*,char*,int) ;
 int FUNC_2 (char*,char**,int) ;

__attribute__((used)) static int
FUNC_3(int *VAR_1, char *VAR_2)
{
 char *VAR_3, *VAR_4, *VAR_5;
 int VAR_6;

 if (VAR_2 == ((void*)0))
  return (0);
 if ((VAR_3 = FUNC_0(VAR_2, ' ')) == ((void*)0))
  return (0);
 while (*VAR_3 == ' ')
  VAR_3++;
 if (FUNC_1(VAR_3, "fib=", 4) != 0)
  return (VAR_0);
 if ((VAR_5 = FUNC_0(VAR_3, ' ')) != ((void*)0))
  *VAR_5++ = '\0';

 VAR_3 += 4;

 VAR_6 = FUNC_2(VAR_3, &VAR_4, 10);
 if (*VAR_4 != '\0')
  return (VAR_0);

 *VAR_1 = VAR_6;

 return (0);
}
