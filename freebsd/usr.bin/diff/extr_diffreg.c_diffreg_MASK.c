
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct pr {int dummy; } ;
typedef int cap_rights_t ;
struct TYPE_4__ {int st_size; int st_mode; } ;
typedef int FILE ;


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
 int* VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 char* VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int ,int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 scalar_t__ FUNC_10 (scalar_t__,int *) ;
 int FUNC_11 (int *,int *,int) ;
 int VAR_16 ;
 int* VAR_17 ;
 scalar_t__ VAR_18 ;
 int* VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 int VAR_24 ;
 int FUNC_12 (int ,int,int ,int,int*) ;
 int FUNC_13 (int,char*,...) ;
 int FUNC_14 (int *) ;
 scalar_t__* VAR_25 ;
 scalar_t__ FUNC_15 (int *) ;
 int FUNC_16 (int *,int *,int) ;
 int * FUNC_17 (char*,char*) ;
 int FUNC_18 (int*) ;
 scalar_t__ FUNC_19 (scalar_t__,TYPE_1__*) ;
 int* VAR_26 ;
 int* VAR_27 ;
 int* VAR_28 ;
 scalar_t__ VAR_29 ;
 scalar_t__ VAR_30 ;
 int* VAR_31 ;
 scalar_t__ VAR_32 ;
 int* VAR_33 ;
 int * FUNC_20 (char*) ;
 int FUNC_21 (char*,int *,char*,int *,int) ;
 int FUNC_22 (int,int *,int ,int) ;
 int FUNC_23 () ;
 int * VAR_34 ;
 int* VAR_35 ;
 int FUNC_24 (int ,int) ;
 struct pr* FUNC_25 (char*,char*) ;
 int VAR_36 ;
 TYPE_1__ VAR_37 ;
 TYPE_1__ VAR_38 ;
 int * VAR_39 ;
 int FUNC_26 (int*,int,int*,int*,int) ;
 int FUNC_27 (struct pr*) ;
 scalar_t__ FUNC_28 (char*,char*) ;
 int FUNC_29 (int) ;
 int FUNC_30 (int ,int,int*) ;
 int FUNC_31 (char*,char*) ;
 int* FUNC_32 (int,int) ;
 int* FUNC_33 (int*,int,int) ;

int
FUNC_34(char *VAR_40, char *VAR_41, int VAR_42, int VAR_43)
{
 FILE *VAR_44, *VAR_45;
 int VAR_46, VAR_47;
 struct pr *VAR_48 = ((void*)0);
 cap_rights_t VAR_49;

 VAR_44 = VAR_45 = ((void*)0);
 VAR_47 = VAR_11;
 VAR_15 = 0;
 VAR_29 = 0;
 VAR_30 = 0;
 VAR_22 = VAR_23 - 1;
 if (VAR_42 & VAR_8)
  VAR_16 = VAR_24;
 else
  VAR_16 = VAR_21;
 if (FUNC_0(VAR_37) != FUNC_0(VAR_38))
  return (FUNC_0(VAR_37) ? VAR_9 : VAR_10);
 if (FUNC_28(VAR_40, "-") == 0 && FUNC_28(VAR_41, "-") == 0)
  goto closem;

 if (VAR_42 & VAR_5)
  VAR_44 = FUNC_17(VAR_14, "r");
 else {
  if (!FUNC_1(VAR_37)) {
   if ((VAR_44 = FUNC_20(VAR_40)) == ((void*)0) ||
       FUNC_19(FUNC_15(VAR_44), &VAR_37) < 0) {
    FUNC_31("%s", VAR_40);
    VAR_36 |= 2;
    goto closem;
   }
  } else if (FUNC_28(VAR_40, "-") == 0)
   VAR_44 = VAR_39;
  else
   VAR_44 = FUNC_17(VAR_40, "r");
 }
 if (VAR_44 == ((void*)0)) {
  FUNC_31("%s", VAR_40);
  VAR_36 |= 2;
  goto closem;
 }

 if (VAR_42 & VAR_6)
  VAR_45 = FUNC_17(VAR_14, "r");
 else {
  if (!FUNC_1(VAR_38)) {
   if ((VAR_45 = FUNC_20(VAR_41)) == ((void*)0) ||
       FUNC_19(FUNC_15(VAR_45), &VAR_38) < 0) {
    FUNC_31("%s", VAR_41);
    VAR_36 |= 2;
    goto closem;
   }
  } else if (FUNC_28(VAR_41, "-") == 0)
   VAR_45 = VAR_39;
  else
   VAR_45 = FUNC_17(VAR_41, "r");
 }
 if (VAR_45 == ((void*)0)) {
  FUNC_31("%s", VAR_41);
  VAR_36 |= 2;
  goto closem;
 }

 if (VAR_32)
  VAR_48 = FUNC_25(VAR_40, VAR_41);

 if (VAR_43) {
  FUNC_3(&VAR_49, VAR_1, VAR_0, VAR_2);
  if (FUNC_10(FUNC_15(VAR_44), &VAR_49) < 0)
   FUNC_13(2, "unable to limit rights on: %s", VAR_40);
  if (FUNC_10(FUNC_15(VAR_45), &VAR_49) < 0)
   FUNC_13(2, "unable to limit rights on: %s", VAR_41);
  if (FUNC_15(VAR_44) == VAR_13 || FUNC_15(VAR_45) == VAR_13) {

   if (FUNC_7() == -1)
    FUNC_13(2, "unable to limit stderr");
   if (FUNC_9() == -1)
    FUNC_13(2, "unable to limit stdout");
  } else if (FUNC_8() == -1)
    FUNC_13(2, "unable to limit stdio");

  FUNC_4();
  FUNC_5();
  if (FUNC_6() < 0)
   FUNC_13(2, "unable to enter capability mode");
 }

 switch (FUNC_16(VAR_44, VAR_45, VAR_42)) {
 case 0:
  goto closem;
 case 1:
  break;
 default:

  VAR_36 |= 2;
  goto closem;
 }

 if ((VAR_42 & VAR_7) == 0 &&
     (!FUNC_2(VAR_44) || !FUNC_2(VAR_45))) {
  VAR_47 = VAR_3;
  VAR_36 |= 1;
  goto closem;
 }
 FUNC_22(0, VAR_44, VAR_37, VAR_42);
 FUNC_22(1, VAR_45, VAR_38, VAR_42);

 FUNC_23();
 FUNC_24(VAR_34[0], VAR_35[0]);
 FUNC_24(VAR_34[1], VAR_35[1]);

 VAR_33 = (int *)VAR_25[1];
 FUNC_12(VAR_34[0], VAR_35[0], VAR_34[1], VAR_35[1], VAR_33);
 VAR_33 = FUNC_33(VAR_33, VAR_35[1] + 2, sizeof(*VAR_33));

 VAR_17 = (int *)VAR_25[0];
 FUNC_30(VAR_34[0], VAR_35[0], VAR_17);
 VAR_17 = FUNC_33(VAR_17, VAR_35[0] + 2, sizeof(*VAR_17));

 VAR_28 = FUNC_32(VAR_35[0] + 2, sizeof(*VAR_28));
 VAR_18 = 0;
 VAR_20 = 100;
 VAR_19 = FUNC_32(VAR_20, sizeof(*VAR_19));
 VAR_46 = FUNC_26(VAR_17, VAR_35[0], VAR_33, VAR_28, VAR_42);
 FUNC_18(VAR_33);
 FUNC_18(VAR_17);

 VAR_12 = FUNC_33(VAR_12, VAR_31[0] + 2, sizeof(*VAR_12));
 FUNC_29(VAR_28[VAR_46]);
 FUNC_18(VAR_19);
 FUNC_18(VAR_28);

 VAR_27 = FUNC_33(VAR_27, VAR_31[0] + 2, sizeof(*VAR_27));
 VAR_26 = FUNC_33(VAR_26, VAR_31[1] + 2, sizeof(*VAR_26));
 FUNC_11(VAR_44, VAR_45, VAR_42);
 FUNC_21(VAR_40, VAR_44, VAR_41, VAR_45, VAR_42);
 if (VAR_48 != ((void*)0))
  FUNC_27(VAR_48);

closem:
 if (VAR_15) {
  VAR_36 |= 1;
  if (VAR_47 == VAR_11)
   VAR_47 = VAR_4;
 }
 if (VAR_44 != ((void*)0))
  FUNC_14(VAR_44);
 if (VAR_45 != ((void*)0))
  FUNC_14(VAR_45);

 return (VAR_47);
}
