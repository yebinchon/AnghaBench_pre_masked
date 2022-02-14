
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DIR ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 char* FUNC_3 (int ) ;
 int FUNC_4 (char*,int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_5 (int,char**,char*) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 char* VAR_5 ;
 scalar_t__ FUNC_13 (char*,int) ;
 int * FUNC_14 (char*) ;
 char* VAR_6 ;
 int VAR_7 ;
 int FUNC_15 (char*,...) ;
 int FUNC_16 (char*) ;
 int FUNC_17 (char*) ;
 int FUNC_18 (int ,char*) ;
 int FUNC_19 (scalar_t__) ;
 int VAR_8 ;
 int FUNC_20 () ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_21 () ;

int
FUNC_22(int VAR_13, char **VAR_14)
{
 int VAR_15;
 char *VAR_16 = ((void*)0);
 char *VAR_17 = ((void*)0);
 char *VAR_18 = ((void*)0);
 DIR *VAR_19;

 FUNC_6();
 FUNC_7();
 FUNC_8();
 FUNC_9();
 FUNC_10();
 FUNC_11();
 FUNC_12();

 VAR_12 = 0;

 (void) FUNC_18(VAR_1, "");

 while ((VAR_15 = FUNC_5(VAR_13, VAR_14, "blw:i:cf:u:vUD")) != -1) {
  switch (VAR_15) {
  case 'D':
   VAR_2 = 1;
   break;
  case 'b':
  case 'l':
   if (VAR_3 != 0)
    FUNC_20();
   VAR_3 = VAR_15 == 'b' ? 4321 : 1234;
   break;
  case 'v':
   VAR_9++;
   break;
  case 'i':
   VAR_16 = VAR_6;
   break;
  case 'u':
   FUNC_17(VAR_6);
   break;
  case 'f':
   VAR_17 = VAR_6;
   break;
  case 'U':
   VAR_8++;
   break;
  case 'c':
   VAR_11++;
   break;
  case 'w':
   VAR_18 = VAR_6;
   break;
  case '?':
   FUNC_20();
   break;
  }
 }

 if ((VAR_13 - 1) != (VAR_7)) {
  FUNC_20();
 }
 VAR_5 = VAR_14[VAR_13 - 1];
 if (VAR_9) {
  (void) FUNC_15("Processing locale %s.\n", VAR_5);
 }

 if (VAR_17) {
  if (VAR_9)
   (void) FUNC_15("Loading charmap %s.\n", VAR_17);
  FUNC_16(VAR_17);
  (void) FUNC_21();
 }

 if (VAR_18) {
  if (VAR_9)
   (void) FUNC_15("Loading widths %s.\n", VAR_18);
  FUNC_16(VAR_18);
  (void) FUNC_21();
 }

 if (VAR_9) {
  (void) FUNC_15("Loading POSIX portable characters.\n");
 }
 FUNC_0();

 if (VAR_16) {
  FUNC_16(VAR_16);
 } else {
  FUNC_16(((void*)0));
 }


 if (!VAR_2) {
  while ((VAR_19 = FUNC_14(VAR_5)) == ((void*)0)) {
   if ((VAR_4 != VAR_0) ||
       (FUNC_13(VAR_5, 0755) < 0)) {
    FUNC_4("%s", FUNC_19(VAR_4));
   }
  }
  (void) FUNC_2(VAR_19);
  (void) FUNC_13(FUNC_3(FUNC_1()), 0755);
 }

 (void) FUNC_21();
 if (VAR_9) {
  (void) FUNC_15("All done.\n");
 }
 return (VAR_10 ? 1 : 0);
}
