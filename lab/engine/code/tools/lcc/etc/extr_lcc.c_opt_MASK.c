
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ) ;
 char* FUNC_1 (int ) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 char** VAR_5 ;
 char* FUNC_2 (char*,char*) ;
 int * VAR_6 ;
 int FUNC_3 (char*,int ) ;
 char* FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,char*,char*) ;
 int FUNC_6 () ;
 int VAR_7 ;
 int * VAR_8 ;
 int * VAR_9 ;
 int FUNC_7 (char*) ;
 int VAR_10 ;
 char* VAR_11 ;
 char* VAR_12 ;
 char* FUNC_8 (char*,char,char) ;
 int VAR_13 ;
 int FUNC_9 (char*,char*) ;
 int FUNC_10 (char*,char*,int) ;
 int * FUNC_11 (char*,char*) ;
 int * VAR_14 ;
 char* VAR_15 ;
 int VAR_16 ;

__attribute__((used)) static void FUNC_12(char *VAR_17) {
 switch (VAR_17[1]) {
 case 'W':
  if (VAR_17[2] && VAR_17[3])
   switch (VAR_17[2]) {
   case 'o':
    if (FUNC_7(&VAR_17[3]))
     return;
    break;
   case 'p':
    VAR_10 = FUNC_0(&VAR_17[3], VAR_10);
    return;
   case 'f':
    if (FUNC_9(&VAR_17[3], "-C") || FUNC_7("-b")) {
     VAR_4 = FUNC_0(&VAR_17[3], VAR_4);
     return;
    }
    break;
   case 'a':
    VAR_2 = FUNC_0(&VAR_17[3], VAR_2);
    return;
   case 'l':
    VAR_9[0] = FUNC_0(&VAR_17[3], VAR_9[0]);
    return;
   }
  FUNC_5(VAR_13, "%s: %s ignored\n", VAR_11, VAR_17);
  return;
 case 'd':
  VAR_17[1] = 's';
  VAR_4 = FUNC_0(VAR_17, VAR_4);
  return;
 case 't':
  if (FUNC_10(VAR_17, "-tempdir=", 9) == 0)
   VAR_15 = VAR_17 + 9;
  else
   VAR_4 = FUNC_0(VAR_17, VAR_4);
  return;
 case 'p':
  if (FUNC_7(VAR_17))
   VAR_4 = FUNC_0(VAR_17, VAR_4);
  else
   FUNC_5(VAR_13, "%s: %s ignored\n", VAR_11, VAR_17);
  return;
 case 'D':
 case 'U':
 case 'I':
  VAR_10 = FUNC_0(VAR_17, VAR_10);
  return;
 case 'B':





  {
  static char *VAR_18;
  if (VAR_18)
   FUNC_3("-B overwrites earlier option", 0);
  VAR_18 = VAR_17 + 2;
  if (FUNC_11(VAR_5[1], "win32") != ((void*)0))
   VAR_5[0] = FUNC_2(FUNC_8(VAR_18, '/', '\\'), FUNC_2("rcc", FUNC_4(VAR_14[4])));
  else
   VAR_5[0] = FUNC_2(VAR_18, "rcc");
  if (VAR_18[0] == 0)
   FUNC_3("missing directory in -B option", 0);
  }
  return;
 case 'h':
  if (FUNC_9(VAR_17, "-help") == 0) {
   static int VAR_19 = 0;
 case '?':
   if (!VAR_19)
    FUNC_6();
   VAR_19 = 1;
   return;
  }

 case 's':
  if (FUNC_9(VAR_17,"-static") == 0) {
   if (!FUNC_7(VAR_17))
    FUNC_5(VAR_13, "%s: %s ignored\n", VAR_11, VAR_17);
   return;
  }

 }
 if (VAR_17[2] == 0)
  switch (VAR_17[1]) {
  case 'S':
   VAR_1++;
   return;
  case 'O':
   FUNC_5(VAR_13, "%s: %s ignored\n", VAR_11, VAR_17);
   return;
  case 'A': case 'n': case 'w': case 'P':
   VAR_4 = FUNC_0(VAR_17, VAR_4);
   return;
  case 'g': case 'b':
   if (FUNC_7(VAR_17))
    VAR_4 = FUNC_0(VAR_17[1] == 'g' ? "-g2" : VAR_17, VAR_4);
   else
    FUNC_5(VAR_13, "%s: %s ignored\n", VAR_11, VAR_17);
   return;
  case 'G':
   if (FUNC_7(VAR_17)) {
    VAR_4 = FUNC_0("-g3", VAR_4);
    VAR_9[0] = FUNC_0("-N", VAR_9[0]);
   } else
    FUNC_5(VAR_13, "%s: %s ignored\n", VAR_11, VAR_17);
   return;
  case 'E':
   VAR_0++;
   return;
  case 'c':
   VAR_3++;
   return;
  case 'N':
   if (FUNC_9(FUNC_1(VAR_6[0]), "gcc-cpp") == 0)
    VAR_10 = FUNC_0("-nostdinc", VAR_10);
   VAR_8[0] = 0;
   VAR_7 = 0;
   return;
  case 'v':
   if (VAR_16++ == 0) {
    if (FUNC_9(FUNC_1(VAR_6[0]), "gcc-cpp") == 0)
     VAR_10 = FUNC_0(VAR_17, VAR_10);
    VAR_4 = FUNC_0(VAR_17, VAR_4);
    FUNC_5(VAR_13, "%s %s\n", VAR_11, VAR_12);
   }
   return;
  }
 if (VAR_3 || VAR_1 || VAR_0)
  FUNC_5(VAR_13, "%s: %s ignored\n", VAR_11, VAR_17);
 else
  VAR_9[1] = FUNC_0(VAR_17, VAR_9[1]);
}
