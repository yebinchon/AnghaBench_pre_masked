
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zoneinfo ;
typedef int vm_guest ;
typedef int title ;
struct stat {int dummy; } ;
typedef int prompt ;
struct TYPE_2__ {int defaultno; } ;
typedef int FILE ;
typedef int DIALOG_VARS ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 char* VAR_12 ;
 char* VAR_13 ;
 char* VAR_14 ;
 char* VAR_15 ;
 char* VAR_16 ;
 char* VAR_17 ;
 char* VAR_18 ;
 int FUNC_0 (int) ;
 int VAR_19 ;
 TYPE_1__ VAR_20 ;
 int FUNC_1 (char*,char*,int,int) ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 () ;
 int FUNC_6 (int,char*,int ) ;
 int FUNC_7 (int,char*,int ) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int *) ;
 int * FUNC_10 (char*,int,int *) ;
 int * FUNC_11 (int ,char*) ;
 int FUNC_12 (int,char**,char*) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (char*) ;
 int FUNC_15 (char*) ;
 int FUNC_16 () ;
 int FUNC_17 (int ,int,int) ;
 char* VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int FUNC_18 () ;
 int FUNC_19 () ;
 scalar_t__ VAR_29 ;
 int VAR_30 ;
 int FUNC_20 (char*,int,char*,...) ;
 int FUNC_21 () ;
 int FUNC_22 (int ,char*,char*,char*) ;
 scalar_t__ FUNC_23 (char*,struct stat*) ;
 int VAR_31 ;
 int VAR_32 ;
 scalar_t__ FUNC_24 (char*,char*) ;
 int FUNC_25 (int ,char*) ;
 int FUNC_26 (char*) ;
 scalar_t__ FUNC_27 (char*,char*,size_t*,int *,int ) ;
 int FUNC_28 (int) ;
 int FUNC_29 (int ) ;
 int FUNC_30 () ;
 scalar_t__ VAR_33 ;
 int FUNC_31 (char*,char*,int,int,int ,int ,int ) ;

int
FUNC_32(int VAR_34, char **VAR_35)
{




 int VAR_36, VAR_37, VAR_38;
 char VAR_39[16] = "";
 size_t VAR_40 = sizeof(VAR_39);

 VAR_38 = 0;


 if (FUNC_27("kern.vm_guest", VAR_39, &VAR_40, ((void*)0), 0) == 0 &&
     FUNC_24(VAR_39, "none") != 0)
  VAR_38 = 1;

 while ((VAR_36 = FUNC_12(VAR_34, VAR_35, "C:nrs")) != -1) {
  switch(VAR_36) {
  case 'C':
   VAR_18 = VAR_21;
   break;
  case 'n':
   VAR_29 = 0;
   break;
  case 'r':
   VAR_30 = 1;



   break;
  case 's':
   VAR_38 = 1;
   break;
  default:
   FUNC_30();
  }
 }

 if (VAR_34 - VAR_22 > 1)
  FUNC_30();

 if (VAR_18 == ((void*)0)) {
  FUNC_25(VAR_28, VAR_17);
  FUNC_25(VAR_24, VAR_13);
  FUNC_25(VAR_27, VAR_16);
  FUNC_25(VAR_25, VAR_14);
  FUNC_25(VAR_23, VAR_12);
  FUNC_25(VAR_26, VAR_15);
 } else {
  FUNC_22(VAR_28, "%s/%s", VAR_18, VAR_17);
  FUNC_22(VAR_24, "%s/%s", VAR_18, VAR_13);
  FUNC_22(VAR_27, "%s/%s", VAR_18, VAR_16);
  FUNC_22(VAR_25, "%s/%s", VAR_18, VAR_14);
  FUNC_22(VAR_23, "%s/%s", VAR_18, VAR_12);
  FUNC_22(VAR_26, "%s/%s", VAR_18,
      VAR_15);
 }


 (void)FUNC_28(VAR_9 | VAR_10);

 if (VAR_30 == 1) {
  FILE *VAR_41;
  char VAR_42[VAR_1];

  if ((VAR_41 = FUNC_11(VAR_23, "r")) != ((void*)0)) {
   if (FUNC_10(VAR_42, sizeof(VAR_42), VAR_41) != ((void*)0)) {
    VAR_42[sizeof(VAR_42) - 1] = 0;
    if (FUNC_26(VAR_42) > 0) {
     VAR_42[FUNC_26(VAR_42) - 1] = 0;
     VAR_37 = FUNC_14(VAR_42);
     FUNC_8(VAR_37 & ~VAR_0);
    }
    FUNC_7(1, "Error reading %s.\n", VAR_23);
   }
   FUNC_9(VAR_41);
   FUNC_7(1,
       "Unable to determine earlier installed zoneinfo "
       "name. Check %s", VAR_23);
  }
  FUNC_7(1, "Cannot open %s for reading. Does it exist?", VAR_23);
 }





 if (VAR_22 == VAR_34 - 1) {
  struct stat VAR_43;

  if (FUNC_23(VAR_35[VAR_22], &VAR_43) != 0) {



   VAR_37 = FUNC_14(VAR_35[VAR_22]);
   FUNC_8(VAR_37 & ~VAR_0);
  }

 }
 FUNC_30();

 return (0);
}
