
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int cap_rights_t ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned long VAR_5 ;
 int FUNC_0 (int *,int ,int ) ;
 scalar_t__ FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 () ;
 scalar_t__ FUNC_5 (int ,unsigned long*,int) ;
 scalar_t__ FUNC_6 (int ,int *) ;
 int VAR_6 ;
 int * FUNC_7 (char*) ;
 int VAR_7 ;
 int FUNC_8 (int,char*,...) ;
 int FUNC_9 (int,char*,int ) ;
 int FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int *) ;
 int * FUNC_12 (char const*,char*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 scalar_t__ FUNC_15 (char**,size_t*,int *) ;
 int FUNC_16 (int,char**,char*,int ,int *) ;
 int VAR_8 ;
 int FUNC_17 (char*,char*) ;
 int VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 int FUNC_18 (char**) ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_19 (int ,char*) ;
 int FUNC_20 (int *,char*) ;
 int * VAR_15 ;
 int * VAR_16 ;
 scalar_t__ FUNC_21 (char*,char*) ;
 void* FUNC_22 (int ,char**,int) ;
 int VAR_17 ;
 int FUNC_23 () ;
 int FUNC_24 (int *,int *) ;

int
FUNC_25 (int VAR_18, char *VAR_19[])
{
 wchar_t *VAR_20, *VAR_21;
 FILE *VAR_22, *VAR_23;
 int VAR_24, VAR_25;
 size_t VAR_26, VAR_27, VAR_28;
 char *VAR_29, *VAR_30, *VAR_31;
 const char *VAR_32;
 cap_rights_t VAR_33;

 (void) FUNC_19(VAR_4, "");

 FUNC_18(VAR_19);
 while ((VAR_24 = FUNC_16(VAR_18, VAR_19, "+cdif:s:u", VAR_9,
     ((void*)0))) != -1)
  switch (VAR_24) {
  case 'c':
   VAR_6 = 1;
   break;
  case 'd':
   VAR_7 = 1;
   break;
  case 'i':
   VAR_8 = 1;
   break;
  case 'f':
   VAR_11 = FUNC_22(VAR_12, &VAR_31, 10);
   if (VAR_11 < 0 || *VAR_31)
    FUNC_9(1, "illegal field skip value: %s", VAR_12);
   break;
  case 's':
   VAR_10 = FUNC_22(VAR_12, &VAR_31, 10);
   if (VAR_10 < 0 || *VAR_31)
    FUNC_9(1, "illegal character skip value: %s", VAR_12);
   break;
  case 'u':
   VAR_17 = 1;
   break;
  case '?':
  default:
   FUNC_23();
  }

 VAR_18 -= VAR_13;
 VAR_19 += VAR_13;

 if (VAR_18 > 2)
  FUNC_23();

 VAR_22 = VAR_15;
 VAR_32 = "stdin";
 VAR_23 = VAR_16;
 if (VAR_18 > 0 && FUNC_21(VAR_19[0], "-") != 0)
  VAR_22 = FUNC_12(VAR_32 = VAR_19[0], "r");
 FUNC_0(&VAR_33, VAR_0, VAR_2);
 if (FUNC_6(FUNC_13(VAR_22), &VAR_33) < 0)
  FUNC_8(1, "unable to limit rights for %s", VAR_32);
 FUNC_0(&VAR_33, VAR_0, VAR_3);
 if (VAR_18 > 1)
  VAR_23 = FUNC_12(VAR_19[1], "w");
 else
  FUNC_2(&VAR_33, VAR_1);
 if (FUNC_6(FUNC_13(VAR_23), &VAR_33) < 0) {
  FUNC_8(1, "unable to limit rights for %s",
      VAR_18 > 1 ? VAR_19[1] : "stdout");
 }
 if (FUNC_1(&VAR_33, VAR_1)) {
  unsigned long VAR_34;

  VAR_34 = VAR_5;

  if (FUNC_5(FUNC_13(VAR_23), &VAR_34, 1) < 0) {
   FUNC_8(1, "unable to limit ioctls for %s",
       VAR_18 > 1 ? VAR_19[1] : "stdout");
  }
 }

 FUNC_3();
 if (FUNC_4() < 0)
  FUNC_8(1, "unable to enter capability mode");

 VAR_26 = VAR_27 = 0;
 VAR_29 = VAR_30 = ((void*)0);

 if (FUNC_15(&VAR_29, &VAR_26, VAR_22) < 0) {
  if (FUNC_11(VAR_22))
   FUNC_8(1, "%s", VAR_32);
  FUNC_10(0);
 }
 VAR_20 = FUNC_7(VAR_29);

 VAR_21 = ((void*)0);
 while (FUNC_15(&VAR_30, &VAR_27, VAR_22) >= 0) {
  if (VAR_21 != ((void*)0))
   FUNC_14(VAR_21);
  VAR_21 = FUNC_7(VAR_30);

  if (VAR_21 == ((void*)0) && VAR_20 == ((void*)0))
   VAR_25 = FUNC_17(VAR_30, VAR_29);
  else if (VAR_21 == ((void*)0) || VAR_20 == ((void*)0))
   VAR_25 = 1;
  else
   VAR_25 = FUNC_24(VAR_21, VAR_20);

  if (VAR_25) {

   FUNC_20(VAR_23, VAR_29);
   VAR_31 = VAR_29;
   VAR_28 = VAR_26;
   VAR_29 = VAR_30;
   VAR_26 = VAR_27;
   if (VAR_20 != ((void*)0))
    FUNC_14(VAR_20);
   VAR_20 = VAR_21;
   VAR_30 = VAR_31;
   VAR_27 = VAR_28;
   VAR_21 = ((void*)0);
   VAR_14 = 0;
  } else
   ++VAR_14;
 }
 if (FUNC_11(VAR_22))
  FUNC_8(1, "%s", VAR_32);
 FUNC_20(VAR_23, VAR_29);
 FUNC_10(0);
}
