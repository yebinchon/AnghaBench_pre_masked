
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char const*) ;
 char const* FUNC_2 (char*,char const*) ;
 char* FUNC_3 (char const*) ;
 char* FUNC_4 (char*,char const*,char const*) ;

char *FUNC_5(const char *VAR_0,
        const char *VAR_1,
        const char *VAR_2)
{
 char *VAR_3, *VAR_4;

 if (FUNC_1(VAR_2))
  return FUNC_3(VAR_2);

 VAR_4 = FUNC_4("%s/%s", VAR_0, VAR_2);
 VAR_3 = FUNC_3(FUNC_2(VAR_4, VAR_1));
 FUNC_0(VAR_4);

 return VAR_3;
}
