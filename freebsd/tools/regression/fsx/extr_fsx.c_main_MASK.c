
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int tv_nsec; } ;
typedef int ssize_t ;
typedef scalar_t__ off_t ;
typedef int logfile ;
typedef int goodfile ;


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
 int FUNC_0 () ;
 int VAR_17 ;
 int FUNC_1 (int ,struct timespec*) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_3 (int,char*) ;
 int FUNC_4 (int) ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 char* VAR_23 ;
 int * FUNC_5 (char*,char*) ;
 int FUNC_6 (int ,char*,...) ;
 scalar_t__ VAR_24 ;
 int * VAR_25 ;
 void* FUNC_7 (char*,char**) ;
 int FUNC_8 (int,char**,char*) ;
 scalar_t__ FUNC_9 () ;
 char* VAR_26 ;
 int FUNC_10 (int,int ,int) ;
 int VAR_27 ;
 int VAR_28 ;
 void* FUNC_11 (scalar_t__,scalar_t__,int ) ;
 scalar_t__ FUNC_12 (int) ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int FUNC_13 (char*,char,int) ;
 int VAR_34 ;
 void* VAR_35 ;
 int VAR_36 ;
 scalar_t__ FUNC_14 (char*,int,int) ;
 char* VAR_37 ;
 scalar_t__ VAR_38 ;
 char* VAR_39 ;
 scalar_t__ VAR_40 ;
 scalar_t__ VAR_41 ;
 void* VAR_42 ;
 int FUNC_15 (char*) ;
 int FUNC_16 (char*) ;
 int VAR_43 ;
 int FUNC_17 () ;
 int VAR_44 ;
 void* VAR_45 ;
 int FUNC_18 (int) ;
 int VAR_46 ;
 int FUNC_19 (int ) ;
 int FUNC_20 (int ,char*,int ,int ) ;
 int FUNC_21 (int ,int ) ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int FUNC_22 (char*,char*) ;
 int FUNC_23 (char*,char*,int) ;
 int FUNC_24 (char*,char*,int) ;
 int VAR_51 ;
 char* VAR_52 ;
 int FUNC_25 () ;
 void* VAR_53 ;
 int FUNC_26 () ;
 int FUNC_27 (char*,...) ;
 int FUNC_28 (scalar_t__,char*,size_t) ;
 void* VAR_54 ;

int
FUNC_29(int VAR_55, char **VAR_56)
{
 int VAR_57, VAR_58;
 char *VAR_59;
 char VAR_60[1024];
 char VAR_61[1024];
 struct timespec VAR_62;

 VAR_60[0] = 0;
 VAR_61[0] = 0;

 VAR_41 = FUNC_9();
 VAR_40 = VAR_41 - 1;

 FUNC_20(VAR_50, (char *)0, VAR_16, 0);

 while ((VAR_58 = FUNC_8(VAR_55, VAR_56,
     "b:c:di:l:m:no:p:qr:s:t:w:D:LN:OP:RS:UW")) != -1)
  switch (VAR_58) {
  case 'b':
   VAR_47 = FUNC_7(VAR_37, &VAR_59);
   if (!VAR_43)
    FUNC_6(VAR_50, "Will begin at operation %d\n",
     VAR_47);
   if (VAR_47 == 0)
    FUNC_26();
   VAR_47 -= 1;
   break;
  case 'c':
   VAR_18 = FUNC_7(VAR_37, &VAR_59);
   if (!VAR_43)
    FUNC_6(VAR_50,
     "Chance of close/open is 1 in %d\n",
     VAR_18);
   if (VAR_18 <= 0)
    FUNC_26();
   break;
  case 'd':
   VAR_19 = 1;
   break;
  case 'i':
   VAR_27 = FUNC_7(VAR_37, &VAR_59);
   if (!VAR_43)
    FUNC_6(VAR_50,
     "Chance of MS_INVALIDATE is 1 in %d\n",
     VAR_27);
   if (VAR_27 <= 0)
    FUNC_26();
   break;
  case 'l':
   VAR_32 = FUNC_7(VAR_37, &VAR_59);
   if (VAR_32 <= 0)
    FUNC_26();
   break;
  case 'm':
   VAR_35 = FUNC_7(VAR_37, &VAR_59);
   if (VAR_35 < 0)
    FUNC_26();
   if (!VAR_59 || *VAR_59++ != ':')
    FUNC_26();
   VAR_34 = FUNC_7(VAR_59, &VAR_59);
   if (VAR_34 < 0)
    FUNC_26();
   if (VAR_34 == 0)
    VAR_34 = -1;
   VAR_19 = 1;
  case 'n':
   VAR_48 = 0;
   break;
  case 'o':
   VAR_33 = FUNC_7(VAR_37, &VAR_59);
   if (VAR_33 <= 0)
    FUNC_26();
   break;
  case 'p':
   VAR_42 = FUNC_7(VAR_37, &VAR_59);
   if (VAR_42 < 0)
    FUNC_26();
   break;
  case 'q':
   VAR_43 = 1;
   break;
  case 'r':
   VAR_45 = FUNC_7(VAR_37, &VAR_59);
   if (VAR_45 <= 0)
    FUNC_26();
   break;
  case 's':
   VAR_51 = FUNC_7(VAR_37, &VAR_59);
   if (VAR_51 < 0 || VAR_51 > 1)
    FUNC_26();
   break;
  case 't':
   VAR_53 = FUNC_7(VAR_37, &VAR_59);
   if (VAR_53 <= 0)
    FUNC_26();
   break;
  case 'w':
   VAR_54 = FUNC_7(VAR_37, &VAR_59);
   if (VAR_54 <= 0)
    FUNC_26();
   break;
  case 'D':
   VAR_20 = FUNC_7(VAR_37, &VAR_59);
   if (VAR_20 < 1)
    FUNC_26();
   break;
  case 'L':
   VAR_28 = 1;
   break;
  case 'N':
   VAR_36 = FUNC_7(VAR_37, &VAR_59);
   if (VAR_36 < 0)
    FUNC_26();
   break;
  case 'O':
   VAR_44 = 0;
   break;
  case 'P':
   FUNC_24(VAR_60, VAR_37, sizeof(VAR_60));
   FUNC_22(VAR_60, "/");
   FUNC_24(VAR_61, VAR_37, sizeof(VAR_61));
   FUNC_22(VAR_61, "/");
   break;
  case 'R':
   VAR_30 = 0;
   break;
  case 'S':
   VAR_46 = FUNC_7(VAR_37, &VAR_59);
   if (VAR_46 == 0) {
    if (FUNC_1(VAR_0, &VAR_62) != 0)
     FUNC_3(1, "clock_gettime");
    VAR_46 = VAR_62.tv_nsec % 10000;
   }
   if (!VAR_43)
    FUNC_6(VAR_50, "Seed set to %d\n", VAR_46);
   if (VAR_46 < 0)
    FUNC_26();
   break;
  case 'W':
   VAR_31 = 0;
   if (!VAR_43)
    FUNC_6(VAR_50, "mapped writes DISABLED\n");
   break;
  case 'U':
   VAR_29 = 0;
   if (!VAR_43)
    FUNC_6(VAR_50, "mapped msync DISABLED\n");
   break;

  default:
   FUNC_26();

  }
 VAR_55 -= VAR_38;
 VAR_56 += VAR_38;
 if (VAR_55 != 1)
  FUNC_26();
 VAR_23 = VAR_56[0];

 FUNC_21(VAR_7, VAR_17);
 FUNC_21(VAR_8, VAR_17);
 FUNC_21(VAR_9, VAR_17);
 FUNC_21(VAR_6, VAR_17);
 FUNC_21(VAR_10, VAR_17);
 FUNC_21(VAR_14, VAR_17);
 FUNC_21(VAR_15, VAR_17);
 FUNC_21(VAR_13, VAR_17);
 FUNC_21(VAR_11, VAR_17);
 FUNC_21(VAR_12, VAR_17);

 FUNC_10(VAR_46, VAR_49, 256);
 FUNC_19(VAR_49);
 VAR_21 = FUNC_14(VAR_23, VAR_2|(VAR_28 ? 0 : VAR_1|VAR_3), 0666);
 if (VAR_21 < 0) {
  FUNC_16(VAR_23);
  FUNC_4(91);
 }
 FUNC_23(VAR_60, VAR_23, 256);
 FUNC_22 (VAR_60, ".fsxgood");
 VAR_24 = FUNC_14(VAR_60, VAR_2|VAR_1|VAR_3, 0666);
 if (VAR_24 < 0) {
  FUNC_16(VAR_60);
  FUNC_4(92);
 }
 FUNC_23(VAR_61, VAR_23, 256);
 FUNC_22 (VAR_61, ".fsxlog");
 VAR_25 = FUNC_5(VAR_61, "w");
 if (VAR_25 == ((void*)0)) {
  FUNC_16(VAR_61);
  FUNC_4(93);
 }
 if (VAR_28) {
  off_t VAR_63;
  VAR_22 = VAR_32 = FUNC_11(VAR_21, (off_t)0, VAR_4);
  if (VAR_22 == (off_t)-1) {
   FUNC_16(VAR_23);
   FUNC_27("main: lseek eof");
   FUNC_4(94);
  }
  VAR_63 = FUNC_11(VAR_21, (off_t)0, VAR_5);
  if (VAR_63 == (off_t)-1) {
   FUNC_16(VAR_23);
   FUNC_27("main: lseek 0");
   FUNC_4(95);
  }
 }
 VAR_39 = (char *) FUNC_12(VAR_32);
 for (VAR_57 = 0; VAR_57 < VAR_32; VAR_57++)
  VAR_39[VAR_57] = FUNC_17() % 256;
 VAR_26 = (char *) FUNC_12(VAR_32);
 FUNC_13(VAR_26, '\0', VAR_32);
 VAR_52 = (char *) FUNC_12(VAR_33);
 FUNC_13(VAR_52, '\0', VAR_33);
 if (VAR_28) {
  ssize_t VAR_64;

  VAR_64 = FUNC_28(VAR_21, VAR_26, (size_t)VAR_32);
  if (VAR_64 != VAR_32) {
   if (VAR_64 == -1) {
    FUNC_16(VAR_23);
    FUNC_27("main: error on write");
   } else
    FUNC_27("main: short write, 0x%x bytes instead of 0x%lx\n",
         (unsigned)VAR_64, VAR_32);
   FUNC_4(98);
  }
 } else
  FUNC_0();

 while (VAR_36 == -1 || VAR_36--)
  FUNC_25();

 if (FUNC_2(VAR_21)) {
  FUNC_16("close");
  FUNC_18(99);
 }
 FUNC_15("All operations completed A-OK!\n");

 FUNC_4(0);
 return 0;
}
