
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char const*) ;
 int FUNC_4 (int ,char*,char const*) ;
 scalar_t__ FUNC_5 (char*,char*) ;
 char* FUNC_6 (char*,char) ;
 char* FUNC_7 (char*,char) ;

int FUNC_8(const char *VAR_2, char **VAR_3)
{
 char *VAR_4, *VAR_5, *VAR_6;

 FUNC_1(VAR_2 && VAR_3);

 VAR_4 = FUNC_3(VAR_2);
 FUNC_0(VAR_4);

 VAR_5 = FUNC_6(VAR_4, '.');
 VAR_6 = FUNC_7(VAR_4, '.');

 if (VAR_5 == ((void*)0) || VAR_5 == VAR_4 || VAR_6 == ((void*)0) || !VAR_6[1])
  goto invalid;


 if (FUNC_5(VAR_4, VAR_5) < 0 ||
     FUNC_5(VAR_6 + 1, ((void*)0)) < 0)
  goto invalid;


 while (VAR_5 < VAR_6)
  if (*VAR_5++ == '\n')
   goto invalid;

 *VAR_3 = VAR_4;
 return 0;

invalid:
 FUNC_2(VAR_4);
 FUNC_4(VAR_1, "invalid config item name '%s'", VAR_2);
 return VAR_0;
}
