
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,char*) ;
 char* FUNC_1 (unsigned long) ;
 int FUNC_2 (char*) ;

char *
FUNC_3(unsigned long VAR_0)
{
 static char *VAR_1 = ((void*)0);

 if (VAR_1 != ((void*)0))
  FUNC_2(VAR_1);

 VAR_1 = FUNC_1(VAR_0);
 if (VAR_1 == ((void*)0))
  FUNC_0(1, "fflagstostr");
 return (VAR_1);
}
