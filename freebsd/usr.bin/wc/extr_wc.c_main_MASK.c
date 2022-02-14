
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cap_rights_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ FUNC_4 (char*) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_5 (int) ;
 int * VAR_12 ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (int,char**,int ,int ,int ,int ) ;
 int FUNC_8 (int,char**,char*) ;
 scalar_t__ VAR_13 ;
 int FUNC_9 (int ,char*) ;
 int FUNC_10 (char*,int ,int ,int ,int ) ;
 int VAR_14 ;
 int FUNC_11 (int ,int ) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_12 () ;
 int FUNC_13 (char*) ;
 int FUNC_14 (char*) ;
 int FUNC_15 (char*) ;
 int FUNC_16 (int ,int ,int ) ;
 int FUNC_17 () ;
 int FUNC_18 (char*) ;
 int FUNC_19 (char*) ;
 int FUNC_20 (char*) ;
 int FUNC_21 (int,char**) ;
 int FUNC_22 (char*) ;

int
FUNC_23(int VAR_21, char *VAR_22[])
{
 int VAR_23, VAR_24, VAR_25;
 cap_rights_t VAR_26;

 (void) FUNC_9(VAR_3, "");

 VAR_21 = FUNC_21(VAR_21, VAR_22);
 if (VAR_21 < 0)
  return (VAR_21);

 while ((VAR_23 = FUNC_8(VAR_21, VAR_22, "clmwL")) != -1)
  switch((char)VAR_23) {
  case 'l':
   VAR_8 = 1;
   break;
  case 'w':
   VAR_11 = 1;
   break;
  case 'c':
   VAR_7 = 1;
   VAR_10 = 0;
   break;
  case 'L':
   VAR_9 = 1;
   break;
  case 'm':
   VAR_10 = 1;
   VAR_7 = 0;
   break;
  case '?':
  default:
   FUNC_12();
  }
 VAR_22 += VAR_13;
 VAR_21 -= VAR_13;

 (void)FUNC_11(VAR_5, VAR_14);

 VAR_12 = FUNC_7(VAR_21, VAR_22, VAR_4, 0,
     FUNC_0(&VAR_26, VAR_1, VAR_0), VAR_2);
 if (VAR_12 == ((void*)0)) {
  FUNC_22("Unable to init casper");
  FUNC_5(1);
 }

 FUNC_1();
 if (FUNC_3() < 0) {
  FUNC_22("Unable to limit stdio");
  FUNC_6(VAR_12);
  FUNC_5(1);
 }

 if (FUNC_2() < 0) {
  FUNC_22("Unable to enter capability mode");
  FUNC_6(VAR_12);
  FUNC_5(1);
 }


 if (VAR_8 + VAR_11 + VAR_7 + VAR_10 + VAR_9 == 0)
  VAR_8 = VAR_11 = VAR_7 = 1;

 VAR_16 = FUNC_16(VAR_15, VAR_6, 0);
 FUNC_18("wc");
 FUNC_20("file");

 VAR_24 = 0;
 VAR_25 = 0;
 if (!*VAR_22) {
   FUNC_19("file");
  if (FUNC_4((char *)((void*)0)) != 0)
   ++VAR_24;
   FUNC_14("file");
 } else {
  do {
    FUNC_19("file");
   if (FUNC_4(*VAR_22) != 0)
    ++VAR_24;
    FUNC_14("file");
   ++VAR_25;
  } while(*++VAR_22);
 }

 FUNC_15("file");

 if (VAR_25 > 1) {
  FUNC_18("total");
  FUNC_10("total", VAR_18, VAR_20, VAR_17, VAR_19);
  FUNC_13("total");
 }

 FUNC_6(VAR_12);
 FUNC_13("wc");
 FUNC_17();
 FUNC_5(VAR_24 == 0 ? 0 : 1);
}
