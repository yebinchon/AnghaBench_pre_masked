
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int strvised ;
typedef int label ;
typedef int (* fstyp_function ) (int *,char*,int) ;
struct TYPE_2__ {int unmountable; int (* function ) (int *,char*,int) ;char* name; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int,char*,...) ;
 int * FUNC_2 (char*,char*) ;
 TYPE_1__* VAR_3 ;
 int FUNC_3 (int,char**,char*) ;
 int FUNC_4 (char*,char,int) ;
 scalar_t__ VAR_4 ;
 int FUNC_5 (char*,char*,...) ;
 int FUNC_6 (char*,int,char*,int,char*) ;
 int FUNC_7 (char*,int *) ;
 int FUNC_8 () ;
 int FUNC_9 (char*,char*) ;

int
FUNC_10(int VAR_5, char **VAR_6)
{
 int VAR_7, VAR_8, VAR_9, VAR_10;
 bool VAR_11 = 0, VAR_12 = 0, VAR_13 = 0;
 char VAR_14[VAR_0 + 1], VAR_15[VAR_0 * 4 + 1];
 char *VAR_16;
 FILE *VAR_17;
 fstyp_function VAR_18;

 while ((VAR_7 = FUNC_3(VAR_5, VAR_6, "lsu")) != -1) {
  switch (VAR_7) {
  case 'l':
   VAR_12 = 1;
   break;
  case 's':
   VAR_11 = 1;
   break;
  case 'u':
   VAR_13 = 1;
   break;
  default:
   FUNC_8();
  }
 }

 VAR_5 -= VAR_4;
 VAR_6 += VAR_4;
 if (VAR_5 != 1)
  FUNC_8();

 VAR_16 = VAR_6[0];

 VAR_17 = FUNC_2(VAR_16, "r");
 if (VAR_17 == ((void*)0))
  FUNC_1(1, "%s", VAR_16);

 if (FUNC_0() < 0)
  FUNC_1(1, "cap_enter");

 if (VAR_11 == 0)
  FUNC_7(VAR_16, VAR_17);

 FUNC_4(VAR_14, '\0', sizeof(VAR_14));

 for (VAR_9 = 0;; VAR_9++) {
  if (VAR_13 == 0 && VAR_3[VAR_9].unmountable == 1)
   continue;
  VAR_18 = VAR_3[VAR_9].function;
  if (VAR_18 == ((void*)0))
   break;

  VAR_8 = VAR_18(VAR_17, VAR_14, sizeof(VAR_14));
  if (VAR_8 == 0)
   break;
 }

 if (VAR_3[VAR_9].name == ((void*)0)) {
  FUNC_9("%s: filesystem not recognized", VAR_16);
  return (1);
 }

 if (VAR_12 && VAR_14[0] != '\0') {




  VAR_10 = FUNC_6(VAR_15, sizeof(VAR_15), VAR_14,
      VAR_1 | VAR_2, "\"'$");
  if (VAR_10 == -1)
   FUNC_1(1, "strsnvis");

  FUNC_5("%s %s\n", VAR_3[VAR_9].name, VAR_15);
 } else {
  FUNC_5("%s\n", VAR_3[VAR_9].name);
 }

 return (0);
}
