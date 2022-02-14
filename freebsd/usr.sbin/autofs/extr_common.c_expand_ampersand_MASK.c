
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char**,char*,int,char*,char const*,char*) ;
 int FUNC_1 (int) ;
 char* FUNC_2 (char*) ;
 int FUNC_3 (int,char*) ;
 int FUNC_4 (char const*) ;

__attribute__((used)) static char *
FUNC_5(char *VAR_0, const char *VAR_1)
{
 char VAR_2, *VAR_3;
 int VAR_4, VAR_5, VAR_6 = 0;
 bool VAR_7 = 0;

 FUNC_1(VAR_1[0] != '\0');

 VAR_3 = FUNC_2(VAR_0);

 for (VAR_4 = 0; VAR_0[VAR_4] != '\0'; VAR_4++) {
  VAR_2 = VAR_0[VAR_4];
  if (VAR_2 == '\\' && VAR_7 == 0) {
   VAR_7 = 1;
   continue;
  }
  if (VAR_7) {
   VAR_7 = 0;
   continue;
  }
  VAR_7 = 0;
  if (VAR_2 != '&')
   continue;





  VAR_6 = VAR_4;


  VAR_5 = FUNC_0(&VAR_3, "%.*s%s%s",
      VAR_6, VAR_0, VAR_1, VAR_0 + VAR_6 + 1);
  if (VAR_5 < 0)
   FUNC_3(1, "asprintf");







  VAR_0 = VAR_3;
  VAR_4 = VAR_6 + FUNC_4(VAR_1);
  if (VAR_4 == (int)FUNC_4(VAR_0))
   break;
  VAR_7 = 0;

 }

 return (VAR_3);
}
