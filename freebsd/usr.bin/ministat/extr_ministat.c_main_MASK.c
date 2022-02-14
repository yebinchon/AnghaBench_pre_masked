
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct winsize {int ws_col; } ;
struct dataset {char* name; } ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (struct dataset*) ;
 int FUNC_1 () ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct dataset*,int) ;
 struct dataset* FUNC_3 (int *,char const*,int,char const*) ;
 int FUNC_4 (struct dataset*,struct dataset*,int) ;
 int VAR_3 ;
 int FUNC_5 (int,int,int) ;
 int VAR_4 ;
 int FUNC_6 (struct dataset*,int) ;
 int FUNC_7 () ;
 int FUNC_8 (char*) ;
 scalar_t__ FUNC_9 () ;
 scalar_t__ FUNC_10 () ;
 scalar_t__ FUNC_11 (int ,int ) ;
 int FUNC_12 (int,char*,...) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int * FUNC_16 (char*,char*) ;
 char* FUNC_17 (char*) ;
 int FUNC_18 (int,char**,char*) ;
 int FUNC_19 (int ,int ,struct winsize*) ;
 scalar_t__ FUNC_20 (int ) ;
 char* VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_21 (char*,int,char*) ;
 int * VAR_7 ;
 int FUNC_22 (char*,char*) ;
 double FUNC_23 (char*,char**) ;
 int FUNC_24 (char*,char**,int) ;
 double* VAR_8 ;
 int* VAR_9 ;
 int FUNC_25 (char*) ;

int
FUNC_26(int VAR_10, char **VAR_11)
{
 const char *VAR_12[VAR_1 - 1];
 struct dataset *VAR_13[VAR_1 - 1];
 FILE *VAR_14[VAR_1 - 1];
 int VAR_15;
 double VAR_16;
 const char *VAR_17 = " \t";
 char *VAR_18;
 int VAR_19, VAR_20, VAR_21;
 int VAR_22 = 1;
 int VAR_23 = 0;
 int VAR_24 = 0;
 int VAR_25 = 74;
 int VAR_26 = 0;

 if (FUNC_20(VAR_3)) {
  struct winsize VAR_27;

  if ((VAR_18 = FUNC_17("COLUMNS")) != ((void*)0) && *VAR_18 != '\0')
   VAR_25 = FUNC_8(VAR_18);
  else if (FUNC_19(VAR_3, VAR_4, &VAR_27) != -1 &&
    VAR_27.ws_col > 0)
   VAR_25 = VAR_27.ws_col - 2;
 }

 VAR_21 = -1;
 while ((VAR_19 = FUNC_18(VAR_10, VAR_11, "AC:c:d:snw:")) != -1)
  switch (VAR_19) {
  case 'A':
   VAR_26 = 1;
   break;
  case 'C':
   VAR_22 = FUNC_24(VAR_5, &VAR_18, 10);
   if (VAR_18 != ((void*)0) && *VAR_18 != '\0')
    FUNC_25("Invalid column number.");
   if (VAR_22 <= 0)
    FUNC_25("Column number should be positive.");
   break;
  case 'c':
   VAR_16 = FUNC_23(VAR_5, &VAR_18);
   if (VAR_18 != ((void*)0) && *VAR_18 != '\0')
    FUNC_25("Not a floating point number");
   for (VAR_20 = 0; VAR_20 < VAR_2; VAR_20++)
    if (VAR_16 == VAR_8[VAR_20])
     VAR_21 = VAR_20;
   if (VAR_21 == -1)
    FUNC_25("No support for confidence level");
   break;
  case 'd':
   if (*VAR_5 == '\0')
    FUNC_25("Can't use empty delimiter string");
   VAR_17 = VAR_5;
   break;
  case 'n':
   VAR_24 = 1;
   break;
  case 's':
   VAR_23 = 1;
   break;
  case 'w':
   VAR_25 = FUNC_24(VAR_5, &VAR_18, 10);
   if (VAR_18 != ((void*)0) && *VAR_18 != '\0')
    FUNC_25("Invalid width, not a number.");
   if (VAR_25 < 0)
    FUNC_25("Unable to move beyond left margin.");
   break;
  default:
   FUNC_25("Unknown option");
   break;
  }
 if (VAR_21 == -1)
  VAR_21 = 2;
 VAR_10 -= VAR_6;
 VAR_11 += VAR_6;

 if (VAR_10 == 0) {
  VAR_12[0] = "<stdin>";
  VAR_14[0] = VAR_7;
  VAR_15 = 1;
 } else {
  if (VAR_10 > (VAR_1 - 1))
   FUNC_25("Too many datasets.");
  VAR_15 = VAR_10;
  for (VAR_20 = 0; VAR_20 < VAR_15; VAR_20++) {
   VAR_12[VAR_20] = VAR_11[VAR_20];
   if (!FUNC_22(VAR_11[VAR_20], "-"))
    VAR_14[0] = VAR_7;
   else
    VAR_14[VAR_20] = FUNC_16(VAR_11[VAR_20], "r");
   if (VAR_14[VAR_20] == ((void*)0))
    FUNC_12(2, "Cannot open %s", VAR_11[VAR_20]);
  }
 }

 if (FUNC_10() < 0)
  FUNC_12(2, "capsicum");

 for (VAR_20 = 0; VAR_20 < VAR_15; VAR_20++)
  if (FUNC_11(FUNC_15(VAR_14[VAR_20]), VAR_0) < 0)
   FUNC_12(2, "unable to limit rights for %s",
       VAR_12[VAR_20]);


 if (FUNC_9() < 0)
  FUNC_12(2, "unable to enter capability mode");

 for (VAR_20 = 0; VAR_20 < VAR_15; VAR_20++) {
  VAR_13[VAR_20] = FUNC_3(VAR_14[VAR_20], VAR_12[VAR_20], VAR_22, VAR_17);
  if (VAR_14[VAR_20] != VAR_7)
   FUNC_14(VAR_14[VAR_20]);
 }

 for (VAR_20 = 0; VAR_20 < VAR_15; VAR_20++)
  FUNC_21("%c %s\n", VAR_9[VAR_20+1], VAR_13[VAR_20]->name);

 if (!VAR_24 && !VAR_26) {
  FUNC_5(VAR_25, VAR_23, VAR_15);
  for (VAR_20 = 0; VAR_20 < VAR_15; VAR_20++)
   FUNC_0(VAR_13[VAR_20]);
  for (VAR_20 = 0; VAR_20 < VAR_15; VAR_20++)
   FUNC_2(VAR_13[VAR_20], VAR_20 + 1);
  FUNC_1();
 }
 FUNC_7();
 FUNC_6(VAR_13[0], 1);
 for (VAR_20 = 1; VAR_20 < VAR_15; VAR_20++) {
  FUNC_6(VAR_13[VAR_20], VAR_20 + 1);
  if (!VAR_24)
   FUNC_4(VAR_13[VAR_20], VAR_13[0], VAR_21);
 }
 FUNC_13(0);
}
