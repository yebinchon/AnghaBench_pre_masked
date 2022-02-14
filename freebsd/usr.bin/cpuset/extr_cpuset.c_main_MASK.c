
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pid_t ;
typedef int mask ;
typedef int lwpid_t ;
typedef int domainset_t ;
typedef int domains ;
typedef int cpusetid_t ;
typedef int cpuset_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 void* FUNC_2 (int ) ;
 int VAR_14 ;
 scalar_t__ FUNC_3 (int*) ;
 scalar_t__ FUNC_4 (int ,int ,int,int,int *) ;
 scalar_t__ FUNC_5 (int ,int ,int,int,int *,int) ;
 scalar_t__ FUNC_6 (int ,int,int) ;
 int VAR_15 ;
 int FUNC_7 (int,char*,...) ;
 scalar_t__ VAR_16 ;
 int FUNC_8 (int,char*,int ) ;
 int FUNC_9 (char*,char**) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int,char**,char*) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_12 (int ) ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 scalar_t__ VAR_26 ;
 int FUNC_13 (int ,int *) ;
 int FUNC_14 (int ,int *,int*) ;
 int VAR_27 ;
 int FUNC_15 () ;
 int FUNC_16 () ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int FUNC_17 () ;
 int VAR_31 ;
 int VAR_32 ;

int
FUNC_18(int VAR_33, char *VAR_34[])
{
 domainset_t VAR_35;
 cpusetid_t VAR_36;
 cpuset_t VAR_37;
 int VAR_38;
 lwpid_t VAR_39;
 pid_t VAR_40;
 int VAR_41;

 FUNC_0(&VAR_37);
 FUNC_1(&VAR_35);
 VAR_38 = VAR_10;
 VAR_22 = VAR_2;
 VAR_31 = VAR_7;
 VAR_18 = VAR_40 = VAR_39 = VAR_36 = -1;
 while ((VAR_41 = FUNC_11(VAR_33, VAR_34, "Ccd:gij:l:n:p:rs:t:x:")) != -1) {
  switch (VAR_41) {
  case 'C':
   VAR_9 = 1;
   break;
  case 'c':
   VAR_14 = 1;
   VAR_22 = VAR_0;
   break;
  case 'd':
   VAR_15 = 1;
   VAR_31 = VAR_4;
   VAR_18 = FUNC_2(VAR_25);
   break;
  case 'g':
   VAR_17 = 1;
   break;
  case 'i':
   VAR_19 = 1;
   break;
  case 'j':
   VAR_21 = 1;
   VAR_31 = VAR_6;
   VAR_18 = FUNC_12(VAR_25);
   if (VAR_18 < 0)
    FUNC_8(VAR_12, "%s", VAR_20);
   break;
  case 'l':
   VAR_23 = 1;
   FUNC_13(VAR_25, &VAR_37);
   break;
  case 'n':
   VAR_24 = 1;
   FUNC_14(VAR_25, &VAR_35, &VAR_38);
   break;
  case 'p':
   VAR_27 = 1;
   VAR_31 = VAR_7;
   VAR_18 = VAR_40 = FUNC_2(VAR_25);
   break;
  case 'r':
   VAR_22 = VAR_1;
   VAR_28 = 1;
   break;
  case 's':
   VAR_29 = 1;
   VAR_31 = VAR_3;
   VAR_18 = VAR_36 = FUNC_2(VAR_25);
   break;
  case 't':
   VAR_30 = 1;
   VAR_31 = VAR_8;
   VAR_18 = VAR_39 = FUNC_2(VAR_25);
   break;
  case 'x':
   VAR_32 = 1;
   VAR_31 = VAR_5;
   VAR_18 = FUNC_2(VAR_25);
   break;
  default:
   FUNC_17();
  }
 }
 VAR_33 -= VAR_26;
 VAR_34 += VAR_26;
 if (VAR_17) {
  if (VAR_33 || VAR_9 || VAR_23 || VAR_24)
   FUNC_17();

  if (VAR_15 + VAR_21 + VAR_32 + VAR_29 + VAR_27 + VAR_30 > 1)
   FUNC_17();
  if (VAR_19)
   FUNC_16();
  else
   FUNC_15();
  FUNC_10(VAR_13);
 }

 if (VAR_15 || VAR_19 || VAR_28)
  FUNC_17();



 if (VAR_33) {
  if (VAR_9 || VAR_27 || VAR_30 || VAR_32 || VAR_21)
   FUNC_17();
  if (VAR_29) {
   if (FUNC_6(VAR_7, -1, VAR_36))
    FUNC_7(VAR_33, "setid");
  } else {
   if (FUNC_3(&VAR_36))
    FUNC_7(VAR_33, "newid");
  }
  if (VAR_23) {
   if (FUNC_4(VAR_22, VAR_7,
       -1, sizeof(VAR_37), &VAR_37) != 0)
    FUNC_7(VAR_12, "setaffinity");
  }
  if (VAR_24) {
   if (FUNC_5(VAR_22, VAR_7,
       -1, sizeof(VAR_35), &VAR_35, VAR_38) != 0)
    FUNC_7(VAR_12, "setdomain");
  }
  VAR_16 = 0;
  FUNC_9(*VAR_34, VAR_34);
  FUNC_7(VAR_16 == VAR_11 ? 127 : 126, "%s", *VAR_34);
 }



 if (VAR_9 && (VAR_21 || !VAR_27 || VAR_29 || VAR_30 || VAR_32))
  FUNC_17();
 if ((!VAR_23 && !VAR_24) && VAR_14)
  FUNC_17();
 if ((!VAR_23 && !VAR_24) && !(VAR_9 || VAR_29))
  FUNC_17();

 if (VAR_30 && (VAR_29 | VAR_27 | VAR_32 | VAR_21))
  FUNC_17();

 if (VAR_32 && (VAR_21 | VAR_27 | VAR_29 | VAR_30))
  FUNC_17();
 if (VAR_9) {




  if (FUNC_3(&VAR_36) < 0)
   FUNC_7(VAR_12, "newid");
  VAR_29 = 1;
 }
 if (VAR_27 && VAR_29) {
  if (FUNC_6(VAR_7, VAR_40, VAR_36))
   FUNC_7(VAR_12, "setid");




  VAR_31 = VAR_7;
  VAR_18 = VAR_40;
 }
 if (VAR_23) {
  if (FUNC_4(VAR_22, VAR_31, VAR_18, sizeof(VAR_37),
      &VAR_37) != 0)
   FUNC_7(VAR_12, "setaffinity");
 }
 if (VAR_24) {
  if (FUNC_5(VAR_22, VAR_31, VAR_18, sizeof(VAR_35),
      &VAR_35, VAR_38) != 0)
   FUNC_7(VAR_12, "setdomain");
 }

 FUNC_10(VAR_13);
}
