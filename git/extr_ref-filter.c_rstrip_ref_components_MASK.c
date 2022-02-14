
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char const*,char) ;
 char const* FUNC_2 (char const*) ;

__attribute__((used)) static const char *FUNC_3(const char *VAR_0, int VAR_1)
{
 long VAR_2 = VAR_1;
 const char *VAR_3 = FUNC_2(VAR_0);
 const char *VAR_4 = VAR_3;

 if (VAR_1 < 0) {
  int VAR_5;
  const char *VAR_6 = VAR_0;


  for (VAR_5 = 0; VAR_6[VAR_5]; VAR_6[VAR_5] == '/' ? VAR_5++ : *VAR_6++)
   ;






  VAR_2 = VAR_5 + VAR_1 + 1;
 }

 while (VAR_2-- > 0) {
  char *VAR_7 = FUNC_1(VAR_3, '/');
  if (VAR_7 == ((void*)0)) {
   FUNC_0((char *)VAR_4);
   return FUNC_2("");
  } else
   VAR_7[0] = '\0';
 }
 return VAR_3;
}
