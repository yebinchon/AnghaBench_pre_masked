
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 () ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int,char**,char*) ;
 int FUNC_4 (int,char*) ;
 char* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,size_t,size_t) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*,int ,size_t) ;
 int FUNC_9 (char*,size_t,size_t) ;
 int FUNC_10 (char*,int ,size_t) ;
 int FUNC_11 (char*,int ,size_t) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (char*,char*) ;
 int FUNC_15 (int,char*,char*,size_t) ;
 int FUNC_16 (char*,char*,void*) ;
 int VAR_8 ;
 int FUNC_17 (char*,int ) ;
 void* VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_18 (char*,char*) ;
 void* FUNC_19 (void*,int ,int ) ;
 int FUNC_20 () ;
 int FUNC_21 () ;

int FUNC_22 (int VAR_13, char **VAR_14)
{
 int VAR_15, VAR_16, VAR_17, VAR_18 = 0, VAR_19, VAR_20;
 char *VAR_21[VAR_0], *VAR_22 = ((void*)0);
 char *VAR_23 = ((void*)0);
 size_t VAR_24 = 0, VAR_25 = 0, VAR_26 = 0, VAR_27 = 0;
 enum {
  CMD_ERASE,
  CMD_WRITE,
  CMD_UNLOCK,
  CMD_JFFS2WRITE,
  CMD_FIXTRX,
  CMD_FIXSEAMA,
  CMD_FIXWRG,
  CMD_FIXWRGG,
  CMD_VERIFY,
  CMD_DUMP,
  CMD_RESETBC,
 } VAR_28 = -1;

 VAR_21[0] = ((void*)0);
 VAR_17 = 0;
 VAR_19 = 0;
 VAR_2 = 0;
 VAR_11 = 0;
 VAR_8 = 0;

 while ((VAR_15 = FUNC_3(VAR_13, VAR_14,



   "frnqe:d:s:j:p:o:c:l:")) != -1)
  switch (VAR_15) {
   case 'f':
    VAR_19 = 1;
    break;
   case 'r':
    VAR_17 = 1;
    break;
   case 'n':
    VAR_8 = 1;
    break;
   case 'j':
    VAR_7 = VAR_9;
    break;
   case 's':
    VAR_3 = 0;
    VAR_5 = FUNC_19(VAR_9, 0, 0);
    if (VAR_3) {
      FUNC_2(VAR_12, "-s: illegal numeric string\n");
      FUNC_21();
    }
    break;
   case 'q':
    VAR_11++;
    break;
   case 'e':
    VAR_16 = 0;
    while ((VAR_21[VAR_16] != ((void*)0)) && ((VAR_16 + 1) < VAR_0))
     VAR_16++;

    VAR_21[VAR_16++] = VAR_9;
    VAR_21[VAR_16] = ((void*)0);
    break;
   case 'd':
    VAR_6 = VAR_9;
    break;
   case 'p':
    VAR_3 = 0;
    VAR_26 = FUNC_19(VAR_9, 0, 0);
    if (VAR_3) {
     FUNC_2(VAR_12, "-p: illegal numeric string\n");
     FUNC_21();
    }
    break;
   case 'l':
    VAR_3 = 0;
    VAR_27 = FUNC_19(VAR_9, 0, 0);
    if (VAR_3) {
     FUNC_2(VAR_12, "-l: illegal numeric string\n");
     FUNC_21();
    }
    break;
   case 'o':
    VAR_3 = 0;
    VAR_24 = FUNC_19(VAR_9, 0, 0);
    if (VAR_3) {
     FUNC_2(VAR_12, "-o: illegal numeric string\n");
     FUNC_21();
    }
    break;
   case 'c':
    VAR_3 = 0;
    VAR_25 = FUNC_19(VAR_9, 0, 0);
    if (VAR_3) {
     FUNC_2(VAR_12, "-c: illegal numeric string\n");
     FUNC_21();
    }
    break;





   case '?':
   default:
    FUNC_21();
  }
 VAR_13 -= VAR_10;
 VAR_14 += VAR_10;

 if (VAR_13 < 2)
  FUNC_21();

 if ((FUNC_18(VAR_14[0], "unlock") == 0) && (VAR_13 == 2)) {
  VAR_28 = CMD_UNLOCK;
  VAR_22 = VAR_14[1];
 } else if ((FUNC_18(VAR_14[0], "erase") == 0) && (VAR_13 == 2)) {
  VAR_28 = CMD_ERASE;
  VAR_22 = VAR_14[1];
 } else if (((FUNC_18(VAR_14[0], "resetbc") == 0) && (VAR_13 == 2)) && &FUNC_12) {
  VAR_28 = CMD_RESETBC;
  VAR_22 = VAR_14[1];
 } else if (((FUNC_18(VAR_14[0], "fixtrx") == 0) && (VAR_13 == 2)) && &FUNC_9) {
  VAR_28 = CMD_FIXTRX;
  VAR_22 = VAR_14[1];
 } else if (((FUNC_18(VAR_14[0], "fixseama") == 0) && (VAR_13 == 2)) && &FUNC_8) {
  VAR_28 = CMD_FIXSEAMA;
  VAR_22 = VAR_14[1];
 } else if (((FUNC_18(VAR_14[0], "fixwrg") == 0) && (VAR_13 == 2)) && &FUNC_10) {
  VAR_28 = CMD_FIXWRG;
  VAR_22 = VAR_14[1];
 } else if (((FUNC_18(VAR_14[0], "fixwrgg") == 0) && (VAR_13 == 2)) && &FUNC_11) {
  VAR_28 = CMD_FIXWRGG;
  VAR_22 = VAR_14[1];
 } else if ((FUNC_18(VAR_14[0], "verify") == 0) && (VAR_13 == 3)) {
  VAR_28 = CMD_VERIFY;
  VAR_4 = VAR_14[1];
  VAR_22 = VAR_14[2];
 } else if ((FUNC_18(VAR_14[0], "dump") == 0) && (VAR_13 == 2)) {
  VAR_28 = CMD_DUMP;
  VAR_22 = VAR_14[1];
 } else if ((FUNC_18(VAR_14[0], "write") == 0) && (VAR_13 == 3)) {
  VAR_28 = CMD_WRITE;
  VAR_22 = VAR_14[2];

  if (FUNC_18(VAR_14[1], "-") == 0) {
   VAR_4 = "<stdin>";
   VAR_18 = 0;
  } else {
   VAR_4 = VAR_14[1];
   if ((VAR_18 = FUNC_17(VAR_14[1], VAR_1)) < 0) {
    FUNC_2(VAR_12, "Couldn't open image file: %s!\n", VAR_4);
    FUNC_1(1);
   }
  }

  if (!FUNC_5(VAR_22)) {
   FUNC_2(VAR_12, "Can't open device for writing!\n");
   FUNC_1(1);
  }

  if (!FUNC_4(VAR_18, VAR_22) && !VAR_19) {
   FUNC_2(VAR_12, "Image check failed.\n");
   FUNC_1(1);
  }
 } else if ((FUNC_18(VAR_14[0], "jffs2write") == 0) && (VAR_13 == 3)) {
  VAR_28 = CMD_JFFS2WRITE;
  VAR_22 = VAR_14[2];

  VAR_4 = VAR_14[1];
  if (!FUNC_5(VAR_22)) {
   FUNC_2(VAR_12, "Can't open device for writing!\n");
   FUNC_1(1);
  }
 } else {
  FUNC_21();
 }

 FUNC_20();

 VAR_16 = 0;
 VAR_20 = 0;
 while (VAR_21[VAR_16] != ((void*)0)) {
  FUNC_13(VAR_21[VAR_16]);
  FUNC_7(VAR_21[VAR_16]);
  if (FUNC_18(VAR_21[VAR_16], VAR_22) == 0)
   VAR_20 = 1;
  VAR_16++;
 }

 switch (VAR_28) {
  case CMD_UNLOCK:
   if (!VAR_20)
    FUNC_13(VAR_22);
   break;
  case CMD_VERIFY:
   FUNC_14(VAR_22, VAR_4);
   break;
  case CMD_DUMP:
   FUNC_6(VAR_22, VAR_24, VAR_27);
   break;
  case CMD_ERASE:
   if (!VAR_20)
    FUNC_13(VAR_22);
   FUNC_7(VAR_22);
   break;
  case CMD_WRITE:
   if (!VAR_20)
    FUNC_13(VAR_22);
   FUNC_15(VAR_18, VAR_22, VAR_23, VAR_26);
   break;
  case CMD_JFFS2WRITE:
   if (!VAR_20)
    FUNC_13(VAR_22);
   FUNC_16(VAR_22, VAR_4, VAR_6);
   break;
  case CMD_FIXTRX:
   if (&FUNC_9) {
    FUNC_9(VAR_22, VAR_24, VAR_25);
   }
   break;
  case CMD_RESETBC:
   if (&FUNC_12) {
    FUNC_12(VAR_22);
   }
   break;
  case CMD_FIXSEAMA:
   if (&FUNC_8)
    FUNC_8(VAR_22, 0, VAR_25);
   break;
  case CMD_FIXWRG:
   if (&FUNC_10)
    FUNC_10(VAR_22, 0, VAR_25);
   break;
  case CMD_FIXWRGG:
   if (&FUNC_11)
    FUNC_11(VAR_22, 0, VAR_25);
   break;
 }

 FUNC_20();

 if (VAR_17)
  FUNC_0();

 return 0;
}
