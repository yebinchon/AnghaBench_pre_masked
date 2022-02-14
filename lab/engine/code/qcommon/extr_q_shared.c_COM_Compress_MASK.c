
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ qboolean ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

int FUNC_0( char *VAR_2 ) {
 char *VAR_3, *VAR_4;
 int VAR_5;
 qboolean VAR_6 = VAR_0, VAR_7 = VAR_0;

 VAR_3 = VAR_4 = VAR_2;
 if (VAR_3) {
  while ((VAR_5 = *VAR_3) != 0) {

   if ( VAR_5 == '/' && VAR_3[1] == '/' ) {
    while (*VAR_3 && *VAR_3 != '\n') {
     VAR_3++;
    }

   } else if ( VAR_5 == '/' && VAR_3[1] == '*' ) {
    while ( *VAR_3 && ( *VAR_3 != '*' || VAR_3[1] != '/' ) )
     VAR_3++;
    if ( *VAR_3 )
     VAR_3 += 2;

   } else if ( VAR_5 == '\n' || VAR_5 == '\r' ) {
    VAR_6 = VAR_1;
    VAR_3++;

   } else if ( VAR_5 == ' ' || VAR_5 == '\t') {
    VAR_7 = VAR_1;
    VAR_3++;

   } else {

    if (VAR_6) {
     *VAR_4++ = '\n';
     VAR_6 = VAR_0;
     VAR_7 = VAR_0;
    } if (VAR_7) {
     *VAR_4++ = ' ';
     VAR_7 = VAR_0;
    }


    if (VAR_5 == '"') {
     *VAR_4++ = VAR_5;
     VAR_3++;
     while (1) {
      VAR_5 = *VAR_3;
      if (VAR_5 && VAR_5 != '"') {
       *VAR_4++ = VAR_5;
       VAR_3++;
      } else {
       break;
      }
     }
     if (VAR_5 == '"') {
      *VAR_4++ = VAR_5;
      VAR_3++;
     }
    } else {
     *VAR_4 = VAR_5;
     VAR_4++;
     VAR_3++;
    }
   }
  }

  *VAR_4 = 0;
 }
 return VAR_4 - VAR_2;
}
