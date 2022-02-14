
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct yearinfo {int year; int* monthdays; int ieaster; int ipaskha; scalar_t__* ffullmoon; scalar_t__* fnewmoon; scalar_t__* ffullmooncny; scalar_t__* fnewmooncny; int* equinoxdays; int* solsticedays; int firstcnyday; int ichinesemonths; struct yearinfo* next; } ;


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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_0 (int,int ,int ) ;
 scalar_t__ FUNC_1 (int,int) ;
 scalar_t__ VAR_21 ;
 int FUNC_2 (int,char*,int,char*,int,char*,int,char*,int,char*,char*,char*,char*,int) ;
 scalar_t__ FUNC_3 (char*,int*,char*,int*,char*,int*,char*,int*,char*,char*,char*,char*,int*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,char*) ;
 int FUNC_6 (int,int ,int*,int*) ;
 int FUNC_7 (int,int) ;
 int FUNC_8 (int) ;
 char* FUNC_9 (int) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (int,int ,scalar_t__*,scalar_t__*) ;
 int FUNC_12 (char*) ;
 size_t FUNC_13 (int) ;
 int** VAR_22 ;
 int FUNC_14 (char*) ;
 int FUNC_15 (int) ;
 int FUNC_16 (char*) ;
 int FUNC_17 (int*,int*,int*,int*,char**,int,int,int,char*) ;
 scalar_t__ FUNC_18 (int,int,int*,int*) ;
 scalar_t__ FUNC_19 (int,int,int) ;
 int FUNC_20 (int,int,int,int) ;
 int VAR_23 ;
 int VAR_24 ;
 struct yearinfo* VAR_25 ;
 struct yearinfo* VAR_26 ;

int
FUNC_21(char *VAR_27, int *VAR_28, int *VAR_29, int *VAR_30, int *VAR_31,
    char **VAR_32)
{
 char VAR_33[100], VAR_34[100], VAR_35[100], VAR_36[100];
 char VAR_37[100];
 char VAR_38[100], VAR_39[100];
 int VAR_40 = -1, VAR_41 = -1, VAR_42 = -1, VAR_43 = -1;
 int VAR_44, VAR_45;
 int VAR_46, VAR_47, VAR_48, VAR_49, VAR_50, VAR_51;
 char *VAR_52;
 int VAR_53 = 1;
 *VAR_31 = 0;

 if (VAR_21)
  FUNC_2(1, VAR_27, *VAR_31, VAR_33, VAR_41,
      VAR_34, VAR_42, VAR_35, VAR_40,
      VAR_36, VAR_38, VAR_39, VAR_37, VAR_43);
 if (FUNC_3(VAR_27, VAR_31, VAR_33, &VAR_41, VAR_34,
  &VAR_42, VAR_35, &VAR_40, VAR_36,
  VAR_38, VAR_39, VAR_37, &VAR_43) == 0) {
  if (VAR_21)
   FUNC_16("Failed!\n");
  return (0);
 }

 if (VAR_21)
  FUNC_2(0, VAR_27, *VAR_31, VAR_33, VAR_41,
      VAR_34, VAR_42, VAR_35, VAR_40,
      VAR_36, VAR_38, VAR_39, VAR_37, VAR_43);

 VAR_45 = 0;
 for (VAR_44 = VAR_23; VAR_44 <= VAR_24; VAR_44++) {

  int VAR_54 = *VAR_31;

  if ((VAR_54 & VAR_18) != 0)
   if (VAR_43 != VAR_44)
    continue;
  VAR_54 &= ~VAR_18;


  VAR_25 = VAR_26;
  while (VAR_25 != ((void*)0)) {
   if (VAR_25->year == VAR_44)
    break;
   VAR_25 = VAR_25 -> next;
  }
  if (VAR_25 == ((void*)0)) {
   VAR_25 = (struct yearinfo *)FUNC_1(1,
       sizeof(struct yearinfo));
   if (VAR_25 == ((void*)0))
    FUNC_5(1, "Unable to allocate more years");
   VAR_25->year = VAR_44;
   VAR_25->next = VAR_26;
   VAR_26 = VAR_25;

   VAR_25->monthdays = VAR_22[FUNC_13(VAR_44)];
   VAR_25->ieaster = FUNC_4(VAR_44);
   VAR_25->ipaskha = FUNC_15(VAR_44);
   FUNC_11(VAR_44, VAR_20, VAR_25->ffullmoon,
       VAR_25->fnewmoon);
   FUNC_11(VAR_44, VAR_19, VAR_25->ffullmooncny,
       VAR_25->fnewmooncny);
   FUNC_6(VAR_44, VAR_20,
       VAR_25->equinoxdays, VAR_25->solsticedays);





   VAR_25->firstcnyday = FUNC_0(VAR_44,
       VAR_19, VAR_25->ichinesemonths);
   for (VAR_47 = 0; VAR_25->fnewmooncny[VAR_47] >= 0; VAR_47++) {
    if (VAR_25->fnewmooncny[VAR_47] >
        VAR_25->firstcnyday) {
     VAR_25->firstcnyday =
         FUNC_10(VAR_25->fnewmooncny[VAR_47 - 1]);
     break;
    }
   }
  }


  if (VAR_54 == (VAR_12 | VAR_3)) {
   if (!FUNC_19(VAR_44, VAR_41, VAR_42))
    continue;
   FUNC_17(&VAR_45, VAR_28, VAR_29, VAR_30, VAR_32,
       VAR_44, VAR_41, VAR_42, ((void*)0));
   continue;
  }


  if (VAR_54 == (VAR_12 | VAR_3 | VAR_17)) {
   if (!FUNC_19(VAR_44, VAR_41, VAR_42))
    continue;
   FUNC_17(&VAR_45, VAR_28, VAR_29, VAR_30, VAR_32,
       VAR_44, VAR_41, VAR_42, ((void*)0));
   continue;
  }


  if (VAR_54 == (VAR_1 | VAR_3)) {
   for (VAR_47 = 1; VAR_47 <= 12; VAR_47++) {
    if (!FUNC_19(VAR_44, VAR_47, VAR_42))
     continue;
    FUNC_17(&VAR_45, VAR_28, VAR_29, VAR_30, VAR_32,
        VAR_44, VAR_47, VAR_42, ((void*)0));
   }
   continue;
  }


  if (VAR_54 == (VAR_0 | VAR_12)) {
   for (VAR_46 = 1; VAR_46 <= VAR_25->monthdays[VAR_41]; VAR_46++) {
    if (!FUNC_19(VAR_44, VAR_41, VAR_46))
     continue;
    FUNC_17(&VAR_45, VAR_28, VAR_29, VAR_30, VAR_32,
        VAR_44, VAR_41, VAR_46, ((void*)0));
   }
   continue;
  }


  if (VAR_54 == (VAR_1 | VAR_4)) {
   for (VAR_47 = 1; VAR_47 <= 12; VAR_47++) {
    if (!FUNC_19(VAR_44, VAR_47, VAR_42))
     continue;
    FUNC_17(&VAR_45, VAR_28, VAR_29, VAR_30, VAR_32,
        VAR_44, VAR_47, VAR_42, ((void*)0));
   }
   continue;
  }


  if (VAR_54 == (VAR_4 | VAR_17)) {
   VAR_48 = FUNC_8(VAR_44);
   VAR_46 = (VAR_40 - VAR_48 + 8) % 7;
   while (VAR_46 <= 366) {
    if (FUNC_18(VAR_44, VAR_46, &VAR_49, &VAR_50))
     FUNC_17(&VAR_45,
         VAR_28, VAR_29, VAR_30, VAR_32,
         VAR_44, VAR_49, VAR_50, ((void*)0));
    VAR_46 += 7;
   }
   continue;
  }





  if (VAR_54 == (VAR_4 | VAR_10 | VAR_17)) {
   VAR_51 = FUNC_12(VAR_38);

   for (VAR_47 = 0; VAR_47 <= 12; VAR_47++) {
                         VAR_46 = FUNC_20 (VAR_40, VAR_51, VAR_47, VAR_44);
    if (FUNC_19(VAR_44, VAR_47, VAR_46)) {
     FUNC_17(&VAR_45,
         VAR_28, VAR_29, VAR_30, VAR_32,
         VAR_44, VAR_47, VAR_46, ((void*)0));
     continue;
    }
   }
   continue;
  }





  if (VAR_54 ==
      (VAR_12 | VAR_4 | VAR_10 | VAR_17)) {
   VAR_51 = FUNC_12(VAR_38);
   VAR_48 = FUNC_7(VAR_44, VAR_41);
   VAR_46 = (VAR_40 - VAR_48 + 8) % 7;

   if (VAR_51 > 0) {
    while (VAR_46 <= VAR_25->monthdays[VAR_41]) {
     if (--VAR_51 == 0
         && FUNC_19(VAR_44, VAR_41, VAR_46)) {
      FUNC_17(&VAR_45,
          VAR_28, VAR_29, VAR_30, VAR_32,
          VAR_44, VAR_41, VAR_46, ((void*)0));
      continue;
     }
     VAR_46 += 7;
    }
    continue;
   }
   if (VAR_51 < 0) {
    while (VAR_46 <= VAR_25->monthdays[VAR_41])
     VAR_46 += 7;
    while (VAR_51 != 0) {
     VAR_51++;
     VAR_46 -= 7;
    }
    if (FUNC_19(VAR_44, VAR_41, VAR_46))
     FUNC_17(&VAR_45,
         VAR_28, VAR_29, VAR_30, VAR_32,
         VAR_44, VAR_41, VAR_46, ((void*)0));
    continue;
   }
   continue;
  }


  if (VAR_54 == (VAR_4 | VAR_12 | VAR_17)) {
   VAR_48 = FUNC_7(VAR_44, VAR_41);
   VAR_46 = (VAR_40 - VAR_48 + 8) % 7;
   while (VAR_46 <= VAR_25->monthdays[VAR_41]) {
    if (FUNC_19(VAR_44, VAR_41, VAR_46))
     FUNC_17(&VAR_45,
         VAR_28, VAR_29, VAR_30, VAR_32,
         VAR_44, VAR_41, VAR_46, ((void*)0));
    VAR_46 += 7;
   }
   continue;
  }


  if ((VAR_54 & ~VAR_11) ==
      (VAR_16 | VAR_17 | VAR_6)) {
   VAR_51 = 0;
   if ((VAR_54 & VAR_11) != 0)
    VAR_51 = FUNC_14(VAR_36);
   if (FUNC_18(VAR_44, VAR_25->ieaster + VAR_51,
                         &VAR_49, &VAR_50))
    FUNC_17(&VAR_45, VAR_28, VAR_29, VAR_30, VAR_32,
        VAR_44, VAR_49, VAR_50, ((void*)0));
   continue;
  }


  if ((VAR_54 & ~VAR_11) ==
      (VAR_16 | VAR_17 | VAR_14)) {
   VAR_51 = 0;
   if ((VAR_54 & VAR_11) != 0)
    VAR_51 = FUNC_14(VAR_36);
   if (FUNC_18(VAR_44, VAR_25->ipaskha + VAR_51,
                         &VAR_49, &VAR_50))
    FUNC_17(&VAR_45, VAR_28, VAR_29, VAR_30, VAR_32,
        VAR_44, VAR_49, VAR_50, ((void*)0));
   continue;
  }


  if ((VAR_54 & ~VAR_11) ==
      (VAR_16 | VAR_17 | VAR_2)) {
   VAR_51 = 0;
   if ((VAR_54 & VAR_11) != 0)
    VAR_51 = FUNC_14(VAR_36);
   if (FUNC_18(VAR_44, VAR_25->firstcnyday + VAR_51,
                         &VAR_49, &VAR_50))
    FUNC_17(&VAR_45, VAR_28, VAR_29, VAR_30, VAR_32,
        VAR_44, VAR_49, VAR_50, ((void*)0));
   continue;
  }


  if ((VAR_54 & ~VAR_11) ==
      (VAR_16 | VAR_17 | VAR_7)) {
   int VAR_55;

   VAR_51 = 0;
   if ((VAR_54 & VAR_11) != 0)
    VAR_51 = FUNC_14(VAR_36);
   for (VAR_55 = 0; VAR_25->ffullmoon[VAR_55] > 0; VAR_55++) {
    if (FUNC_18(VAR_44,
                                 FUNC_10(VAR_25->ffullmoon[VAR_55]) + VAR_51,
     &VAR_49, &VAR_50)) {
     VAR_52 = FUNC_9(
         VAR_25->ffullmoon[VAR_55]);
     FUNC_17(&VAR_45,
         VAR_28, VAR_29, VAR_30, VAR_32,
         VAR_44, VAR_49, VAR_50, VAR_52);
    }
   }
   continue;
  }


  if ((VAR_54 & ~VAR_11) ==
      (VAR_16 | VAR_17 | VAR_13)) {
   int VAR_56;

   VAR_51 = 0;
   if ((VAR_54 & VAR_11) != 0)
    VAR_51 = FUNC_14(VAR_36);
   for (VAR_56 = 0; VAR_25->ffullmoon[VAR_56] > 0; VAR_56++) {
    if (FUNC_18(VAR_44,
     FUNC_10(VAR_25->fnewmoon[VAR_56]) + VAR_51,
     &VAR_49, &VAR_50)) {
     VAR_52 = FUNC_9(VAR_25->fnewmoon[VAR_56]);
     FUNC_17(&VAR_45,
         VAR_28, VAR_29, VAR_30, VAR_32,
         VAR_44, VAR_49, VAR_50, VAR_52);
    }
   }
   continue;
  }


  if ((VAR_54 & ~VAR_11) ==
      (VAR_16 | VAR_17 | VAR_9)) {
   VAR_51 = 0;
   if ((VAR_54 & VAR_11) != 0)
    VAR_51 = FUNC_14(VAR_36);
   if (FUNC_18(VAR_44, VAR_25->equinoxdays[0] + VAR_51,
    &VAR_49, &VAR_50)) {
    VAR_52 = FUNC_9(VAR_25->equinoxdays[0]);
    FUNC_17(&VAR_45, VAR_28, VAR_29, VAR_30, VAR_32,
        VAR_44, VAR_49, VAR_50, VAR_52);
   }
   continue;
  }
  if ((VAR_54 & ~VAR_11) ==
      (VAR_16 | VAR_17 | VAR_15)) {
   VAR_51 = 0;
   if ((VAR_54 & VAR_11) != 0)
    VAR_51 = FUNC_14(VAR_36);
   if (FUNC_18(VAR_44, VAR_25->equinoxdays[1] + VAR_51,
       &VAR_49, &VAR_50)) {
    VAR_52 = FUNC_9(VAR_25->equinoxdays[1]);
    FUNC_17(&VAR_45, VAR_28, VAR_29, VAR_30, VAR_32,
        VAR_44, VAR_49, VAR_50, VAR_52);
   }
   continue;
  }


  if ((VAR_54 & ~VAR_11) ==
      (VAR_16 | VAR_17 | VAR_8)) {
   VAR_51 = 0;
   if ((VAR_54 & VAR_11) != 0)
    VAR_51 = FUNC_14(VAR_36);
   if (FUNC_18(VAR_44,
    VAR_25->solsticedays[0] + VAR_51, &VAR_49, &VAR_50)) {
    VAR_52 = FUNC_9(VAR_25->solsticedays[0]);
    FUNC_17(&VAR_45, VAR_28, VAR_29, VAR_30, VAR_32,
        VAR_44, VAR_49, VAR_50, VAR_52);
   }
   continue;
  }
  if ((VAR_54 & ~VAR_11) ==
      (VAR_16 | VAR_17 | VAR_5)) {
   VAR_51 = 0;
   if ((VAR_54 & VAR_11) != 0)
    VAR_51 = FUNC_14(VAR_36);
   if (FUNC_18(VAR_44,
    VAR_25->solsticedays[1] + VAR_51, &VAR_49, &VAR_50)) {
    VAR_52 = FUNC_9(VAR_25->solsticedays[1]);
    FUNC_17(&VAR_45, VAR_28, VAR_29, VAR_30, VAR_32,
        VAR_44, VAR_49, VAR_50, VAR_52);
   }
   continue;
  }

  if (VAR_21) {
   FUNC_16("Unprocessed:\n");
   FUNC_2(2, VAR_27, VAR_54, VAR_33, VAR_41,
       VAR_34, VAR_42, VAR_35, VAR_40,
       VAR_36, VAR_38, VAR_39, VAR_37,
       VAR_43);
  }
  VAR_53 = -1;
 }

 if (VAR_53 == -1)
  return (-VAR_45 - 1);
 else
  return (VAR_45);
}
