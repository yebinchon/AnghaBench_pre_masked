
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char const*,char**,int) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;

int FUNC_4(int VAR_1, const char **VAR_2, const char *VAR_3)
{
 int VAR_4 = -1;
 int VAR_5 = -1;
 char *VAR_6;

 if (VAR_1 != 3)
  FUNC_3(VAR_0);

 VAR_4 = (int)FUNC_2(VAR_2[2], &VAR_6, 10);

 if ((VAR_6 == VAR_2[2]) || (*VAR_6 != ',' && *VAR_6 != '/' && *VAR_6))
  FUNC_1("Bad URL syntax");

 if (*VAR_6 == '/' || !*VAR_6) {
  VAR_5 = VAR_4;
 } else {
  char *VAR_7;
  VAR_5 = (int)FUNC_2(VAR_6 + 1, &VAR_7, 10);

  if ((VAR_7 == VAR_6 + 1) || (*VAR_7 != '/' && *VAR_7))
   FUNC_1("Bad URL syntax");
 }

 FUNC_0(VAR_4, VAR_5);
 return 0;
}
