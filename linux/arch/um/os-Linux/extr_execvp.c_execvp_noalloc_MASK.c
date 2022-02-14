
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char const*,char* const*) ;
 char* FUNC_1 (char*) ;
 char* FUNC_2 (char*,char const*,int) ;
 char* FUNC_3 (char const*,char) ;
 int FUNC_4 (char const*) ;

int FUNC_5(char *VAR_1, const char *VAR_2, char *const VAR_3[])
{
 if (*VAR_2 == '\0') {
  return -132;
 }

 if (FUNC_3 (VAR_2, '/') != ((void*)0)) {

  FUNC_0(VAR_2, VAR_3);
 } else {
  int VAR_4;
  size_t VAR_5, VAR_6;
  char *VAR_7, *VAR_8;
  char *VAR_9 = FUNC_1("PATH");
  if (VAR_9 == ((void*)0))
   VAR_9 = ":/bin:/usr/bin";

  VAR_5 = FUNC_4(VAR_2) + 1;
  VAR_6 = FUNC_4(VAR_9);

  VAR_7 = FUNC_2(VAR_1 + VAR_6 + 1, VAR_2, VAR_5);

  *--VAR_7 = '/';

  VAR_4 = 0;
  VAR_8 = VAR_9;
  do {
   char *VAR_10;

   VAR_9 = VAR_8;


   VAR_8 = FUNC_3(VAR_9, ':');
   if (!VAR_8)
    VAR_8 = FUNC_3(VAR_9, '\0');

   if (VAR_8 == VAR_9)


    VAR_10 = VAR_7 + 1;
   else
    VAR_10 = FUNC_2(VAR_7 - (VAR_8 - VAR_9), VAR_9, VAR_8 - VAR_9);


   FUNC_0(VAR_10, VAR_3);






   switch (VAR_0) {
    case 134:



     VAR_4 = 1;
    case 132:
    case 129:
    case 130:



    case 133:
    case 128:



    case 131:




     break;

    default:



     return -VAR_0;
   }
  } while (*VAR_8++ != '\0');


  if (VAR_4)


   return -134;
 }


 return -VAR_0;
}
