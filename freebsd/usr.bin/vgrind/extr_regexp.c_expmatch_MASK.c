
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char VAR_0 ;

 char* FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char*) ;

 char VAR_1 ;
 char* FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (char*) ;
 int FUNC_7 (char*) ;

 int FUNC_8 (char*,int ,int ) ;
 int VAR_2 ;
 int FUNC_9 (char) ;
 char* VAR_3 ;
 int FUNC_10 (char*) ;
 int FUNC_11 (char*,char*,int) ;

char *
FUNC_12 (register char *VAR_4, register char *VAR_5, register char *VAR_6)
{
    register char *VAR_7;
    register char *VAR_8,*VAR_9;
    bool VAR_10;


    if (VAR_5 == ((void*)0))
 return (((void*)0));
    VAR_7 = VAR_5;
    VAR_10 = 0;


    while (*VAR_7) {
 switch (*VAR_7 & (129 | 128 | 130)) {


 case 128:
     VAR_10 = !FUNC_8 (VAR_4, FUNC_7(VAR_7), FUNC_5(VAR_7));
     if (VAR_10) {


  VAR_4 += FUNC_5(VAR_7);
  VAR_7 = FUNC_6(VAR_7);
     } else if (*VAR_7 & VAR_0) {


  VAR_7 = FUNC_6(VAR_7);
     } else if (*VAR_7 & VAR_1) {


  VAR_7 = FUNC_6(VAR_7);
  VAR_10 = 1;
     } else {


  return (((void*)0));
     }
     break;


 case 129:
     switch (FUNC_4(VAR_7)) {


     case '|':
  if (VAR_10)


      VAR_7 = FUNC_3(VAR_7);
  else


      VAR_7 = FUNC_2(VAR_7);
  break;


     case '(':
  VAR_8 = FUNC_12(VAR_4, FUNC_2(VAR_7), VAR_6);
  if (VAR_8 != ((void*)0)) {


      VAR_10 = 1;
      VAR_4 = VAR_8;
  } else if (*VAR_7 & VAR_0) {


      VAR_10 = 0;
  } else if (*VAR_7 & VAR_1) {


      VAR_10 = 1;
  } else {


      return (((void*)0));
  }
  VAR_7 = FUNC_3(VAR_7);
  break;
     }
     break;


 case 130:
     switch (FUNC_1(VAR_7)) {


     case 'p':





  VAR_9 = VAR_4;
  do {
      VAR_8 = FUNC_12(VAR_9, FUNC_0(VAR_7), VAR_6);
      if (VAR_8 != ((void*)0) && VAR_9 != VAR_4) {


   FUNC_11 (VAR_6, VAR_4, VAR_9 - VAR_4);
   VAR_6[VAR_9 - VAR_4] = '\0';
   return (VAR_8);
      } else if (VAR_8 != ((void*)0) && (*VAR_7 & VAR_1)) {


   return (VAR_8);
      } else if (VAR_8 != ((void*)0)) {


   return (((void*)0));
      }
      if (!(FUNC_9(*VAR_9) || *VAR_9 == '_' ||

     *VAR_9 == '~' ||

     (FUNC_10(VAR_9) > 1 && *VAR_9 == ':' && VAR_9[1] == ':' &&
      (VAR_9++, 1))))
   return (((void*)0));
      if (*VAR_9 == '\\')
   VAR_2 = VAR_2 ? 0 : 1;
      else
   VAR_2 = 0;
  } while (*VAR_9++);
  return (((void*)0));


     case 'a':





  VAR_9 = VAR_4;
  do {
      VAR_8 = FUNC_12(VAR_9, FUNC_0(VAR_7), VAR_6);
      if (VAR_8 != ((void*)0) && VAR_9 != VAR_4) {


   return (VAR_8);
      } else if (VAR_8 != ((void*)0) && (*VAR_7 & VAR_1)) {


   return (VAR_8);
      } else if (VAR_8 != ((void*)0)) {


   return (((void*)0));
      }
      if (*VAR_9 == '\\')
   VAR_2 = VAR_2 ? 0 : 1;
      else
   VAR_2 = 0;
  } while (*VAR_9++);
  return (((void*)0));


     case 'e':
  if (VAR_2)
      return(((void*)0));
  VAR_7 = FUNC_0(VAR_7);
  break;


     case 'd':
  VAR_8 = VAR_4;
  while (*VAR_4 == ' ' || *VAR_4 == '\t')
      VAR_4++;
  if (VAR_4 != VAR_8 || VAR_4 == VAR_3) {


      VAR_10 = 1;
      VAR_7 = FUNC_0(VAR_7);
  } else if (*VAR_4 == '\n' || *VAR_4 == '\0') {


      VAR_10 = 1;
      VAR_7 = FUNC_0(VAR_7);
  } else if (*VAR_7 & VAR_0) {


      VAR_10 = 0;
      VAR_7 = FUNC_0(VAR_7);
  } else if (*VAR_7 & VAR_1) {


      VAR_10 = 1;
      VAR_7 = FUNC_0(VAR_7);
  } else


      return (((void*)0));
  break;


     case '$':
  if (*VAR_4 == '\0' || *VAR_4 == '\n') {


      VAR_4++;
      VAR_10 = 1;
      VAR_7 = FUNC_0(VAR_7);
  } else if (*VAR_7 & VAR_0) {


      VAR_10 = 0;
      VAR_7 = FUNC_0(VAR_7);
  } else if (*VAR_7 & VAR_1) {


      VAR_10 = 1;
      VAR_7 = FUNC_0(VAR_7);
  } else


      return (((void*)0));
  break;


     case '^':
  if (VAR_4 == VAR_3) {


      VAR_10 = 1;
      VAR_7 = FUNC_0(VAR_7);
  } else if (*VAR_7 & VAR_0) {


      VAR_10 = 0;
      VAR_7 = FUNC_0(VAR_7);
  } else if (*VAR_7 & VAR_1) {


      VAR_10 = 1;
      VAR_7 = FUNC_0(VAR_7);
  } else


      return (((void*)0));
  break;


     case ')':
  return (VAR_4);
     }
     break;
 }
    }
    return (VAR_4);
}
