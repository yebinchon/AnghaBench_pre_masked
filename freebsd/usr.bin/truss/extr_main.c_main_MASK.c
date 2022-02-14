
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct trussinfo {int strsize; int flags; int * outfile; int start_time; int proclist; int * curthread; } ;
struct sigaction {int sa_mask; scalar_t__ sa_flags; int sa_handler; } ;
typedef scalar_t__ pid_t ;
typedef int * caddr_t ;
struct TYPE_2__ {int pid; int * abi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_1__* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int,int) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int,char*,char*) ;
 int FUNC_6 (int,char*,...) ;
 int FUNC_7 (struct trussinfo*) ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (char*,char*) ;
 int FUNC_10 (int,char**,char*) ;
 scalar_t__ FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 (int ,int ) ;
 char* VAR_17 ;
 scalar_t__ VAR_18 ;
 int FUNC_14 (struct trussinfo*) ;
 int FUNC_15 (int ,int ,int *,int ) ;
 int VAR_19 ;
 int FUNC_16 (struct trussinfo*,char**) ;
 int FUNC_17 (int ,struct sigaction*,int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int ,int ) ;
 int FUNC_20 (struct trussinfo*,scalar_t__) ;
 int * VAR_20 ;
 int FUNC_21 (char*,int ,int ,char const**) ;
 int FUNC_22 () ;

int
FUNC_23(int VAR_21, char **VAR_22)
{
 struct sigaction VAR_23;
 struct trussinfo *VAR_24;
 char *VAR_25;
 char **VAR_26;
 const char *VAR_27;
 pid_t VAR_28;
 int VAR_29;

 VAR_25 = ((void*)0);


 VAR_24 = (struct trussinfo *)FUNC_3(1, sizeof(struct trussinfo));
 if (VAR_24 == ((void*)0))
  FUNC_6(1, "calloc() failed");

 VAR_28 = 0;
 VAR_24->outfile = VAR_20;
 VAR_24->strsize = 32;
 VAR_24->curthread = ((void*)0);
 FUNC_1(&VAR_24->proclist);
 FUNC_12();
 while ((VAR_29 = FUNC_10(VAR_21, VAR_22, "p:o:facedDs:SH")) != -1) {
  switch (VAR_29) {
  case 'p':
   VAR_28 = FUNC_2(VAR_17);

   if (VAR_28 == FUNC_11()) {
    FUNC_6(2, "attempt to grab self.");
   }
   break;
  case 'f':
   VAR_24->flags |= VAR_6;
   break;
  case 'a':
   VAR_24->flags |= VAR_4;
   break;
  case 'c':
   VAR_24->flags |= (VAR_2 | VAR_8);
   break;
  case 'e':
   VAR_24->flags |= VAR_5;
   break;
  case 'd':
   VAR_24->flags |= VAR_0;
   break;
  case 'D':
   VAR_24->flags |= VAR_11;
   break;
  case 'o':
   VAR_25 = VAR_17;
   break;
  case 's':
   VAR_24->strsize = FUNC_21(VAR_17, 0, VAR_7, &VAR_27);
   if (VAR_27)
    FUNC_6(1, "maximum string size is %s: %s", VAR_27, VAR_17);
   break;
  case 'S':
   VAR_24->flags |= VAR_8;
   break;
  case 'H':
   VAR_24->flags |= VAR_3;
   break;
  default:
   FUNC_22();
  }
 }

 VAR_21 -= VAR_18; VAR_22 += VAR_18;
 if ((VAR_28 == 0 && VAR_21 == 0) ||
     (VAR_28 != 0 && VAR_21 != 0))
  FUNC_22();

 if (VAR_25 != ((void*)0)) {




  if ((VAR_24->outfile = FUNC_9(VAR_25, "we")) == ((void*)0))
   FUNC_5(1, "cannot open %s", VAR_25);
 }







 if (VAR_28 == 0) {

  VAR_26 = VAR_22;
  FUNC_16(VAR_24, VAR_26);
  FUNC_19(VAR_12, VAR_16);
  FUNC_19(VAR_15, VAR_16);
  FUNC_19(VAR_14, VAR_16);
 } else {
  VAR_23.sa_handler = VAR_19;
  VAR_23.sa_flags = 0;
  FUNC_18(&VAR_23.sa_mask);
  FUNC_17(VAR_12, &VAR_23, ((void*)0));
  FUNC_17(VAR_14, &VAR_23, ((void*)0));
  FUNC_17(VAR_15, &VAR_23, ((void*)0));
  FUNC_20(VAR_24, VAR_28);
 }





 if (FUNC_0(&VAR_24->proclist)->abi == ((void*)0)) {






  if (VAR_28 == 0)
   FUNC_13(FUNC_0(&VAR_24->proclist)->pid, VAR_13);
  FUNC_15(VAR_9, FUNC_0(&VAR_24->proclist)->pid, ((void*)0),
      0);
  return (1);
 }
 FUNC_15(VAR_10, FUNC_0(&VAR_24->proclist)->pid, (caddr_t)1,
     0);






 FUNC_4(VAR_1, &VAR_24->start_time);

 FUNC_7(VAR_24);

 if (VAR_24->flags & VAR_2)
  FUNC_14(VAR_24);

 FUNC_8(VAR_24->outfile);

 return (0);
}
