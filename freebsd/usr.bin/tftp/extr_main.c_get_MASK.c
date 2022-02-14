
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*,int,int ) ;
 int FUNC_2 (char*) ;
 char* VAR_2 ;
 int FUNC_3 (char*) ;
 int VAR_3 ;
 char** VAR_4 ;
 char* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (int ,int ,int,char*,char*) ;
 int FUNC_6 (char*,int *) ;
 int VAR_8 ;
 int FUNC_7 (char*,char*) ;
 int FUNC_8 (char*) ;
 char* FUNC_9 (char*,char) ;
 char* FUNC_10 (char*) ;
 scalar_t__ VAR_9 ;
 int FUNC_11 (char*,char*) ;

__attribute__((used)) static void
FUNC_12(int VAR_10, char *VAR_11[])
{
 int VAR_12;
 int VAR_13;
 char *VAR_14;
 char *VAR_15;
 char VAR_16[VAR_0];

 if (VAR_10 < 2) {
  FUNC_7(VAR_16, "get ");
  FUNC_4("(files) ");
  FUNC_1(&VAR_16[FUNC_8(VAR_16)], sizeof VAR_16 - FUNC_8(VAR_16), VAR_8);
  FUNC_3(VAR_16);
  VAR_10 = VAR_3;
  VAR_11 = VAR_4;
 }
 if (VAR_10 < 2) {
  FUNC_2(VAR_11[0]);
  return;
 }
 if (!VAR_1) {
  for (VAR_13 = 1; VAR_13 < VAR_10 ; VAR_13++)
   if (FUNC_9(VAR_11[VAR_13], ':') == 0) {
    FUNC_4("No remote host specified and "
        "no host given for file '%s'\n", VAR_11[VAR_13]);
    FUNC_2(VAR_11[0]);
    return;
   }
 }
 for (VAR_13 = 1; VAR_13 < VAR_10 ; VAR_13++) {
  VAR_15 = FUNC_9(VAR_11[VAR_13], ':');
  if (VAR_15 == ((void*)0))
   VAR_15 = VAR_11[VAR_13];
  else {
   char *VAR_17;

   *VAR_15++ = 0;
   VAR_17 = VAR_11[VAR_13];
   if (VAR_17[0] == '[' && VAR_17[FUNC_8(VAR_17) - 1] == ']') {
    VAR_17[FUNC_8(VAR_17) - 1] = '\0';
    VAR_17++;
   }
   FUNC_6(VAR_17, ((void*)0));
   if (!VAR_1)
    continue;
  }
  if (VAR_10 < 4) {
   VAR_14 = VAR_10 == 3 ? VAR_11[2] : FUNC_10(VAR_15);
   VAR_12 = FUNC_0(VAR_14, 0644);
   if (VAR_12 < 0) {
    FUNC_11("%s", VAR_14);
    return;
   }
   if (VAR_9)
    FUNC_4("getting from %s:%s to %s [%s]\n",
        VAR_2, VAR_15, VAR_14, VAR_5);
   FUNC_5(VAR_6, VAR_7, VAR_12, VAR_15, VAR_5);
   break;
  }
  VAR_14 = FUNC_10(VAR_15);
  VAR_12 = FUNC_0(VAR_14, 0644);
  if (VAR_12 < 0) {
   FUNC_11("%s", VAR_14);
   continue;
  }
  if (VAR_9)
   FUNC_4("getting from %s:%s to %s [%s]\n",
       VAR_2, VAR_15, VAR_14, VAR_5);
  FUNC_5(VAR_6, VAR_7, VAR_12, VAR_15, VAR_5);
 }
}
