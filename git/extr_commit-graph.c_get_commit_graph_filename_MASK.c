
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char*) ;
 scalar_t__ FUNC_2 (char*) ;
 char* FUNC_3 (scalar_t__) ;
 char* FUNC_4 (char*,char const*) ;

char *FUNC_5(const char *VAR_0)
{
 char *VAR_1 = FUNC_4("%s/info/commit-graph", VAR_0);
 char *VAR_2 = FUNC_3(FUNC_2(VAR_1) + 1);
 FUNC_1(VAR_2, VAR_1);
 FUNC_0(VAR_1);
 return VAR_2;
}
