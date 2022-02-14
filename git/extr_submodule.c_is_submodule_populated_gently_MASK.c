
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char*,int*) ;
 char* FUNC_2 (char*,char const*) ;

int FUNC_3(const char *VAR_0, int *VAR_1)
{
 int VAR_2 = 0;
 char *VAR_3 = FUNC_2("%s/.git", VAR_0);

 if (FUNC_1(VAR_3, VAR_1))
  VAR_2 = 1;

 FUNC_0(VAR_3);
 return VAR_2;
}
