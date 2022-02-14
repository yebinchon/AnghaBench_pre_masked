
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,char const*,int) ;

__attribute__((used)) static const char*
FUNC_1(const char *VAR_1) {
 static char VAR_2[31];
 const char *VAR_3, *VAR_4;
 char *VAR_5;

 if (VAR_0)
  return (VAR_1);

 VAR_4 = VAR_2 + sizeof(VAR_2);
 for (VAR_3 = VAR_1, VAR_5 = VAR_2; VAR_5 < VAR_4; *VAR_5++ = *VAR_3++) {
  if (*VAR_3 == '\0') {
   *VAR_5 = '\0';
   break;
  } else if (*VAR_3 == '%' && *(VAR_3+1) == 's') {
   *VAR_5++ = '%';
   *VAR_5++ = 'h';
   *VAR_5++ = 's';
   FUNC_0(VAR_5, VAR_3+2, VAR_4 - VAR_5);
   return (VAR_2);
  }
 }
 return (VAR_2);
}
