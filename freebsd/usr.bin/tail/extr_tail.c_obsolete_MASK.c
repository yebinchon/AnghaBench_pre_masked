
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int,char*,char*) ;
 char* FUNC_2 (size_t) ;
 int FUNC_3 (char*,char*) ;
 size_t FUNC_4 (char*) ;

__attribute__((used)) static void
FUNC_5(char *VAR_0[])
{
 char *VAR_1, *VAR_2, *VAR_3;
 size_t VAR_4;
 char *VAR_5;

 while ((VAR_1 = *++VAR_0)) {

  if (VAR_1[0] != '-') {
   if (VAR_1[0] != '+')
    return;
  } else if (VAR_1[1] == '-')
   return;

  switch(*++VAR_1) {

  case '0': case '1': case '2': case '3': case '4':
  case '5': case '6': case '7': case '8': case '9':


   VAR_4 = FUNC_4(*VAR_0);
   if ((VAR_5 = VAR_2 = FUNC_2(VAR_4 + 3)) == ((void*)0))
    FUNC_0(1, "malloc");
   *VAR_2++ = '-';






   VAR_3 = *VAR_0 + VAR_4 - 1;
   if (*VAR_3 == 'F' || *VAR_3 == 'f' || *VAR_3 == 'r') {
    *VAR_2++ = *VAR_3;
    *VAR_3-- = '\0';
   }
   switch(*VAR_3) {
   case 'b':
    *VAR_2++ = 'b';
    *VAR_3 = '\0';
    break;
   case 'c':
    *VAR_2++ = 'c';
    *VAR_3 = '\0';
    break;
   case 'l':
    *VAR_3 = '\0';

   case '0': case '1': case '2': case '3': case '4':
   case '5': case '6': case '7': case '8': case '9':
    *VAR_2++ = 'n';
    break;
   default:
    FUNC_1(1, "illegal option -- %s", *VAR_0);
   }
   *VAR_2++ = *VAR_0[0];
   (void)FUNC_3(VAR_2, VAR_1);
   *VAR_0 = VAR_5;
   continue;





  case 'b':
  case 'c':
  case 'n':
   if (!VAR_1[1])
    ++VAR_0;


  case 'F':
  case 'f':
  case 'r':
   continue;


  default:
   return;
  }
 }
}
