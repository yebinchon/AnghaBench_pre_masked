
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unittype {int dummy; } ;
typedef int History ;
typedef int HistEvent ;
typedef int EditLine ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 char* VAR_7 ;
 int FUNC_0 (char*,int ) ;
 scalar_t__ FUNC_1 (struct unittype*,char*,int ,int) ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 (struct unittype*) ;
 int FUNC_4 (int *) ;
 char* FUNC_5 (int *,int*) ;
 int * FUNC_6 (char*,int ,int ,int ) ;
 int FUNC_7 (int *,int ,...) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int,char*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,char*) ;
 int FUNC_12 (int,char**,char*,int ,int *) ;
 char* VAR_8 ;
 int FUNC_13 (int *,int *,int ,...) ;
 int FUNC_14 (int *) ;
 int * FUNC_15 () ;
 int FUNC_16 (struct unittype*) ;
 int VAR_9 ;
 char* VAR_10 ;
 char* VAR_11 ;
 int VAR_12 ;
 char* VAR_13 ;
 int VAR_14 ;
 int FUNC_17 (char*,...) ;
 int VAR_15 ;
 char* VAR_16 ;
 int FUNC_18 (char*) ;
 int FUNC_19 (struct unittype*,struct unittype*) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_20 (char*) ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_21 () ;
 int VAR_22 ;
 char* VAR_23 ;

int
FUNC_22(int VAR_24, char **VAR_25)
{

 struct unittype VAR_26, VAR_27;
 int VAR_28;
 bool VAR_29;
 bool VAR_30;
 bool VAR_31;
 History *VAR_32;
 EditLine *VAR_33;
 HistEvent VAR_34;
 int VAR_35;
 char const * VAR_36;

 VAR_29 = 0;
 VAR_30 = 0;
 VAR_36 = ((void*)0);
 VAR_13 = VAR_10;
 VAR_31 = 0;
 while ((VAR_28 = FUNC_12(VAR_24, VAR_25, "+ehf:o:qtvH:UV", VAR_9, ((void*)0))) != -1) {
  switch (VAR_28) {
  case 'e':
   VAR_13 = "%6e";
   break;
  case 'f':
   VAR_30 = 1;
   if (FUNC_20(VAR_11) == 0)
    FUNC_18(((void*)0));
   else
    FUNC_18(VAR_11);
   break;
  case 'H':
   VAR_36 = VAR_11;
   break;
  case 'q':
   VAR_29 = 1;
   break;
  case 't':
   VAR_20 = 1;
   break;
  case 'o':
   VAR_13 = VAR_11;
   break;
  case 'v':
   VAR_22 = 1;
   break;
  case 'V':
   FUNC_11(VAR_17, "FreeBSD units\n");

  case 'U':
   if (FUNC_0(VAR_7, VAR_4) == 0)
    FUNC_17("%s\n", VAR_7);
   else
    FUNC_17("Units data file not found");
   FUNC_10(0);
  case 'h':


  default:
   FUNC_21();
  }
 }

 if (!VAR_30)
  FUNC_18(((void*)0));

 if (VAR_12 == VAR_24 - 2) {
  if (FUNC_2() < 0)
   FUNC_9(1, "unable to enter capability mode");

  VAR_8 = VAR_25[VAR_12];
  VAR_23 = VAR_25[VAR_12 + 1];
  FUNC_16(&VAR_26);
  FUNC_1(&VAR_26, VAR_8, 0, 1);
  FUNC_3(&VAR_26);
  FUNC_16(&VAR_27);
  FUNC_1(&VAR_27, VAR_23, 0, 1);
  FUNC_3(&VAR_27);
  FUNC_19(&VAR_26, &VAR_27);
 } else {
  VAR_32 = FUNC_15();
  VAR_33 = FUNC_6(VAR_25[0], VAR_18, VAR_19, VAR_17);
  FUNC_7(VAR_33, VAR_2, &VAR_15);
  FUNC_7(VAR_33, VAR_0, "emacs");
  FUNC_7(VAR_33, VAR_3, 1);
  FUNC_7(VAR_33, VAR_1, FUNC_13, VAR_32);
  FUNC_8(VAR_33, ((void*)0));
  FUNC_13(VAR_32, &VAR_34, VAR_6, 800);
  if (VAR_32 == 0)
   FUNC_9(1, "Could not initialize history");

  if (FUNC_2() < 0)
   FUNC_9(1, "unable to enter capability mode");

  if (!VAR_29)
   FUNC_17("%d units, %d prefixes\n", VAR_21,
       VAR_14);
  while (!VAR_31) {
   do {
    FUNC_16(&VAR_26);
    if (!VAR_29)
     VAR_16 = "You have: ";
    VAR_8 = FUNC_5(VAR_33, &VAR_35);
    if (VAR_8 == ((void*)0)) {
     VAR_31 = 1;
     break;
    }
    if (VAR_35 > 0)
     FUNC_13(VAR_32, &VAR_34, VAR_5,
     VAR_8);
   } while (FUNC_1(&VAR_26, VAR_8, 0, 1) ||
       FUNC_3(&VAR_26));
   if (VAR_31) {
    break;
   }
   do {
    FUNC_16(&VAR_27);
    if (!VAR_29)
     VAR_16 = "You want: ";
    VAR_23 = FUNC_5(VAR_33, &VAR_35);
    if (VAR_23 == ((void*)0)) {
     VAR_31 = 1;
     break;
    }
    if (VAR_35 > 0)
     FUNC_13(VAR_32, &VAR_34, VAR_5,
     VAR_23);
   } while (FUNC_1(&VAR_27, VAR_23, 0, 1) ||
       FUNC_3(&VAR_27));
   if (VAR_31) {
    break;
   }
   FUNC_19(&VAR_26, &VAR_27);
  }

  FUNC_14(VAR_32);
  FUNC_4(VAR_33);
 }

 return (0);
}
