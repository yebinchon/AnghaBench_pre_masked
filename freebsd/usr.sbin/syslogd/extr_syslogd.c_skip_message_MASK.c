
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char const*,char const*) ;
 int FUNC_1 (char const*) ;
 char* FUNC_2 (char const*,char const*) ;

__attribute__((used)) static int
FUNC_3(const char *VAR_0, const char *VAR_1, int VAR_2)
{
 const char *VAR_3;
 char VAR_4, VAR_5;
 int VAR_6 = 0;


 if (VAR_1 == ((void*)0))
  return 0;
 switch (*VAR_1) {
 case '-':
  VAR_6 = 1;

 case '+':
  VAR_1++;
  break;
 default:
  break;
 }
 if (VAR_2)
  VAR_3 = FUNC_2 (VAR_1, VAR_0);
 else
  VAR_3 = FUNC_0 (VAR_1, VAR_0);

 if (VAR_3 != ((void*)0)) {
  VAR_4 = (VAR_3 == VAR_1 ? ',' : *(VAR_3 - 1));
  VAR_5 = *(VAR_3 + FUNC_1 (VAR_0));

  if (VAR_4 == ',' && (VAR_5 == '\0' || VAR_5 == ','))


   return VAR_6;
 }



 return !VAR_6;
}
