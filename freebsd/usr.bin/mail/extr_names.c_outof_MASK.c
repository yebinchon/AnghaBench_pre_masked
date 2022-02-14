
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
typedef int tempname ;
struct name {char* n_name; struct name* n_flink; int n_type; } ;
struct header {int dummy; } ;
typedef int sigset_t ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int,char*) ;
 int * FUNC_2 (char*,char*) ;
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
 char* VAR_14 ;
 int FUNC_3 (int) ;
 char* FUNC_4 (int *) ;
 int FUNC_5 (int) ;
 char* FUNC_6 (char*) ;
 int FUNC_7 (int,int ,int) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,char*,...) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int *) ;
 int VAR_15 ;
 int FUNC_13 (char*) ;
 int FUNC_14 (char*) ;
 char* VAR_16 ;
 int FUNC_15 (char*,int ) ;
 int FUNC_16 (int,int *) ;
 int FUNC_17 (struct header*,int *,int) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (char*) ;
 int VAR_17 ;
 int FUNC_20 (int *,int ) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (char*,int,char*,char*) ;
 int FUNC_23 (char*,int *,int,int,char*,char*,int *) ;
 int * VAR_18 ;
 int FUNC_24 (int *) ;
 char* VAR_19 ;
 char* FUNC_25 (char*) ;
 int FUNC_26 (char*,...) ;
 int FUNC_27 (char*,char*) ;

struct name *
FUNC_28(struct name *VAR_20, FILE *VAR_21, struct header *VAR_22)
{
 int VAR_23, VAR_24;
 struct name *VAR_25, *VAR_26;
 time_t VAR_27;
 char *VAR_28, *VAR_29;
 FILE *VAR_30, *VAR_31;

 VAR_26 = VAR_20;
 VAR_25 = VAR_20;
 (void)FUNC_24(&VAR_27);
 VAR_28 = FUNC_4(&VAR_27);
 while (VAR_25 != ((void*)0)) {
  if (!FUNC_13(VAR_25->n_name) && VAR_25->n_name[0] != '|') {
   VAR_25 = VAR_25->n_flink;
   continue;
  }
  VAR_24 = VAR_25->n_name[0] == '|';
  if (VAR_24)
   VAR_29 = VAR_25->n_name+1;
  else
   VAR_29 = FUNC_6(VAR_25->n_name);






  if (VAR_15 < 0) {
   int VAR_32;
   char VAR_33[VAR_10];

   (void)FUNC_22(VAR_33, sizeof(VAR_33),
       "%s/mail.ReXXXXXXXXXX", VAR_19);
   if ((VAR_32 = FUNC_14(VAR_33)) == -1 ||
       (VAR_30 = FUNC_1(VAR_32, "a")) == ((void*)0)) {
    FUNC_26("%s", VAR_33);
    VAR_17++;
    goto cant;
   }
   VAR_15 = FUNC_15(VAR_33, VAR_9);
   (void)FUNC_19(VAR_33);
   if (VAR_15 < 0) {
    FUNC_26("%s", VAR_33);
    VAR_17++;
    (void)FUNC_0(VAR_30);
    goto cant;
   }
   (void)FUNC_7(VAR_15, VAR_1, 1);
   FUNC_10(VAR_30, "From %s %s", VAR_16, VAR_28);
   FUNC_17(VAR_22, VAR_30,
       VAR_8|VAR_7|VAR_2|VAR_6|VAR_4|VAR_5);
   while ((VAR_23 = FUNC_12(VAR_21)) != VAR_0)
    (void)FUNC_16(VAR_23, VAR_30);
   FUNC_18(VAR_21);
   FUNC_10(VAR_30, "\n");
   (void)FUNC_9(VAR_30);
   if (FUNC_8(VAR_30)) {
    FUNC_26("%s", VAR_33);
    VAR_17++;
    (void)FUNC_0(VAR_30);
    goto cant;
   }
   (void)FUNC_0(VAR_30);
  }







  if (VAR_24) {
   int VAR_34;
   char *VAR_35;
   sigset_t VAR_36;
   if ((VAR_35 = FUNC_25("SHELL")) == ((void*)0))
    VAR_35 = VAR_14;
   (void)FUNC_21(&VAR_36);
   (void)FUNC_20(&VAR_36, VAR_11);
   (void)FUNC_20(&VAR_36, VAR_12);
   (void)FUNC_20(&VAR_36, VAR_13);
   VAR_34 = FUNC_23(VAR_35, &VAR_36, VAR_15, -1, "-c", VAR_29,
       ((void*)0));
   if (VAR_34 < 0) {
    VAR_17++;
    goto cant;
   }
   FUNC_11(VAR_34);
  } else {
   int VAR_37;
   if ((VAR_30 = FUNC_2(VAR_29, "a")) == ((void*)0)) {
    FUNC_26("%s", VAR_29);
    VAR_17++;
    goto cant;
   }
   if ((VAR_37 = FUNC_5(VAR_15)) < 0) {
    FUNC_26("dup");
    VAR_31 = ((void*)0);
   } else
    VAR_31 = FUNC_1(VAR_37, "r");
   if (VAR_31 == ((void*)0)) {
    FUNC_10(VAR_18, "Can't reopen image\n");
    (void)FUNC_0(VAR_30);
    VAR_17++;
    goto cant;
   }
   FUNC_18(VAR_31);
   while ((VAR_23 = FUNC_12(VAR_31)) != VAR_0)
    (void)FUNC_16(VAR_23, VAR_30);
   if (FUNC_8(VAR_30)) {
    FUNC_27("%s", VAR_29);
    VAR_17++;
    (void)FUNC_0(VAR_30);
    (void)FUNC_0(VAR_31);
    goto cant;
   }
   (void)FUNC_0(VAR_30);
   (void)FUNC_0(VAR_31);
  }
cant:





  VAR_25->n_type |= VAR_3;
  VAR_25 = VAR_25->n_flink;
 }
 if (VAR_15 >= 0) {
  (void)FUNC_3(VAR_15);
  VAR_15 = -1;
 }
 return (VAR_26);
}
