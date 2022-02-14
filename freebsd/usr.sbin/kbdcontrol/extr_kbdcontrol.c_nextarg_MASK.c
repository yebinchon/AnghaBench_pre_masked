
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 (char*,int) ;

__attribute__((used)) static char *
FUNC_2(int VAR_0, char **VAR_1, int *VAR_2, int VAR_3)
{
 if (*VAR_2 < VAR_0)
  return(VAR_1[(*VAR_2)++]);
 FUNC_1("option requires two arguments -- %c", VAR_3);
 FUNC_0();
}
