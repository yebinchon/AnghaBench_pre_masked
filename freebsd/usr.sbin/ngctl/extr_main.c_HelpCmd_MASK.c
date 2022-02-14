
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ngcmd {char const* cmd; char* desc; char** aliases; char* help; } ;
typedef int buf ;


 int VAR_0 ;
 struct ngcmd* FUNC_0 (char*) ;
 int VAR_1 ;
 struct ngcmd** VAR_2 ;
 int FUNC_1 (char const) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char*,int,char*,char const*) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static int
FUNC_5(int VAR_3, char **VAR_4)
{
 const struct ngcmd *VAR_5;
 int VAR_6;

 switch (VAR_3) {
 case 0:
 case 1:

  FUNC_2("Available commands:\n");
  for (VAR_6 = 0; VAR_2[VAR_6] != ((void*)0); VAR_6++) {
   char *VAR_7, VAR_8[100];

   VAR_5 = VAR_2[VAR_6];
   FUNC_3(VAR_8, sizeof(VAR_8), "%s", VAR_5->cmd);
   for (VAR_7 = VAR_8; *VAR_7 != '\0' && !FUNC_1(*VAR_7); VAR_7++);
   *VAR_7 = '\0';
   FUNC_2("  %-10s %s\n", VAR_8, VAR_5->desc);
  }
  return (VAR_0);
 default:

  if ((VAR_5 = FUNC_0(VAR_4[1])) != ((void*)0)) {
   FUNC_2("usage:    %s\n", VAR_5->cmd);
   if (VAR_5->aliases[0] != ((void*)0)) {
    int VAR_9 = 0;

    FUNC_2("Aliases:  ");
    while (1) {
     FUNC_2("%s", VAR_5->aliases[VAR_9++]);
     if (VAR_9 == VAR_1
         || VAR_5->aliases[VAR_9] == ((void*)0)) {
      FUNC_2("\n");
      break;
     }
     FUNC_2(", ");
    }
   }
   FUNC_2("Summary:  %s\n", VAR_5->desc);
   if (VAR_5->help != ((void*)0)) {
    const char *VAR_10;
    char VAR_11[65];
    int VAR_12, VAR_13, VAR_14;

    FUNC_2("Description:\n");
    for (VAR_10 = VAR_5->help; *VAR_10 != '\0'; VAR_10 += VAR_13) {
     while (FUNC_1(*VAR_10))
      VAR_10++;
     VAR_12 = FUNC_3(VAR_11,
         sizeof(VAR_11), "%s", VAR_10);
     VAR_13 = FUNC_4(VAR_11);
     VAR_14 = VAR_13 == VAR_12;
     if (!VAR_14) {
      while (VAR_13 > 0
          && !FUNC_1(VAR_11[VAR_13-1]))
       VAR_11[--VAR_13] = '\0';
     }
     FUNC_2("  %s\n", VAR_11);
    }
   }
  }
 }
 return (VAR_0);
}
