
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct ngm_connect {int peerhook; int ourhook; int path; } ;
typedef int ngc ;
typedef int fd_set ;
typedef int buf ;


 int VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int,int *) ;
 int FUNC_1 (int,int *) ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 char* VAR_6 ;
 scalar_t__ FUNC_3 (int *,int*,int*) ;
 int FUNC_4 (int,char*,int,int *) ;
 scalar_t__ FUNC_5 (int,char*,char*,int) ;
 scalar_t__ FUNC_6 (int,char*,int ,int ,struct ngm_connect*,int) ;
 int FUNC_7 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_8 () ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int,int) ;
 int FUNC_12 (int ,char*,...) ;
 int FUNC_13 (int ,char*,...) ;
 int FUNC_14 (char*,char**) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ,char*) ;
 int FUNC_17 (int,char**,char*) ;
 int VAR_9 ;
 int * VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int FUNC_18 (int,char*,int) ;
 scalar_t__ FUNC_19 (int ,int *,int *,int *,int *) ;
 int FUNC_20 (int,char const*) ;
 int FUNC_21 (int *,int ) ;
 int * FUNC_22 () ;
 int FUNC_23 (int ,int,char*,...) ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_24 (int ,char*,int) ;

int
FUNC_25(int VAR_16, char *VAR_17[])
{
 struct ngm_connect VAR_18;
 const char *VAR_19 = ((void*)0);
 const char *VAR_20 = VAR_1;
 int VAR_21, VAR_22;
 int VAR_23 = 0;
 int VAR_24 = 0;
 int VAR_25 = 0;
 int VAR_26 = 0;
 int VAR_27;

 if ((VAR_10 = FUNC_22()) == ((void*)0))
  FUNC_12(VAR_2, ((void*)0));


 while ((VAR_27 = FUNC_17(VAR_16, VAR_17, "aedlm:nsS")) != -1) {
  switch (VAR_27) {
  case 'a':
   VAR_23 = 1;
   break;
  case 'd':
   FUNC_7(FUNC_7(-1) + 1);
   break;
  case 'e':
   VAR_26 = 1;
   break;
  case 'l':
   VAR_24 = 1;
   break;
  case 'n':
   VAR_25 = 1;
   break;
  case 'm':
   if (FUNC_21(VAR_10, VAR_11) == -1)
    FUNC_12(VAR_2, ((void*)0));
   break;
  case 's':
   VAR_13 = VAR_7;
   break;
  case 'S':
   VAR_9 = VAR_8;
   break;
  case '?':
  default:
   FUNC_8();
  }
 }
 VAR_16 -= VAR_12;
 VAR_17 += VAR_12;

 if (VAR_26) {
  if (VAR_23 || VAR_24) {
   FUNC_16(VAR_14, "conflicting options\n");
   FUNC_8();
  }
  if (VAR_16 < 3)
   FUNC_8();
  VAR_19 = VAR_17[0];
  VAR_20 = VAR_17[1];
  VAR_17 += 2;
  VAR_16 -= 2;
 } else {

  switch (VAR_16) {
  case 2:
   VAR_20 = VAR_17[1];

  case 1:
   VAR_19 = VAR_17[0];
   break;
  default:
   FUNC_8();
  }
 }


 if (FUNC_3(((void*)0), &VAR_21, &VAR_22) < 0)
  FUNC_13(VAR_2, "can't get sockets");


 FUNC_23(VAR_18.path, sizeof(VAR_18.path), "%s", VAR_19);
 FUNC_23(VAR_18.ourhook, sizeof(VAR_18.ourhook), VAR_6);
 FUNC_23(VAR_18.peerhook, sizeof(VAR_18.peerhook), "%s", VAR_20);

 if (FUNC_6(VAR_21, ".",
     VAR_5, VAR_4, &VAR_18, sizeof(VAR_18)) < 0)
  FUNC_13(VAR_2, "can't connect to node");

 if (VAR_26) {

  (void)FUNC_10(0);
  (void)FUNC_10(1);
  if (!VAR_25)
   (void)FUNC_11(VAR_22, 0);
  (void)FUNC_11(VAR_22, 1);

  FUNC_20(VAR_21, VAR_19);


  (void)FUNC_14(VAR_17[0], VAR_17);
  FUNC_12(VAR_2, "%s", VAR_17[0]);

 } else
  FUNC_20(VAR_21, VAR_19);


 if (VAR_25)
  FUNC_15(VAR_15);


 while (1) {
  fd_set VAR_28;


  FUNC_2(&VAR_28);
  if (!VAR_25)
   FUNC_1(VAR_9, &VAR_28);
  FUNC_1(VAR_22, &VAR_28);


  if (FUNC_19(VAR_3, &VAR_28, ((void*)0), ((void*)0), ((void*)0)) < 0)
   FUNC_12(VAR_2, "select");


  if (FUNC_0(VAR_22, &VAR_28)) {
   char VAR_29[VAR_0];
   int VAR_30, VAR_31;


   if ((VAR_30 = FUNC_4(VAR_22,
       VAR_29, sizeof(VAR_29), ((void*)0))) < 0)
    FUNC_12(VAR_2, "read(hook)");
   if (VAR_30 == 0)
    FUNC_13(VAR_2, "read EOF from hook?!");


   if (VAR_23)
    FUNC_9((u_char *) VAR_29, VAR_30);
   else if ((VAR_31 = FUNC_24(VAR_13, VAR_29, VAR_30)) != VAR_30) {
    if (VAR_31 < 0) {
     FUNC_12(VAR_2, "write(stdout)");
    } else {
     FUNC_13(VAR_2,
         "stdout: read %d, wrote %d",
         VAR_30, VAR_31);
    }
   }

   if (VAR_24) {
    if (FUNC_5(VAR_22, VAR_6, VAR_29, VAR_30) < 0)
     FUNC_12(VAR_2, "write(hook)");
   }
  }


  if (FUNC_0(VAR_9, &VAR_28)) {
   char VAR_32[VAR_0];
   int VAR_33;


   if ((VAR_33 = FUNC_18(VAR_9, VAR_32, sizeof(VAR_32))) < 0)
    FUNC_12(VAR_2, "read(stdin)");
   if (VAR_33 == 0)
    FUNC_13(VAR_2, "EOF(stdin)");


   if (FUNC_5(VAR_22, VAR_6, VAR_32, VAR_33) < 0)
    FUNC_12(VAR_2, "write(hook)");
  }
 }
}
