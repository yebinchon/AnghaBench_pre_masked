
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 int FUNC_0 (char*,int,char*,char*,char*) ;
 int FUNC_1 (char*,char*,int) ;
 char* FUNC_2 (char*) ;

int
FUNC_3(char *VAR_1, int VAR_2)
{
 char *VAR_3;
 int VAR_4;

 if ((VAR_3 = FUNC_2("folder")) == ((void*)0))
  return (-1);
 if (*VAR_3 == '/')
  VAR_4 = FUNC_1(VAR_1, VAR_3, VAR_2);
 else
  VAR_4 = FUNC_0(VAR_1, VAR_2, "%s/%s",
      VAR_0 ? VAR_0 : ".", VAR_3);
 return (VAR_4 < 0 || VAR_4 >= VAR_2 ? (-1) : (0));
}
