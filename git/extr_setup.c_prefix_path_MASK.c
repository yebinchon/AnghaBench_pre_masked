
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char const*) ;
 char* FUNC_2 (char const*,int,int *,char const*) ;

char *FUNC_3(const char *VAR_0, int VAR_1, const char *VAR_2)
{
 char *VAR_3 = FUNC_2(VAR_0, VAR_1, ((void*)0), VAR_2);
 if (!VAR_3)
  FUNC_1(FUNC_0("'%s' is outside repository"), VAR_2);
 return VAR_3;
}
