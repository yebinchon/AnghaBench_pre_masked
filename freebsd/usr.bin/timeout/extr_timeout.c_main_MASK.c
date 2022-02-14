
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigaction {int sa_mask; int sa_flags; int sa_handler; } ;
struct procctl_reaper_status {scalar_t__ rs_children; int rk_sig; scalar_t__ rk_flags; } ;
struct procctl_reaper_kill {scalar_t__ rs_children; int rk_sig; scalar_t__ rk_flags; } ;
struct option {char* member_0; int* member_2; int member_3; int member_1; } ;
typedef int signums ;
typedef int signals ;
typedef int pid_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
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
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_23 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,char*,...) ;
 scalar_t__ VAR_24 ;
 int FUNC_4 (char*,char**) ;
 int FUNC_5 () ;
 int FUNC_6 (int,char**,char*,struct option const*,int *) ;
 int FUNC_7 () ;
 int FUNC_8 (int,int) ;
 int FUNC_9 (struct sigaction*,int ,int) ;
 int VAR_25 ;
 char* VAR_26 ;
 scalar_t__ VAR_27 ;
 double FUNC_10 (char*) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (int ,int ,int ,struct procctl_reaper_status*) ;
 int VAR_28 ;
 int FUNC_13 (double) ;
 scalar_t__ VAR_29 ;
 scalar_t__ VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int FUNC_14 (int,struct sigaction*,int *) ;
 int FUNC_15 (int *,int) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int ,int ) ;
 int FUNC_18 (int ,int *,int *) ;
 int FUNC_19 (int *) ;
 int FUNC_20 () ;
 int FUNC_21 (int*) ;
 int FUNC_22 (int,int*,int ) ;

int
FUNC_23(int VAR_34, char **VAR_35)
{
 int VAR_36;
 unsigned long VAR_37;
 int VAR_38, VAR_39;
 int VAR_40, VAR_41, VAR_42;
 int VAR_43 = VAR_17;
 pid_t VAR_44, VAR_45;
 double VAR_46;
 double VAR_47;
 bool VAR_48 = 0;
 bool VAR_49 = 0;
 bool VAR_50 = 0;
 struct sigaction VAR_51;
 struct procctl_reaper_status VAR_52;
 struct procctl_reaper_kill VAR_53;
 int VAR_54[] = {
  -1,
  VAR_17,
  VAR_13,
  VAR_12,
  VAR_11,
  VAR_10,
  VAR_15,
 };

 VAR_38 = VAR_39 = 0;
 VAR_47 = 0;

 const struct option VAR_55[] = {
  { "preserve-status", &VAR_25, VAR_39, 1 },
  { "foreground", &VAR_25, VAR_38, 1 },
  { "kill-after", &VAR_28, ((void*)0), 'k'},
  { "signal", &VAR_28, ((void*)0), 's'},
  { "help", &VAR_25, ((void*)0), 'h'},
  { ((void*)0), 0, ((void*)0), 0 }
 };

 while ((VAR_36 = FUNC_6(VAR_34, VAR_35, "+k:s:h", VAR_55, ((void*)0))) != -1) {
  switch (VAR_36) {
   case 'k':
    VAR_49 = 1;
    VAR_47 = FUNC_10(VAR_26);
    break;
   case 's':
    VAR_43 = FUNC_11(VAR_26);
    break;
   case 0:
    break;
   case 'h':
   default:
    FUNC_20();
    break;
  }
 }

 VAR_34 -= VAR_27;
 VAR_35 += VAR_27;

 if (VAR_34 < 2)
  FUNC_20();

 VAR_46 = FUNC_10(VAR_35[0]);
 VAR_34--;
 VAR_35++;

 if (!VAR_38) {

  if (FUNC_12(VAR_8, FUNC_7(), VAR_4, ((void*)0)) == -1)
   FUNC_3(VAR_3, "Fail to acquire the reaper");
 }

 FUNC_9(&VAR_51, 0, sizeof(VAR_51));
 FUNC_16(&VAR_51.sa_mask);

 if (VAR_43 != VAR_14 && VAR_43 != VAR_16)
  VAR_54[0] = VAR_43;

 for (VAR_37 = 0; VAR_37 < sizeof(VAR_54) / sizeof(VAR_54[0]); VAR_37 ++)
  FUNC_15(&VAR_51.sa_mask, VAR_54[VAR_37]);

 VAR_51.sa_handler = VAR_31;
 VAR_51.sa_flags = VAR_9;

 for (VAR_37 = 0; VAR_37 < sizeof(VAR_54) / sizeof(VAR_54[0]); VAR_37 ++)
  if (VAR_54[VAR_37] != -1 && VAR_54[VAR_37] != 0 &&
      FUNC_14(VAR_54[VAR_37], &VAR_51, ((void*)0)) == -1)
   FUNC_3(VAR_3, "sigaction()");

 FUNC_17(VAR_18, VAR_22);
 FUNC_17(VAR_19, VAR_22);

 VAR_44 = FUNC_5();
 if (VAR_44 == -1)
  FUNC_3(VAR_3, "fork()");
 else if (VAR_44 == 0) {

  FUNC_17(VAR_18, VAR_21);
  FUNC_17(VAR_19, VAR_21);

  VAR_40 = FUNC_4(VAR_35[0], VAR_35);
  if (VAR_40 == -1) {
   if (VAR_24 == VAR_1)
    FUNC_3(127, "exec(%s)", VAR_35[0]);
   else
    FUNC_3(126, "exec(%s)", VAR_35[0]);
  }
 }

 if (FUNC_18(VAR_20, &VAR_51.sa_mask, ((void*)0)) == -1)
  FUNC_3(VAR_3, "sigprocmask()");


 FUNC_13(VAR_46);

 for (;;) {
  FUNC_16(&VAR_51.sa_mask);
  FUNC_19(&VAR_51.sa_mask);

  if (VAR_30) {
   VAR_30 = 0;

   while ((VAR_45 = FUNC_22(-1, &VAR_42, VAR_23)) != 0) {
    if (VAR_45 < 0) {
     if (VAR_24 == VAR_0)
      continue;
     else
      break;
    } else if (VAR_45 == VAR_44) {
     VAR_41 = VAR_42;
     VAR_50 = 1;
    }
   }
   if (VAR_50) {
    if (VAR_38) {
     break;
    } else {
     FUNC_12(VAR_8, FUNC_7(),
         VAR_7, &VAR_52);
     if (VAR_52.rs_children == 0)
      break;
    }
   }
  } else if (VAR_29) {
   VAR_29 = 0;

   VAR_48 = 1;
   if (!VAR_38) {
    VAR_53.rk_sig = VAR_43;
    VAR_53.rk_flags = 0;
    FUNC_12(VAR_8, FUNC_7(), VAR_5,
        &VAR_53);
   } else
    FUNC_8(VAR_44, VAR_43);

   if (VAR_49) {
    FUNC_13(VAR_47);
    VAR_47 = 0;
    VAR_32 = VAR_43;
    VAR_43 = VAR_14;
   } else
    break;

  } else if (VAR_33) {
   if (!VAR_38) {
    VAR_53.rk_sig = VAR_33;
    VAR_53.rk_flags = 0;
    FUNC_12(VAR_8, FUNC_7(), VAR_5,
        &VAR_53);
   } else
    FUNC_8(VAR_44, VAR_33);

   if (VAR_49) {
    FUNC_13(VAR_47);
    VAR_47 = 0;
    VAR_32 = VAR_43;
    VAR_43 = VAR_14;
   } else
    break;
  }
 }

 while (!VAR_50 && FUNC_21(&VAR_41) == -1) {
  if (VAR_24 != VAR_0)
   FUNC_3(VAR_3, "waitpid()");
 }

 if (!VAR_38)
  FUNC_12(VAR_8, FUNC_7(), VAR_6, ((void*)0));

 if (FUNC_0(VAR_41))
  VAR_41 = FUNC_0(VAR_41);
 else if(FUNC_1(VAR_41))
  VAR_41 = 128 + FUNC_2(VAR_41);

 if (VAR_48 && !VAR_39)
  VAR_41 = VAR_2;

 return (VAR_41);
}
