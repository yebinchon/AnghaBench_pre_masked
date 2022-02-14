
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char**) ;
 int FUNC_1 (int ,char*,...) ;
 char** FUNC_2 (int) ;
 int FUNC_3 (char*) ;
 char* VAR_0 ;
 char** FUNC_4 (char**,int) ;
 int FUNC_5 (char*,char**) ;
 int VAR_1 ;
 char* FUNC_6 (char*,char) ;
 char* FUNC_7 (char*,...) ;
 char* FUNC_8 (char*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_9(char **VAR_3) {
 int VAR_4, VAR_5 = 0;
 static char **VAR_6;
 static int VAR_7;
 char *VAR_8;

 for (VAR_4 = 0; VAR_3[VAR_4] != ((void*)0); VAR_4++)
  ;
 if (VAR_4 + 1 > VAR_7) {
  VAR_7 = VAR_4 + 1;
  if (VAR_6 == ((void*)0))
   VAR_6 = FUNC_2(VAR_7*sizeof *VAR_6);
  else
   VAR_6 = FUNC_4(VAR_6, VAR_7*sizeof *VAR_6);
  FUNC_0(VAR_6);
 }
 for (VAR_4 = 0; VAR_5 == 0 && VAR_3[VAR_4] != ((void*)0); ) {
  int VAR_9 = 0;
  char *VAR_10 = ((void*)0);
  for ( ; VAR_3[VAR_4] != ((void*)0) && (VAR_10 = FUNC_6(VAR_3[VAR_4], '\n')) == ((void*)0); VAR_4++)
   VAR_6[VAR_9++] = VAR_3[VAR_4];
  if (VAR_10 != ((void*)0)) {
   if (VAR_10 > VAR_3[VAR_4])
    VAR_6[VAR_9++] = FUNC_7("%.*s", VAR_10 - VAR_3[VAR_4], VAR_3[VAR_4]);
   if (VAR_10[1] != '\0')
    VAR_3[VAR_4] = VAR_10 + 1;
   else
    VAR_4++;
  }
  VAR_6[VAR_9] = ((void*)0);
  VAR_8 = FUNC_8( VAR_6[0] );
  VAR_6[0] = FUNC_7( "\"%s\"", VAR_6[0] );
  if (VAR_2 > 0) {
   int VAR_11;
   FUNC_1(VAR_1, "%s", VAR_6[0]);
   for (VAR_11 = 1; VAR_6[VAR_11] != ((void*)0); VAR_11++)
    FUNC_1(VAR_1, " %s", VAR_6[VAR_11]);
   FUNC_1(VAR_1, "\n");
  }
  if (VAR_2 < 2)
   VAR_5 = FUNC_5(VAR_8, VAR_6);
  if (VAR_5 == -1) {
   FUNC_1(VAR_1, "%s: ", VAR_0);
   FUNC_3(VAR_6[0]);
  }
 }
 return VAR_5;
}
