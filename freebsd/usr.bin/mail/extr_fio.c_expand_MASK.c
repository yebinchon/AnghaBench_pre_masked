
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xname ;
struct stat {int dummy; } ;
typedef int cmdbuf ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 char* VAR_3 ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,char*,int) ;
 int FUNC_4 (int ,char*,char*) ;
 scalar_t__ FUNC_5 (char*,int) ;
 char* VAR_4 ;
 char* VAR_5 ;
 scalar_t__ FUNC_6 (int*) ;
 char* VAR_6 ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int,char*,int) ;
 char* FUNC_9 (char*) ;
 int FUNC_10 (char*,int,char*,char*,...) ;
 int FUNC_11 (char*,int ,int,int,char*,char*,int *) ;
 scalar_t__ FUNC_12 (char*,struct stat*) ;
 int VAR_7 ;
 scalar_t__ FUNC_13 (char*,char) ;
 int FUNC_14 (char*,char*) ;
 char* FUNC_15 (char*) ;
 scalar_t__ FUNC_16 (int) ;
 int VAR_8 ;
 int FUNC_17 (char*) ;

char *
FUNC_18(char *VAR_9)
{
 char VAR_10[VAR_1];
 char VAR_11[VAR_1];
 int VAR_12, VAR_13;
 char *VAR_14, *VAR_15;
 int VAR_16[2];
 struct stat VAR_17;







 switch (*VAR_9) {
 case '%':
  FUNC_3(VAR_9[1] ? VAR_9 + 1 : VAR_5, VAR_10, sizeof(VAR_10));
  return (FUNC_9(VAR_10));
 case '#':
  if (VAR_9[1] != 0)
   break;
  if (VAR_6[0] == 0) {
   FUNC_7("No previous file\n");
   return (((void*)0));
  }
  return (FUNC_9(VAR_6));
 case '&':
  if (VAR_9[1] == 0 && (VAR_9 = FUNC_15("MBOX")) == ((void*)0))
   VAR_9 = "~/mbox";

 }
 if (VAR_9[0] == '+' && FUNC_5(VAR_11, sizeof(VAR_11)) >= 0) {
  (void)FUNC_10(VAR_10, sizeof(VAR_10), "%s/%s", VAR_11, VAR_9 + 1);
  VAR_9 = FUNC_9(VAR_10);
 }

 if (VAR_9[0] == '~' && VAR_4 != ((void*)0) &&
     (VAR_9[1] == '/' || VAR_9[1] == '\0')) {
  (void)FUNC_10(VAR_10, sizeof(VAR_10), "%s%s", VAR_4, VAR_9 + 1);
  VAR_9 = FUNC_9(VAR_10);
 }
 if (!FUNC_14(VAR_9, "~{[*?$`'\"\\"))
  return (FUNC_9(VAR_9));
 if (FUNC_6(VAR_16) < 0) {
  FUNC_17("pipe");
  return (((void*)0));
 }
 (void)FUNC_10(VAR_11, sizeof(VAR_11), "echo %s", VAR_9);
 if ((VAR_15 = FUNC_15("SHELL")) == ((void*)0))
  VAR_15 = VAR_3;
 VAR_12 = FUNC_11(VAR_15, 0, -1, VAR_16[1], "-c", VAR_11, ((void*)0));
 if (VAR_12 < 0) {
  (void)FUNC_2(VAR_16[0]);
  (void)FUNC_2(VAR_16[1]);
  return (((void*)0));
 }
 (void)FUNC_2(VAR_16[1]);
 VAR_13 = FUNC_8(VAR_16[0], VAR_10, VAR_0);
 (void)FUNC_2(VAR_16[0]);
 if (FUNC_16(VAR_12) < 0 && FUNC_0(VAR_8) &&
     FUNC_1(VAR_8) != VAR_2) {
  FUNC_4(VAR_7, "\"%s\": Expansion failed.\n", VAR_9);
  return (((void*)0));
 }
 if (VAR_13 < 0) {
  FUNC_17("read");
  return (((void*)0));
 }
 if (VAR_13 == 0) {
  FUNC_4(VAR_7, "\"%s\": No match.\n", VAR_9);
  return (((void*)0));
 }
 if (VAR_13 == VAR_0) {
  FUNC_4(VAR_7, "\"%s\": Expansion buffer overflow.\n", VAR_9);
  return (((void*)0));
 }
 VAR_10[VAR_13] = '\0';
 for (VAR_14 = &VAR_10[VAR_13-1]; *VAR_14 == '\n' && VAR_14 > VAR_10; VAR_14--)
  ;
 VAR_14[1] = '\0';
 if (FUNC_13(VAR_10, ' ') && FUNC_12(VAR_10, &VAR_17) < 0) {
  FUNC_4(VAR_7, "\"%s\": Ambiguous.\n", VAR_9);
  return (((void*)0));
 }
 return (FUNC_9(VAR_10));
}
