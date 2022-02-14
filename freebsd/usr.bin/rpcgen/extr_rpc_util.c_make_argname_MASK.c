
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 char* FUNC_0 (char const*) ;
 int FUNC_1 (char*,char*,char*,char const*,char*) ;
 scalar_t__ FUNC_2 (char const*) ;
 char* FUNC_3 (scalar_t__) ;

char *
FUNC_4(const char *VAR_1, const char *VAR_2)
{
 char *VAR_3;

 VAR_3 = FUNC_3(FUNC_2(VAR_1) + FUNC_2(VAR_2) + FUNC_2(VAR_0) + 3);
 FUNC_1(VAR_3, "%s_%s_%s", FUNC_0(VAR_1), VAR_2, VAR_0);
 return (VAR_3);
}
