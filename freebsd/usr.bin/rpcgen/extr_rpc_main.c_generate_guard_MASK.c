
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*,char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char) ;
 scalar_t__ FUNC_3 (char) ;
 scalar_t__ FUNC_4 (char) ;
 int FUNC_5 (char*,char*) ;
 void* FUNC_6 (char const*,char) ;
 char FUNC_7 (char) ;
 char* FUNC_8 (char const*) ;

char *
FUNC_9(const char *VAR_0)
{
 const char *VAR_1;
 char *VAR_2, *VAR_3, *VAR_4;

 VAR_1 = FUNC_6(VAR_0, '/');
 VAR_1 = ((VAR_1 == ((void*)0)) ? VAR_0 : VAR_1+1);
 VAR_2 = FUNC_8(VAR_1);
 VAR_4 = FUNC_6(VAR_2, '.');





 for (VAR_3 = VAR_2; *VAR_3 != '\000'; ++VAR_3) {
  if (FUNC_3(*VAR_3))
   *VAR_3 = FUNC_7(*VAR_3);
  else if (FUNC_4(*VAR_3) || *VAR_3 == '_')
                 ;
  else if (VAR_3 == VAR_2)
   *VAR_3 = '_';
  else if (FUNC_2(*VAR_3))
                                       ;
  else if (VAR_3 == VAR_4) {
   *VAR_3 = '\0';
   break;
  } else
   *VAR_3 = '_';
 }





 if (*VAR_2 == '_') {
  for (VAR_3 = VAR_2; *VAR_3 == '_'; ++VAR_3)
   ;
  FUNC_5(VAR_2, VAR_3);
 }
 VAR_3 = VAR_2;
 VAR_2 = FUNC_0(VAR_2, "_H_RPCGEN");
 FUNC_1(VAR_3);
 return (VAR_2);
}
