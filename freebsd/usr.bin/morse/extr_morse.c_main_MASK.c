
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int c_cflag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
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
 char* VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 char* VAR_20 ;
 int VAR_21 ;
 void* FUNC_0 (scalar_t__) ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (int,char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int,int ,...) ;
 int FUNC_6 (int ) ;
 scalar_t__ VAR_27 ;
 int FUNC_7 () ;
 int FUNC_8 (int,char**,int ) ;
 int VAR_28 ;
 int FUNC_9 (int,int ,int*) ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int FUNC_10 (int) ;
 char* FUNC_11 (int ) ;
 TYPE_1__ VAR_34 ;
 int VAR_35 ;
 int FUNC_12 (char*,int,...) ;
 scalar_t__ VAR_36 ;
 scalar_t__ VAR_37 ;
 TYPE_1__ VAR_38 ;
 int VAR_39 ;
 int FUNC_13 (char*) ;
 int FUNC_14 (int) ;
 int VAR_40 ;
 int * FUNC_15 (int ,char*) ;
 int FUNC_16 (int ,int ,int ,int ) ;
 int VAR_41 ;
 int VAR_42 ;
 int FUNC_17 (int ,int ) ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 scalar_t__ FUNC_18 (char*,char*) ;
 char* FUNC_19 (char*,int ) ;
 int FUNC_20 (int,TYPE_1__*) ;
 int FUNC_21 (int,int ,TYPE_1__*) ;
 int VAR_46 ;

int
FUNC_22(int VAR_47, char *VAR_48[])
{
 int VAR_49, VAR_50;
 char *VAR_51, *VAR_52;

 while ((VAR_49 = FUNC_8(VAR_47, VAR_48, VAR_7)) != -1)
  switch ((char) VAR_49) {
  case 'c':
   VAR_23 = FUNC_0(VAR_36);
   break;
  case 'd':
   VAR_24 = VAR_36;
   break;
  case 'e':
   VAR_26 = 1;
   FUNC_16(VAR_45, 0, VAR_21, 0);
   break;
  case 'f':
   VAR_27 = FUNC_0(VAR_36);
   break;
  case 'l':
   VAR_32 = 1;
   break;





  case 'r':
   VAR_40 = 1;
   break;
  case 's':
   VAR_41 = 1;
   break;
  case 'w':
   VAR_46 = FUNC_0(VAR_36);
   break;
  case '?':
  default:
   FUNC_3(1, VAR_20);
  }
 if ((VAR_41 && VAR_32) || (VAR_41 && VAR_40) || (VAR_32 && VAR_40)) {
  FUNC_3(1, "morse: only one of -l, -s, and -r allowed\n");
 }
 if ((VAR_39 || VAR_24) && (VAR_41 || VAR_32)) {
  FUNC_3(1, "morse: only one of -p, -d and -l, -s allowed\n");
 }
 if (VAR_23 == 0) {
  VAR_23 = VAR_46;
 }
 if ((VAR_39 || VAR_24) && ((VAR_46 < 1) || (VAR_46 > 60) || (VAR_23 < 1) || (VAR_23 > 60))) {
  FUNC_3(1, "morse: insane speed\n");
 }
 if ((VAR_39 || VAR_24) && (VAR_27 == 0)) {
  VAR_27 = VAR_4;
 }







 if (VAR_24) {
  if ((VAR_33 = FUNC_12(VAR_24, VAR_10 | VAR_9)) == -1) {
   FUNC_2(1, "open tty line");
  }
  if (FUNC_20(VAR_33, &VAR_38) == -1) {
   FUNC_2(1, "tcgetattr() failed");
  }
  VAR_34 = VAR_38;
  VAR_34.c_cflag |= VAR_0;
  FUNC_21(VAR_33, VAR_16, &VAR_34);
  VAR_50 = FUNC_5(VAR_33, VAR_5);
  VAR_50 &= ~VAR_9;
  FUNC_5(VAR_33, VAR_6, &VAR_50);
  FUNC_9(VAR_33, VAR_17, &VAR_50);
  VAR_50 &= ~VAR_19;
  VAR_35 = VAR_50;
  FUNC_9(VAR_33, VAR_18, &VAR_50);
  (void)FUNC_17(VAR_11, VAR_42);
  (void)FUNC_17(VAR_12, VAR_42);
  (void)FUNC_17(VAR_13, VAR_42);
  (void)FUNC_17(VAR_14, VAR_42);
 }
 if (VAR_39 || VAR_24) {
  VAR_25 = VAR_46 / 2.4;
  VAR_25 = 1 / VAR_25;
  VAR_25 = VAR_25 / 2;

  VAR_25 = VAR_25 * 100;

  VAR_22 = VAR_23 / 2.4;
  VAR_22 = 1 / VAR_22;
  VAR_22 = VAR_22 / 2;

  VAR_22 = VAR_22 * 100;
 }

 VAR_47 -= VAR_37;
 VAR_48 += VAR_37;

 if (FUNC_15(VAR_8, "") != ((void*)0) &&
     *(VAR_52 = FUNC_11(VAR_1)) != '\0') {
  if (FUNC_18(VAR_52, "KOI8-R") == 0)
   VAR_28 = VAR_31;
  else if (FUNC_18(VAR_52, "ISO8859-1") == 0 ||
    FUNC_18(VAR_52, "ISO8859-15") == 0)
   VAR_28 = VAR_29;
  else if (FUNC_18(VAR_52, "ISO8859-7") == 0)
   VAR_28 = VAR_30;
 }

 if (VAR_32) {
  FUNC_13("m");
 }
 if (VAR_40) {
  if (*VAR_48) {
   do {
    VAR_51 = FUNC_19(*VAR_48, VAR_2);
    if (VAR_51 == ((void*)0)) {
     FUNC_1(*VAR_48);
    }
    else {
     while (VAR_51) {
      FUNC_1(VAR_51);
      VAR_51 = FUNC_19(((void*)0), VAR_2);
     }
    }
   } while (*++VAR_48);
   FUNC_14('\n');
  } else {
   FUNC_6(VAR_44);
  }
 }
 else if (*VAR_48) {
  do {
   for (VAR_51 = *VAR_48; *VAR_51; ++VAR_51) {
    if (VAR_26)
     FUNC_14(*VAR_51);
    FUNC_10(*VAR_51);
   }
   if (VAR_26)
    FUNC_14(' ');
   FUNC_10(' ');
  } while (*++VAR_48);
 } else {
  while ((VAR_49 = FUNC_7()) != VAR_3) {
   if (VAR_26)
    FUNC_14(VAR_49);
   FUNC_10(VAR_49);
  }
 }
 if (VAR_24)
  FUNC_21(VAR_33, VAR_16, &VAR_38);
 FUNC_4(0);
}
