
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int,char*,...) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (char*,int,int *) ;
 int * FUNC_5 (char*,char*) ;
 char* FUNC_6 (char*,char) ;

void
FUNC_7(char *VAR_1)
{
    int VAR_2, VAR_3;
    char *VAR_4, *VAR_5, VAR_6;
    char VAR_7 [VAR_0];
    FILE *VAR_8;

    VAR_8 = FUNC_5 (VAR_1, "r");
    if (VAR_8 == ((void*)0))
 FUNC_2(1, "%s -- open failed: %m", VAR_1);

    VAR_2 = 0;
    VAR_3 = 0;

    while (FUNC_4(VAR_7, VAR_0, VAR_8) != ((void*)0)) {
 VAR_4 = FUNC_6 (VAR_7, '\n');
 if (VAR_4)
     *VAR_4 = '\0';

 VAR_2++;
 VAR_4 = VAR_7;



        if ( *VAR_4 == '#' )
     continue;

 while (*VAR_4 != '\0') {
     if (*VAR_4 == ' ' || *VAR_4 == '\t') {
  ++VAR_4;
  continue;
     }

     if (*VAR_4 == '"' || *VAR_4 == '\'') {
  VAR_6 = *VAR_4++;
  VAR_5 = VAR_4;
  while (*VAR_4 != VAR_6) {
      if (*VAR_4 == '\0')
   FUNC_2(1, "unterminated quote (line %d)", VAR_2);

      if (*VAR_4++ == '\\') {
   if (*VAR_4 != '\0')
       ++VAR_4;
      }
  }
     }
     else {
  VAR_5 = VAR_4;
  while (*VAR_4 != '\0' && *VAR_4 != ' ' && *VAR_4 != '\t')
      ++VAR_4;
     }

     if (*VAR_4 != '\0')
  *VAR_4++ = '\0';

     if (VAR_3)
  FUNC_1 (VAR_5);
     else
  FUNC_0 (VAR_5);
     VAR_3 = !VAR_3;
 }
    }
    FUNC_3 (VAR_8);
}
