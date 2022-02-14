
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct passwd {char* pw_name; } ;
typedef int buf ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 int FUNC_0 (int,char*,...) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (char*,int,int *) ;
 int * FUNC_4 (char const*,char*) ;
 char* FUNC_5 (char*) ;
 int FUNC_6 (int,char**,char*) ;
 struct passwd* FUNC_7 (int ) ;
 int FUNC_8 () ;
 scalar_t__ FUNC_9 (char*,char*) ;
 void* VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_10 (char*,char*,...) ;
 int FUNC_11 (char*,int,char*,char*,char const*) ;
 int * VAR_5 ;
 scalar_t__ FUNC_12 (char const*,char*) ;
 int FUNC_13 (char*,char*,int) ;
 char FUNC_14 (char) ;
 int FUNC_15 () ;

int
FUNC_16(int VAR_6, char **VAR_7)
{
 FILE *VAR_8;
 struct passwd *VAR_9;
 int VAR_10, VAR_11, VAR_12;
 const char *VAR_13;
 char *VAR_14, *VAR_15;



 char VAR_16[VAR_0];


 VAR_13 = VAR_14 = ((void*)0);
 VAR_11 = -1;
 while ((VAR_10 = FUNC_6(VAR_6, VAR_7, "cf:s:")) != -1)
  switch (VAR_10) {
  case 'c':
   VAR_11 = 0;
   break;
  case 'f':
   VAR_13 = VAR_3;
   break;
  case 's':
   VAR_14 = VAR_3;
   for (VAR_15 = VAR_14; *VAR_15; ++VAR_15)
    *VAR_15 = FUNC_14(*VAR_15);
   break;
  case '?':
  default:
   FUNC_15();
  }
 VAR_6 -= VAR_4;
 VAR_7 += VAR_4;

 if (VAR_13 == ((void*)0)) {
  if (VAR_6) {
   (void)FUNC_11(VAR_16, sizeof(VAR_16), "%s/%s", VAR_2, *VAR_7);
   VAR_13 = VAR_16;
  } else {
   if (!(VAR_13 = FUNC_5("MAIL"))) {
    if (!(VAR_9 = FUNC_7(FUNC_8())))
     FUNC_0(1, "no password file entry for you");
    VAR_13 = VAR_9->pw_name;
    (void)FUNC_11(VAR_16, sizeof(VAR_16),
        "%s/%s", VAR_2, VAR_13);
    VAR_13 = VAR_16;
   }
  }
 }


 if (FUNC_12(VAR_13, "-") == 0) {
  VAR_8 = VAR_5;
 }
 else if ((VAR_8 = FUNC_4(VAR_13, "r")) == ((void*)0)) {
  FUNC_0(1, "can't read %s", VAR_13);
 }
 for (VAR_12 = 1; FUNC_3(VAR_16, sizeof(VAR_16), VAR_8);) {
  if (*VAR_16 == '\n') {
   VAR_12 = 1;
   continue;
  }
  if (VAR_12 && !FUNC_13(VAR_16, "From ", 5) &&
      (!VAR_14 || FUNC_9(VAR_16 + 5, VAR_14))) {
   if (VAR_11 != -1)
    VAR_11++;
   else
    FUNC_10("%s", VAR_16);
  }
  VAR_12 = 0;
 }
 if (VAR_11 != -1)
  FUNC_10("There %s %d message%s in your incoming mailbox.\n",
      VAR_11 == 1 ? "is" : "are", VAR_11, VAR_11 == 1 ? "" : "s");
 FUNC_2(VAR_8);
 FUNC_1(0);
}
