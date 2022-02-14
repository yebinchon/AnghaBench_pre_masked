
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 char* VAR_6 ;
 int FUNC_0 (char const*,int ) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (char const*,int) ;
 int FUNC_3 (int ,int*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 char* VAR_7 ;
 int FUNC_6 (int,char*) ;
 int FUNC_7 (char*,char**) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,char*,...) ;
 char* FUNC_11 (char*) ;
 int FUNC_12 (int ) ;
 char* VAR_8 ;
 scalar_t__ FUNC_13 () ;
 int FUNC_14 (char*,char*) ;
 int FUNC_15 (char*,int,char*,char*) ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_16 (char*,char*) ;

int
FUNC_17(int VAR_11, char *VAR_12[])
{
 char VAR_13[VAR_3];
 const char *VAR_14;
 int VAR_15;
 bool VAR_16, VAR_17, VAR_18;

 VAR_16 = 0;
 VAR_17 = 0;
 VAR_14 = ((void*)0);
 VAR_18 = 0;

 FUNC_15(VAR_13, VAR_3, "%s/sbin/pkg",
     FUNC_11("LOCALBASE") ? FUNC_11("LOCALBASE") : VAR_6);

 if (VAR_11 > 1 && FUNC_16(VAR_12[1], "bootstrap") == 0) {
  VAR_16 = 1;
  if (VAR_11 == 3 && FUNC_16(VAR_12[2], "-f") == 0)
   VAR_17 = 1;
 }

 if ((VAR_16 && VAR_17) || FUNC_0(VAR_13, VAR_5) == -1) {





  if (VAR_12[1] != ((void*)0) && FUNC_16(VAR_12[1], "-N") == 0)
   FUNC_6(VAR_1, "pkg is not installed");

  FUNC_5();

  if (VAR_11 > 1 && FUNC_16(VAR_12[1], "add") == 0) {
   if (VAR_11 > 2 && FUNC_16(VAR_12[2], "-f") == 0) {
    VAR_17 = 1;
    VAR_14 = VAR_12[3];
   } else
    VAR_14 = VAR_12[2];
   if (VAR_14 == ((void*)0)) {
    FUNC_10(VAR_9, "Path to pkg.txz required\n");
    FUNC_8(VAR_1);
   }
   if (FUNC_0(VAR_14, VAR_4) == -1) {
    FUNC_10(VAR_9, "No such file: %s\n", VAR_14);
    FUNC_8(VAR_1);
   }
   if (FUNC_2(VAR_14, VAR_17) != 0)
    FUNC_8(VAR_1);
   FUNC_8(VAR_2);
  }





  FUNC_3(VAR_0, &VAR_18);
  if (!VAR_18) {
   for (VAR_15 = 1; VAR_15 < VAR_11; VAR_15++) {
    if (FUNC_16(VAR_12[VAR_15], "-y") == 0 ||
        FUNC_16(VAR_12[VAR_15], "--yes") == 0) {
     VAR_18 = 1;
     break;
    }
   }
  }
  if (!VAR_18) {
   if (!FUNC_12(FUNC_9(VAR_10))) {
    FUNC_10(VAR_9, "%s", VAR_8);
    FUNC_8(VAR_1);
   }

   FUNC_14("%s", VAR_7);
   if (FUNC_13() == 0)
    FUNC_8(VAR_1);
  }
  if (FUNC_1(VAR_17) != 0)
   FUNC_8(VAR_1);
  FUNC_4();

  if (VAR_16)
   FUNC_8(VAR_2);
 } else if (VAR_16) {
  FUNC_14("pkg already bootstrapped at %s\n", VAR_13);
  FUNC_8(VAR_2);
 }

 FUNC_7(VAR_13, VAR_12);


 return (VAR_1);
}
