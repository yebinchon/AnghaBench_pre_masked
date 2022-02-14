
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {scalar_t__ st_uid; int st_mode; } ;
typedef int mode_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_19 ;
 int FUNC_1 (int) ;
 char* VAR_20 ;
 int FUNC_2 (int,char*,char const*) ;
 scalar_t__ VAR_21 ;
 int FUNC_3 (int,char*,char const*) ;
 int FUNC_4 (char*,char**) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int,struct stat*) ;
 int FUNC_7 (int,char**,char*) ;
 scalar_t__ FUNC_8 () ;
 int FUNC_9 (char*) ;
 scalar_t__ FUNC_10 () ;
 scalar_t__ FUNC_11 (char const*,int,int,scalar_t__) ;
 int VAR_22 ;
 int FUNC_12 (char const*,int,int ) ;
 char* VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 int FUNC_13 (char*,scalar_t__) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (int) ;
 int FUNC_16 (char const*) ;
 int FUNC_17 () ;
 int FUNC_18 (char*,char*) ;

int
FUNC_19(int VAR_26, char *VAR_27[])
{
 int VAR_28, VAR_29, VAR_30, VAR_31, VAR_32, VAR_33;
 const char *VAR_34;
 mode_t VAR_35;
 struct stat VAR_36;

 VAR_28 = VAR_32 = VAR_31 = 0;
 VAR_33 = VAR_4;
 VAR_34 = VAR_20;
 while ((VAR_29 = FUNC_7(VAR_26,VAR_27,"aCcdf:g:ip:t:")) != -1)
  switch((char)VAR_29) {
  case 'a':
   VAR_28 = 1;
   break;
  case 'C':
   FUNC_13("1", VAR_2);
   break;
  case 'c':
   FUNC_13(((void*)0), VAR_1);
   break;
  case 'd':
   VAR_32 |= VAR_7;
   break;
  case 'f':
   VAR_34 = VAR_23;
   break;
  case 'g':
   FUNC_13(VAR_23, VAR_10);
   VAR_25 = -VAR_25;
   break;
  case 'i':
   VAR_31 = 1;
   break;
  case 'p':
   FUNC_13(VAR_23, VAR_10);
   break;
  case 't':
   VAR_33 = FUNC_9(VAR_23);
   if (VAR_33 < 0) {
    FUNC_18("unknown facility in %s", VAR_23);
    FUNC_17();
   }
   break;
  default:
   FUNC_17();
  }

 VAR_27 += VAR_24;
 VAR_26 -= VAR_24;


 if (VAR_19 == VAR_10 && VAR_25 == 0 && VAR_26 == 0)
  FUNC_17();


 if (VAR_25 != 0 && VAR_26 > 0) {
  FUNC_17();
 }

 if (VAR_31)
  VAR_33 |= VAR_6;

 (void)FUNC_14(VAR_16, VAR_22);
 if (VAR_19 != VAR_10) {
  if (VAR_19 == VAR_2) {
   VAR_32 = VAR_8 | VAR_7;
   VAR_33 = VAR_0;
  } else {
   VAR_32 |= VAR_25 ? VAR_8 : VAR_9;
  }
  if (FUNC_11(VAR_34, VAR_32, VAR_33, VAR_25) < 0)
   FUNC_2(1, "%s", VAR_34);
  FUNC_5(0);
 }

 VAR_35 = FUNC_15(VAR_17|VAR_18);
 if (VAR_28) {
  if ((VAR_30 = FUNC_12(VAR_34, VAR_11 | VAR_14 | VAR_13,
      VAR_3)) < 0)
   FUNC_2(1, "%s", VAR_34);
  if (FUNC_6(VAR_30, &VAR_36) != 0 || VAR_36.st_uid != FUNC_10())
   FUNC_3(1, "refuse to append to %s not owned by you",
       VAR_34);
  if (!(FUNC_0(VAR_36.st_mode)))
   FUNC_3(1, "%s not regular file", VAR_34);
 } else {
  if (FUNC_16(VAR_34) == -1 && VAR_21 != VAR_5)
   FUNC_2(1, "unlink %s", VAR_34);
  if ((VAR_30 = FUNC_12(VAR_34, VAR_11 | VAR_12 | VAR_14,
      VAR_3)) < 0)
   FUNC_2(1, "%s", VAR_34);
 }
 (void)FUNC_15(VAR_35);
 (void)FUNC_1(VAR_30);

 VAR_33 |= VAR_15;

 if (VAR_26 > 0) {
  if (FUNC_11(VAR_34, VAR_32, VAR_33, FUNC_8()) < 0)
   FUNC_2(1, "%s", VAR_34);
  FUNC_4(*VAR_27, VAR_27);
  FUNC_2(1, "exec of '%s' failed", *VAR_27);
 }
 if (FUNC_11(VAR_34, VAR_32, VAR_33, VAR_25) < 0)
  FUNC_2(1, "%s", VAR_34);
 FUNC_5(0);
}
