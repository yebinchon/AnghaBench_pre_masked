
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int off_t ;
typedef int fileargs_t ;
typedef int cap_rights_t ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ,int ,int ) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (int,char*) ;
 int FUNC_5 (int,char*,...) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int *,char*,char*) ;
 int FUNC_9 (int *) ;
 int * FUNC_10 (int,char**,int ,int ,int ,int ) ;
 int FUNC_11 (int,char**,char*,int ,int *) ;
 int FUNC_12 (int *,int) ;
 int FUNC_13 (int *,int) ;
 int VAR_5 ;
 int FUNC_14 (char**) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_15 (char*,char*,char*) ;
 int * VAR_8 ;
 int FUNC_16 (int ,char**,int) ;
 int FUNC_17 (int ,char**,int) ;
 int FUNC_18 () ;
 int FUNC_19 (char*,char*) ;

int
FUNC_20(int VAR_9, char *VAR_10[])
{
 FILE *VAR_11;
 char *VAR_12;
 off_t VAR_13;
 int VAR_14, VAR_15, VAR_16, VAR_17;
 fileargs_t *VAR_18;
 cap_rights_t VAR_19;

 VAR_16 = -1;
 VAR_17 = 0;
 VAR_13 = -1;

 FUNC_14(VAR_10);
 while ((VAR_14 = FUNC_11(VAR_9, VAR_10, "+n:c:", VAR_5, ((void*)0))) != -1) {
  switch(VAR_14) {
  case 'c':
   VAR_13 = FUNC_16(VAR_6, &VAR_12, 10);
   if (*VAR_12 || VAR_13 <= 0)
    FUNC_5(1, "illegal byte count -- %s", VAR_6);
   break;
  case 'n':
   VAR_16 = FUNC_17(VAR_6, &VAR_12, 10);
   if (*VAR_12 || VAR_16 <= 0)
    FUNC_5(1, "illegal line count -- %s", VAR_6);
   break;
  case '?':
  default:
   FUNC_18();

  }
 }
 VAR_9 -= VAR_7;
 VAR_10 += VAR_7;

 VAR_18 = FUNC_10(VAR_9, VAR_10, VAR_4, 0,
     FUNC_0(&VAR_19, VAR_2, VAR_1, VAR_0), VAR_3);
 if (VAR_18 == ((void*)0))
  FUNC_4(1, "unable to init casper");

 FUNC_1();
 if (FUNC_3() < 0 || FUNC_2() < 0)
  FUNC_4(1, "unable to enter capability mode");

 if (VAR_16 != -1 && VAR_13 != -1)
  FUNC_5(1, "can't combine line and byte counts");
 if (VAR_16 == -1)
  VAR_16 = 10;
 if (*VAR_10 != ((void*)0)) {
  for (VAR_15 = 1; *VAR_10 != ((void*)0); ++VAR_10) {
   if ((VAR_11 = FUNC_8(VAR_18, *VAR_10, "r")) == ((void*)0)) {
    FUNC_19("%s", *VAR_10);
    VAR_17 = 1;
    continue;
   }
   if (VAR_9 > 1) {
    (void)FUNC_15("%s==> %s <==\n",
        VAR_15 ? "" : "\n", *VAR_10);
    VAR_15 = 0;
   }
   if (VAR_13 == -1)
    FUNC_12(VAR_11, VAR_16);
   else
    FUNC_13(VAR_11, VAR_13);
   (void)FUNC_7(VAR_11);
  }
 } else if (VAR_13 == -1)
  FUNC_12(VAR_8, VAR_16);
 else
  FUNC_13(VAR_8, VAR_13);

 FUNC_9(VAR_18);
 FUNC_6(VAR_17);
}
