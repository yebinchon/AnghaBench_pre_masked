
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int64_t ;
typedef int u_int ;
struct stat {int st_size; } ;
typedef int cap_rights_t ;
typedef char Elf32_Ehdr ;


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
 int FUNC_0 (char) ;
 char* VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;







 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int FUNC_1 (int *,...) ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ FUNC_4 () ;
 scalar_t__ FUNC_5 (int,int *) ;
 char* VAR_29 ;
 int FUNC_6 (char*,char*,int ) ;
 int FUNC_7 (char*,char*,int ) ;
 int FUNC_8 (char*,void*) ;
 int FUNC_9 (char*,void*) ;
 int FUNC_10 (char*,void*,int ) ;
 int FUNC_11 (char*,void*) ;
 int FUNC_12 (char*,void*) ;
 int FUNC_13 (char*,void*) ;
 int FUNC_14 (char*,void*) ;
 int FUNC_15 (char*,void*) ;
 int FUNC_16 (char*,void*) ;
 int FUNC_17 (char*,void*) ;
 int FUNC_18 (char*,void*) ;
 int FUNC_19 (char*,void*) ;
 int FUNC_20 (char*,void*) ;
 int FUNC_21 (char*,void*,char*) ;
 int FUNC_22 (int,char*,...) ;
 int FUNC_23 (int,char*) ;
 int FUNC_24 (int) ;
 int FUNC_25 (int *) ;
 int * FUNC_26 (int ,char*) ;
 scalar_t__ FUNC_27 (int,struct stat*) ;
 int FUNC_28 (int,char**,char*) ;
 char* FUNC_29 (int *,int ,int ,int ,int,int ) ;
 int FUNC_30 (char*,int ) ;
 int VAR_30 ;
 scalar_t__ VAR_31 ;
 int * VAR_32 ;
 char* VAR_33 ;
 int * VAR_34 ;
 scalar_t__ FUNC_31 (char*,char*) ;
 char* VAR_35 ;
 int FUNC_32 () ;

int
FUNC_33(int VAR_36, char **VAR_37)
{
 cap_rights_t VAR_38;
 u_int64_t VAR_39;
 u_int64_t VAR_40;
 u_int64_t VAR_41;
 u_int64_t VAR_42;
 u_int64_t VAR_43;
 u_int64_t VAR_44;
 u_int64_t VAR_45;
 u_int64_t VAR_46;
 u_int64_t VAR_47;
 u_int64_t VAR_48;
 struct stat VAR_49;
 u_int VAR_50;
 Elf32_Ehdr *VAR_51;
 void *VAR_52;
 void *VAR_53;
 void *VAR_54;
 int VAR_55;
 int VAR_56;
 int VAR_57;

 VAR_32 = VAR_34;
 VAR_50 = 0;
 while ((VAR_56 = FUNC_28(VAR_36, VAR_37, "acdEeiGhnprsw:")) != -1)
  switch (VAR_56) {
  case 'a':
   VAR_50 = VAR_3;
   break;
  case 'c':
   VAR_50 |= VAR_13;
   break;
  case 'd':
   VAR_50 |= VAR_4;
   break;
  case 'E':
   VAR_50 = VAR_9;
   break;
  case 'e':
   VAR_50 |= VAR_5;
   break;
  case 'i':
   VAR_50 |= VAR_8;
   break;
  case 'G':
   VAR_50 |= VAR_6;
   break;
  case 'h':
   VAR_50 |= VAR_7;
   break;
  case 'n':
   VAR_50 |= VAR_10;
   break;
  case 'p':
   VAR_50 |= VAR_11;
   break;
  case 'r':
   VAR_50 |= VAR_12;
   break;
  case 's':
   VAR_50 |= VAR_14;
   break;
  case 'w':
   if ((VAR_32 = FUNC_26(VAR_30, "w")) == ((void*)0))
    FUNC_22(1, "%s", VAR_30);
   FUNC_1(&VAR_38, VAR_0, VAR_2);
   if (FUNC_5(FUNC_25(VAR_32), &VAR_38) < 0)
    FUNC_22(1, "unable to limit rights for %s", VAR_30);
   break;
  case '?':
  default:
   FUNC_32();
  }
 VAR_36 -= VAR_31;
 VAR_37 += VAR_31;
 if (VAR_36 == 0 || VAR_50 == 0 || ((VAR_50 & VAR_9) &&
     (VAR_36 != 1 || (VAR_50 & ~VAR_9) || VAR_32 != VAR_34)))
  FUNC_32();
 if ((VAR_55 = FUNC_30(*VAR_37, VAR_22)) < 0 ||
     FUNC_27(VAR_55, &VAR_49) < 0)
  FUNC_22(1, "%s", *VAR_37);
 FUNC_1(&VAR_38, VAR_1);
 if (FUNC_5(VAR_55, &VAR_38) < 0)
  FUNC_22(1, "unable to limit rights for %s", *VAR_37);
 FUNC_1(&VAR_38);
 if (FUNC_5(VAR_28, &VAR_38) < 0 ||
     FUNC_4() < 0 || FUNC_3() < 0) {
                FUNC_22(1, "unable to limit rights for stdio");
 }
 if (FUNC_2() < 0)
  FUNC_22(1, "unable to enter capability mode");
 VAR_51 = FUNC_29(((void*)0), VAR_49.st_size, VAR_23, VAR_21, VAR_55, 0);
 if (VAR_51 == VAR_20)
  FUNC_22(1, ((void*)0));
 if (!FUNC_0(*(Elf32_Ehdr *)VAR_51)) {
  if (VAR_50 & VAR_9)
   FUNC_24(1);
  FUNC_23(1, "not an elf file");
 } else if (VAR_50 & VAR_9)
  FUNC_24 (0);
 VAR_39 = FUNC_6(VAR_51, VAR_51, VAR_17);
 VAR_40 = FUNC_6(VAR_51, VAR_51, VAR_19);
 VAR_41 = FUNC_7(VAR_51, VAR_51, VAR_15);
 VAR_42 = FUNC_7(VAR_51, VAR_51, VAR_16);
 VAR_43 = FUNC_7(VAR_51, VAR_51, VAR_18);
 VAR_52 = (char *)VAR_51 + VAR_39;
 if (VAR_40 > 0) {
  VAR_53 = (char *)VAR_51 + VAR_40;
  VAR_44 = FUNC_8(VAR_51, VAR_53);
  VAR_45 = FUNC_9(VAR_51, VAR_53);
  VAR_46 = FUNC_6(VAR_51, (char *)VAR_53 + VAR_45 * VAR_43,
      VAR_26);
  VAR_33 = (char *)VAR_51 + VAR_46;
 } else {
  VAR_53 = ((void*)0);
  VAR_44 = 0;
  VAR_45 = 0;
  VAR_33 = ((void*)0);
 }
 for (VAR_57 = 0; (u_int64_t)VAR_57 < VAR_44; VAR_57++) {
  VAR_47 = FUNC_10(VAR_51, (char *)VAR_53 + VAR_57 * VAR_43, VAR_25);
  VAR_46 = FUNC_6(VAR_51, (char *)VAR_53 + VAR_57 * VAR_43, VAR_26);
  if (FUNC_31(VAR_33 + VAR_47, ".strtab") == 0)
   VAR_35 = (char *)VAR_51 + VAR_46;
  if (FUNC_31(VAR_33 + VAR_47, ".dynstr") == 0)
   VAR_29 = (char *)VAR_51 + VAR_46;
 }
 if (VAR_50 & VAR_5)
  FUNC_12(VAR_51, VAR_53);
 if (VAR_50 & VAR_11)
  FUNC_17(VAR_51, VAR_52);
 if (VAR_50 & VAR_13)
  FUNC_20(VAR_51, VAR_53);
 for (VAR_57 = 0; (u_int64_t)VAR_57 < VAR_42; VAR_57++) {
  VAR_54 = (char *)VAR_52 + VAR_57 * VAR_41;
  VAR_48 = FUNC_10(VAR_51, VAR_54, VAR_24);
  switch (VAR_48) {
  case 145:
   if (VAR_50 & VAR_8)
    FUNC_15(VAR_51, VAR_54);
   break;
  case 142:
  case 144:
  case 146:
  case 143:
  case 140:
  case 141:
   break;
  }
 }
 for (VAR_57 = 0; (u_int64_t)VAR_57 < VAR_44; VAR_57++) {
  VAR_54 = (char *)VAR_53 + VAR_57 * VAR_43;
  VAR_48 = FUNC_10(VAR_51, VAR_54, VAR_27);
  switch (VAR_48) {
  case 128:
   if (VAR_50 & VAR_14)
    FUNC_21(VAR_51, VAR_54, VAR_35);
   break;
  case 139:
   if (VAR_50 & VAR_4)
    FUNC_11(VAR_51, VAR_54);
   break;
  case 131:
   if (VAR_50 & VAR_12)
    FUNC_19(VAR_51, VAR_54);
   break;
  case 132:
   if (VAR_50 & VAR_12)
    FUNC_18(VAR_51, VAR_54);
   break;
  case 135:
   VAR_47 = FUNC_10(VAR_51, VAR_54, VAR_25);
   if (VAR_50 & VAR_10 &&
       FUNC_31(VAR_33 + VAR_47, ".note.tag") == 0)
    FUNC_16(VAR_51, VAR_54);
   break;
  case 138:
   if (VAR_50 & VAR_14)
    FUNC_21(VAR_51, VAR_54, VAR_29);
   break;
  case 133:
   VAR_47 = FUNC_10(VAR_51, VAR_54, VAR_25);
   if (VAR_50 & VAR_6 &&
       FUNC_31(VAR_33 + VAR_47, ".got") == 0)
    FUNC_13(VAR_51, VAR_54);
   break;
  case 137:
   if (VAR_50 & VAR_7)
    FUNC_14(VAR_51, VAR_54);
   break;
  case 134:
  case 129:
  case 136:
  case 130:
   break;
  }
 }

 return 0;
}
