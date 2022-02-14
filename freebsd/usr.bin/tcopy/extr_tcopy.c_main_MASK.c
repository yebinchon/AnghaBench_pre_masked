
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sig_t ;
typedef int intmax_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 char* VAR_9 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,char*,...) ;
 scalar_t__ VAR_10 ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_11 ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 (int,char**,char*) ;
 char* FUNC_7 (int) ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_8 (char const*,int ,int ) ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 int FUNC_9 (int,char*,int) ;
 scalar_t__ VAR_19 ;
 int FUNC_10 (int) ;
 int FUNC_11 (int ,int ) ;
 scalar_t__ VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 scalar_t__ VAR_23 ;
 int FUNC_12 () ;
 int FUNC_13 (int,int,char*) ;
 int FUNC_14 (char*,int,int) ;
 int FUNC_15 (char*,...) ;
 int FUNC_16 (int,char*,int) ;
 int FUNC_17 (int,int ) ;

int
FUNC_18(int VAR_24, char *VAR_25[])
{
 int VAR_26, VAR_27, VAR_28, VAR_29, VAR_30;
 enum {READ, VERIFY, COPY, COPYVERIFY} VAR_31 = READ;
 sig_t VAR_32;
 int VAR_33, VAR_34;
 char *VAR_35;
 const char *VAR_36;

 VAR_16 = VAR_22;
 VAR_12 = 1;
 VAR_30 = -1;
 while ((VAR_33 = FUNC_6(VAR_24, VAR_25, "cs:vx")) != -1)
  switch((char)VAR_33) {
  case 'c':
   VAR_31 = COPYVERIFY;
   break;
  case 's':
   VAR_15 = FUNC_0(VAR_17);
   if (VAR_15 <= 0) {
    FUNC_15("illegal block size");
    FUNC_12();
   }
   VAR_12 = 0;
   break;
  case 'v':
   VAR_31 = VERIFY;
   break;
  case 'x':
   VAR_16 = VAR_21;
   break;
  case '?':
  default:
   FUNC_12();
  }
 VAR_24 -= VAR_18;
 VAR_25 += VAR_18;

 switch(VAR_24) {
 case 0:
  if (VAR_31 != READ)
   FUNC_12();
  VAR_36 = VAR_9;
  break;
 case 1:
  if (VAR_31 != READ)
   FUNC_12();
  VAR_36 = VAR_25[0];
  break;
 case 2:
  if (VAR_31 == READ)
   VAR_31 = COPY;
  VAR_36 = VAR_25[0];
  if ((VAR_30 = FUNC_8(VAR_25[1], VAR_31 == VERIFY ? VAR_4 :
      VAR_31 == COPY ? VAR_6 : VAR_5, VAR_0)) < 0)
   FUNC_1(3, "%s", VAR_25[1]);
  break;
 default:
  FUNC_12();
 }

 if ((VAR_29 = FUNC_8(VAR_36, VAR_4, 0)) < 0)
  FUNC_1(1, "%s", VAR_36);

 VAR_35 = FUNC_7(VAR_15);

 if (VAR_31 == VERIFY) {
  FUNC_13(VAR_29, VAR_30, VAR_35);
  FUNC_3(0);
 }

 if ((VAR_32 = FUNC_11(VAR_7, VAR_8)) != VAR_8)
  (void) FUNC_11(VAR_7, VAR_13);

 VAR_34 = 0;
 for (VAR_26 = VAR_3;;) {
  if ((VAR_27 = FUNC_9(VAR_29, VAR_35, VAR_15)) == -1) {
   while (VAR_10 == VAR_1 && (VAR_15 -= 1024)) {
    VAR_27 = FUNC_9(VAR_29, VAR_35, VAR_15);
    if (VAR_27 >= 0)
     goto r1;
   }
   FUNC_1(1, "read error, file %d, record %ju", VAR_11, (intmax_t)VAR_19);
  } else if (VAR_27 != VAR_26) {
   if (VAR_26 != 0 && VAR_26 != VAR_3) {
    if (VAR_14 == 0 && VAR_27 == 0)
     FUNC_5(VAR_16, "%jd records\n", (intmax_t)VAR_19);
    else if (VAR_19 - VAR_14 > 1)
     FUNC_5(VAR_16, "records %jd to %jd\n",
         (intmax_t)VAR_14, (intmax_t)VAR_19);
    else
     FUNC_5(VAR_16, "record %jd\n", (intmax_t)VAR_14);
   }
   if (VAR_27 != 0)
    FUNC_5(VAR_16, "file %d: block size %d: ",
        VAR_11, VAR_27);
   (void) FUNC_4(VAR_22);
   VAR_14 = VAR_19;
  }
r1: VAR_12 = 0;
  if (VAR_27 > 0) {
   if (VAR_31 == COPY || VAR_31 == COPYVERIFY) {
    if (VAR_34) {
     FUNC_17(VAR_30, VAR_2);
     VAR_34 = 0;
    }
    VAR_28 = FUNC_16(VAR_30, VAR_35, VAR_27);
    if (VAR_28 != VAR_27) {
     if (VAR_28 == -1) {
      FUNC_14("write error, file %d, record %ju", VAR_11,
          (intmax_t)VAR_19);
     } else {
      FUNC_15("write error, file %d, record %ju", VAR_11,
          (intmax_t)VAR_19);
      FUNC_15("write (%d) != read (%d)", VAR_28, VAR_27);
     }
     FUNC_2(5, "copy aborted");
    }
   }
   VAR_20 += VAR_27;
   VAR_19++;
  } else {
   if (VAR_26 <= 0 && VAR_26 != VAR_3) {
    FUNC_5(VAR_16, "eot\n");
    break;
   }
   FUNC_5(VAR_16,
       "file %d: eof after %jd records: %jd bytes\n",
       VAR_11, (intmax_t)VAR_19, (intmax_t)VAR_20);
   VAR_34 = 1;
   VAR_11++;
   VAR_23 += VAR_20;
   VAR_20 = VAR_19 = VAR_14 = 0;
   VAR_26 = 0;
  }
  VAR_26 = VAR_27;
 }
 FUNC_5(VAR_16, "total length: %jd bytes\n", (intmax_t)VAR_23);
 (void)FUNC_11(VAR_7, VAR_32);
 if (VAR_31 == COPY || VAR_31 == COPYVERIFY) {
  FUNC_17(VAR_30, VAR_2);
  FUNC_17(VAR_30, VAR_2);
  if (VAR_31 == COPYVERIFY) {
   FUNC_10(VAR_30);
   FUNC_10(VAR_29);
   FUNC_13(VAR_29, VAR_30, VAR_35);
  }
 }
 FUNC_3(0);
}
