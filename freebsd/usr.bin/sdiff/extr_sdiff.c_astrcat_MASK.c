
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,char*) ;
 char* FUNC_1 (char*,size_t) ;
 char* FUNC_2 (char const*) ;
 int FUNC_3 (char*,char const*,size_t) ;
 int FUNC_4 (char*,char*,size_t) ;
 size_t FUNC_5 (char const*) ;

__attribute__((used)) static void
FUNC_6(char **VAR_0, const char *VAR_1)
{

 static size_t VAR_2 = 0;
 size_t VAR_3;




 static const char *VAR_4 = ((void*)0);
 char *VAR_5;




 if (!*VAR_0) {
  if (!(*VAR_0 = FUNC_2(VAR_1)))
   FUNC_0(2, "astrcat");


  VAR_2 = FUNC_5(*VAR_0);
  VAR_4 = *VAR_0;

  return;
 }
 if (VAR_4 != *VAR_0) {
  VAR_2 = FUNC_5(*VAR_0);
  VAR_4 = *VAR_0;
 }


 VAR_3 = VAR_2 + 1 + FUNC_5(VAR_1) + 1;


 VAR_5 = FUNC_1(*VAR_0, VAR_3);
 if (VAR_5 == ((void*)0))
  FUNC_0(2, "astrcat");
 *VAR_0 = VAR_5;



 FUNC_4(*VAR_0 + VAR_2, "\n", VAR_3 - VAR_2);
 FUNC_3(*VAR_0 + VAR_2, VAR_1, VAR_3 - VAR_2);



 VAR_2 = VAR_3 - 1;
 VAR_4 = *VAR_0;
}
