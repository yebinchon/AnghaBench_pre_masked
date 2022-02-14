
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 double VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int,char*,...) ;
 int VAR_8 ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int,char**,char*) ;
 int FUNC_6 (char const*,int ,int ) ;
 char* VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_7 (int) ;
 double FUNC_8 () ;
 int FUNC_9 (int,int,int,double) ;
 int FUNC_10 (int ,int *) ;
 int FUNC_11 (int ,char*) ;
 int FUNC_12 () ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_13 (char*,char*) ;
 double FUNC_14 (char*,char**) ;
 int FUNC_15 () ;

int
FUNC_16(int VAR_13, char *VAR_14[])
{
 double VAR_15;
 int VAR_16, VAR_17, VAR_18, VAR_19, VAR_20, VAR_21,
  VAR_22, VAR_23, VAR_24;
 char *VAR_25;
 const char *VAR_26;

 VAR_15 = 0;
 VAR_26 = "/dev/fd/0";
 VAR_20 = VAR_6;
 VAR_18 = VAR_19 = VAR_24 = 0;
 VAR_23 = 1;

 (void)FUNC_11(VAR_2, "");

 while ((VAR_16 = FUNC_5(VAR_13, VAR_14, "ef:hlruUw")) != -1)
  switch (VAR_16) {
  case 'e':
   VAR_18 = 1;
   break;
  case 'f':
   VAR_19 = 1;
   if (FUNC_13(VAR_9, "-") != 0)
    VAR_26 = VAR_9;
   break;
  case 'l':
   VAR_19 = 1;
   VAR_20 = VAR_5;
   break;
  case 'r':
   VAR_24 = 1;
   break;
  case 'u':
   VAR_19 = 1;
   VAR_23 = 1;
   break;
  case 'U':
   VAR_19 = 1;
   VAR_23 = 0;
   break;
  case 'w':
   VAR_19 = 1;
   VAR_20 = VAR_7;
   break;
  default:
  case '?':
   FUNC_15();

  }

 VAR_13 -= VAR_10;
 VAR_14 += VAR_10;

 switch (VAR_13) {
 case 0:
  VAR_15 = (VAR_19 ? 1 : 2);
  break;
 case 1:
  VAR_8 = 0;
  VAR_15 = FUNC_14(*VAR_14, &VAR_25);
  if (VAR_8 == VAR_1)
   FUNC_0(1, "%s", *VAR_14);
  if (VAR_15 <= 0 || *VAR_25 != '\0')
   FUNC_1(1, "denominator is not valid.");
  if (VAR_18 && VAR_15 > 256)
   FUNC_1(1, "denominator must be <= 256 for random exit.");
  break;
 default:
  FUNC_15();

 }

 FUNC_12();





 if (VAR_24)
  FUNC_10(VAR_12, ((void*)0));





 if (VAR_19) {
  if ((VAR_17 = FUNC_6(VAR_26, VAR_3, 0)) < 0)
   FUNC_0(1, "%s", VAR_26);
  VAR_21 = FUNC_9(VAR_17, VAR_20, VAR_23, VAR_15);
  if (!VAR_18)
   return(VAR_21);
 }


 if (VAR_18)
  return (int)(VAR_15 * FUNC_8() / VAR_4);







 VAR_22 = (int)(VAR_15 * FUNC_8() / VAR_4) == 0;
 while ((VAR_16 = FUNC_4()) != VAR_0) {
  if (VAR_22)
   (void)FUNC_7(VAR_16);
  if (VAR_16 == '\n') {

   if (FUNC_3(VAR_12))
    FUNC_0(2, "stdout");


   VAR_22 = (int)(VAR_15 * FUNC_8() /
    VAR_4) == 0;
  }
 }
 if (FUNC_3(VAR_11))
  FUNC_0(2, "stdin");
 FUNC_2 (0);
}
