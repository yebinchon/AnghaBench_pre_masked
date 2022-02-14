
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int FUNC_1 (unsigned char) ;
 int VAR_1 ;
 char* FUNC_2 (size_t) ;
 char* FUNC_3 (char*,char*,size_t) ;
 int FUNC_4 (char*,int ,int ,char const*) ;

__attribute__((used)) static char *
FUNC_5(char *VAR_2, const char *VAR_3)
{
 size_t VAR_4;
 int VAR_5;
 char *VAR_6, *VAR_7;

 VAR_5 = 0;
 for (VAR_7 = VAR_2; *VAR_2 != '\0' && *VAR_2 != '\n'; ++VAR_2)
  VAR_5 = FUNC_1((unsigned char)*VAR_2);
 *VAR_2 = '\0';
 if (VAR_5)
  FUNC_4("%lu: %s: whitespace after %s", VAR_1, VAR_0, VAR_3);
 VAR_4 = VAR_2 - VAR_7 + 1;
 if ((VAR_6 = FUNC_2(VAR_4)) == ((void*)0))
  FUNC_0(1, "malloc");
 return (FUNC_3(VAR_6, VAR_7, VAR_4));
}
