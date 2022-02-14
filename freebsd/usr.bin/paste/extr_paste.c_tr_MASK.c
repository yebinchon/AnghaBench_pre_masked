
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char wchar_t ;


 int FUNC_0 (int,char*) ;

__attribute__((used)) static int
FUNC_1(wchar_t *VAR_0)
{
 int VAR_1;
 wchar_t VAR_2, *VAR_3;

 for (VAR_3 = VAR_0, VAR_1 = 0; (VAR_2 = *VAR_3++); ++VAR_0, ++VAR_1)
  if (VAR_2 == '\\')
   switch(VAR_2 = *VAR_3++) {
   case 'n':
    *VAR_0 = '\n';
    break;
   case 't':
    *VAR_0 = '\t';
    break;
   case '0':
    *VAR_0 = '\0';
    break;
   default:
    *VAR_0 = VAR_2;
    break;
  } else
   *VAR_0 = VAR_2;

 if (!VAR_1)
  FUNC_0(1, "no delimiters specified");
 return(VAR_1);
}
