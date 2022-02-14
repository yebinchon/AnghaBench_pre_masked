
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct sockaddr_rfcomm {int rfcomm_len; int rfcomm_channel; int server_channel; int rfcomm_bdaddr; void* rfcomm_family; int sa_flags; int sa_handler; } ;
struct sockaddr {int dummy; } ;
struct sigaction {int rfcomm_len; int rfcomm_channel; int server_channel; int rfcomm_bdaddr; void* rfcomm_family; int sa_flags; int sa_handler; } ;
struct hostent {int * h_addr; } ;
typedef int sp ;
typedef struct sockaddr_rfcomm sdp_sp_profile_t ;
typedef int sa ;
typedef int ra ;
typedef int ma ;
typedef int fd_set ;
typedef int buf ;
typedef int bt_addr_any ;
typedef int bdaddr_t ;
typedef int addr ;


 void* VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int,int *) ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int * VAR_9 ;
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
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_3 (int,struct sockaddr*,int*) ;
 scalar_t__ FUNC_4 (int,struct sockaddr*,int) ;
 int FUNC_5 (int *,int *) ;
 struct hostent* FUNC_6 (int *) ;
 int FUNC_7 (int) ;
 int FUNC_8 () ;
 scalar_t__ FUNC_9 (int,struct sockaddr*,int) ;
 scalar_t__ FUNC_10 (int ,int ) ;
 scalar_t__ VAR_26 ;
 int FUNC_11 (int,char*,...) ;
 int FUNC_12 (int,int,char*) ;
 scalar_t__ VAR_27 ;
 int FUNC_13 (int,char*,...) ;
 int FUNC_14 (int) ;
 int FUNC_15 (int ,char*,char*) ;
 int FUNC_16 (int,char**,char*) ;
 scalar_t__ FUNC_17 (int,struct sockaddr*,int*) ;
 int VAR_28 ;
 int FUNC_18 (int ) ;
 scalar_t__ FUNC_19 (int,int) ;
 scalar_t__ FUNC_20 (int,int) ;
 scalar_t__ FUNC_21 (int *,int *,int) ;
 int FUNC_22 (int *,int *,int) ;
 int FUNC_23 (struct sockaddr_rfcomm*,int ,int) ;
 int FUNC_24 (int ,int,int ) ;
 int * VAR_29 ;
 scalar_t__ FUNC_25 (int *,int *,int,int*,int*) ;
 int FUNC_26 (void*) ;
 scalar_t__ FUNC_27 (void*) ;
 void* FUNC_28 (int *) ;
 scalar_t__ FUNC_29 (void*,int,int *,void*,int,int *) ;
 int FUNC_30 (void*,int ) ;
 int FUNC_31 (scalar_t__,int *,int *,int *,int *) ;
 scalar_t__ FUNC_32 (int ,struct sockaddr_rfcomm*,int *) ;
 int FUNC_33 (int ,int ,int ) ;
 int FUNC_34 (int,char*,int) ;
 int VAR_30 ;
 scalar_t__ FUNC_35 (char**,int*,int*) ;
 scalar_t__ FUNC_36 (int,char*,int) ;
 int VAR_31 ;
 char* FUNC_37 (scalar_t__) ;
 int FUNC_38 (int *,char**,int) ;
 int FUNC_39 (int ,char*,...) ;
 int FUNC_40 (int ) ;
 int FUNC_41 () ;
 int FUNC_42 (char*) ;

int
FUNC_43(int VAR_32, char *VAR_33[])
{
 struct sigaction VAR_34;
 struct sockaddr_rfcomm VAR_35;
 bdaddr_t VAR_36;
 int VAR_37, VAR_38, VAR_39, VAR_40,
     VAR_41, VAR_42, VAR_43, VAR_44, VAR_45,
     VAR_46;
 fd_set VAR_47;
 char *VAR_48 = ((void*)0), *VAR_49 = ((void*)0), VAR_50[VAR_22];

 FUNC_22(&VAR_36, VAR_9, sizeof(VAR_36));
 VAR_38 = VAR_39 = 0;
 VAR_40 = VAR_15;
 VAR_45 = 0;
 VAR_46 = 0;


 while ((VAR_37 = FUNC_16(VAR_32, VAR_33, "a:bc:thS")) != -1) {
  switch (VAR_37) {
  case 'a':
   if (!FUNC_5(VAR_29, &VAR_36)) {
    struct hostent *VAR_51 = ((void*)0);

    if ((VAR_51 = FUNC_6(VAR_29)) == ((void*)0))
     FUNC_13(1, "%s: %s", VAR_29, FUNC_18(VAR_28));

    FUNC_22(&VAR_36, VAR_51->h_addr, sizeof(VAR_36));
   }
   break;

  case 'c':
   VAR_39 = FUNC_38(VAR_29, &VAR_49, 10);
   if (*VAR_49 != '\0') {
    VAR_39 = 0;
    switch (FUNC_40(VAR_29[0])) {
    case 'd':
     VAR_40 = VAR_12;
     break;

    case 'f':
     VAR_40 = VAR_13;
     break;

    case 'l':
     VAR_40 = VAR_14;
     break;

    case 's':
     VAR_40 = VAR_15;
     break;

    default:
     FUNC_13(1, "Unknown service name: %s",
      VAR_29);

    }
   }
   break;

  case 'b':
   VAR_38 = 1;
   break;

  case 't':
   VAR_46 = 1;
   break;

  case 'S':
   VAR_45 = 1;
   break;

  case 'h':
  default:
   FUNC_41();

  }
 }


 if (!VAR_45 && FUNC_21(&VAR_36, VAR_9, sizeof(VAR_36)) == 0)
  FUNC_41();



 FUNC_23(&VAR_34, 0, sizeof(VAR_34));
 VAR_34.sa_handler = VAR_30;

 if (FUNC_32(VAR_19, &VAR_34, ((void*)0)) < 0)
  FUNC_11(1, "Could not sigaction(SIGTERM)");

 if (FUNC_32(VAR_17, &VAR_34, ((void*)0)) < 0)
  FUNC_11(1, "Could not sigaction(SIGHUP)");

 if (FUNC_32(VAR_18, &VAR_34, ((void*)0)) < 0)
  FUNC_11(1, "Could not sigaction(SIGINT)");

 VAR_34.sa_handler = VAR_20;
 VAR_34.sa_flags = VAR_11;

 if (FUNC_32(VAR_16, &VAR_34, ((void*)0)) < 0)
  FUNC_11(1, "Could not sigaction(SIGCHLD)");


 if (VAR_46) {
  if (FUNC_35(&VAR_48, &VAR_42, &VAR_43) < 0)
   FUNC_14(1);

  VAR_44 = VAR_42;
 } else {
  if (VAR_38)
   FUNC_41();

  VAR_42 = VAR_24;
  VAR_44 = VAR_25;
 }



 if (VAR_45) {
  struct sockaddr_rfcomm VAR_52;
  bdaddr_t VAR_53;
  sdp_sp_profile_t VAR_54;
  void *VAR_55;
  uint32_t VAR_56;
  int VAR_57, VAR_58;

  VAR_57 = FUNC_33(VAR_10, VAR_21,
     VAR_1);
  if (VAR_57 < 0)
   FUNC_11(1, "Could not create socket");

  FUNC_22(&VAR_53, VAR_9, sizeof(VAR_53));

  FUNC_23(&VAR_52, 0, sizeof(VAR_52));
  VAR_52.rfcomm_len = sizeof(VAR_52);
  VAR_52.rfcomm_family = VAR_0;
  FUNC_22(&VAR_52.rfcomm_bdaddr, &VAR_53, sizeof(VAR_53));
  VAR_52.rfcomm_channel = VAR_39;

  if (FUNC_4(VAR_57, (struct sockaddr *)&VAR_52, sizeof(VAR_52)) < 0)
   FUNC_11(1, "Could not bind socket on channel %d", VAR_39);
  if (FUNC_19(VAR_57, 10) != 0)
   FUNC_11(1, "Could not listen on socket");

  VAR_58 = sizeof(VAR_52);
  if (FUNC_17(VAR_57, (struct sockaddr *)&VAR_52, &VAR_58) < 0)
   FUNC_11(1, "Could not get socket name");
  VAR_39 = VAR_52.rfcomm_channel;

  VAR_55 = FUNC_28(((void*)0));
  if (VAR_55 == ((void*)0))
   FUNC_13(1, "Unable to create local SDP session");
  if (FUNC_27(VAR_55) != 0)
   FUNC_13(1, "Unable to open local SDP session. %s (%d)",
       FUNC_37(FUNC_27(VAR_55)), FUNC_27(VAR_55));
  FUNC_23(&VAR_54, 0, sizeof(VAR_54));
  VAR_54.server_channel = VAR_39;

  if (FUNC_29(VAR_55, VAR_15,
    &VAR_53, (void *)&VAR_54, sizeof(VAR_54),
    &VAR_56) != 0) {
   FUNC_13(1, "Unable to register LAN service with "
       "local SDP daemon. %s (%d)",
       FUNC_37(FUNC_27(VAR_55)), FUNC_27(VAR_55));
  }

  VAR_41 = -1;
  while (VAR_41 < 0) {
   VAR_58 = sizeof(VAR_35);
   VAR_41 = FUNC_3(VAR_57, (struct sockaddr *)&VAR_35,
       &VAR_58);
   if (VAR_41 < 0)
    FUNC_11(1, "Unable to accept()");
   if (FUNC_21(&VAR_36, VAR_9, sizeof(VAR_36)) &&
       FUNC_21(&VAR_36, &VAR_35.rfcomm_bdaddr, sizeof(VAR_36))) {
    FUNC_42("Connect from wrong client");
    FUNC_7(VAR_41);
    VAR_41 = -1;
   }
  }
  FUNC_30(VAR_55, VAR_56);
  FUNC_26(VAR_55);
  FUNC_7(VAR_57);
 } else {

  if (VAR_39 == 0 && VAR_40 != 0)
   if (FUNC_25(((void*)0), &VAR_36,
        VAR_40, &VAR_39, &VAR_37) != 0)
    FUNC_12(1, VAR_37, "Could not obtain RFCOMM channel");
  if (VAR_39 <= 0 || VAR_39 > 30)
   FUNC_13(1, "Invalid RFCOMM channel number %d", VAR_39);

  VAR_41 = FUNC_33(VAR_10, VAR_21, VAR_1);
  if (VAR_41 < 0)
   FUNC_11(1, "Could not create socket");

  FUNC_23(&VAR_35, 0, sizeof(VAR_35));
  VAR_35.rfcomm_len = sizeof(VAR_35);
  VAR_35.rfcomm_family = VAR_0;

  if (FUNC_4(VAR_41, (struct sockaddr *) &VAR_35, sizeof(VAR_35)) < 0)
   FUNC_11(1, "Could not bind socket");

  FUNC_22(&VAR_35.rfcomm_bdaddr, &VAR_36, sizeof(VAR_35.rfcomm_bdaddr));
  VAR_35.rfcomm_channel = VAR_39;

  if (FUNC_9(VAR_41, (struct sockaddr *) &VAR_35, sizeof(VAR_35)) < 0)
   FUNC_11(1, "Could not connect socket");
 }


 if (VAR_38 && FUNC_10(0, 0) < 0)
  FUNC_11(1, "Could not daemon()");

 FUNC_24(VAR_23, VAR_6|VAR_7|VAR_8, VAR_3);
 FUNC_39(VAR_5, "Starting on %s...", (VAR_48 != ((void*)0))? VAR_48 : "stdin/stdout");


 if (!VAR_38)
  FUNC_15(VAR_31, "%s\n", VAR_48);

 for (VAR_26 = 0; !VAR_26; ) {
  FUNC_2(&VAR_47);
  FUNC_1(VAR_42, &VAR_47);
  FUNC_1(VAR_41, &VAR_47);

  VAR_37 = FUNC_31(FUNC_20(VAR_42, VAR_41) + 1, &VAR_47, ((void*)0), ((void*)0), ((void*)0));
  if (VAR_37 < 0) {
   if (VAR_27 == VAR_2)
    continue;

   FUNC_39(VAR_4, "Could not select(). %s",
     FUNC_37(VAR_27));
   FUNC_14(1);
  }

  if (VAR_37 == 0)
   continue;

  if (FUNC_0(VAR_42, &VAR_47)) {
   VAR_37 = FUNC_34(VAR_42, VAR_50, sizeof(VAR_50));
   if (VAR_37 < 0) {
    FUNC_39(VAR_4, "Could not read master pty, " "fd=%d. %s", VAR_42, FUNC_37(VAR_27));

    FUNC_14(1);
   }

   if (VAR_37 == 0)
    break;

   if (FUNC_36(VAR_41, VAR_50, VAR_37) < 0) {
    FUNC_39(VAR_4, "Could not write to socket, " "fd=%d, size=%d. %s",

     VAR_41, VAR_37, FUNC_37(VAR_27));
    FUNC_14(1);
   }
  }

  if (FUNC_0(VAR_41, &VAR_47)) {
   VAR_37 = FUNC_34(VAR_41, VAR_50, sizeof(VAR_50));
   if (VAR_37 < 0) {
    FUNC_39(VAR_4, "Could not read socket, " "fd=%d. %s", VAR_41, FUNC_37(VAR_27));

    FUNC_14(1);
   }

   if (VAR_37 == 0)
    break;

   if (FUNC_36(VAR_44, VAR_50, VAR_37) < 0) {
    FUNC_39(VAR_4, "Could not write to master " "pty, fd=%d, size=%d. %s",

     VAR_44, VAR_37, FUNC_37(VAR_27));
    FUNC_14(1);
   }
  }
 }

 FUNC_39(VAR_5, "Completed on %s", (VAR_48 != ((void*)0))? VAR_48 : "stdin/stdout");
 FUNC_8();

 FUNC_7(VAR_41);

 if (VAR_48 != ((void*)0)) {
  FUNC_7(VAR_43);
  FUNC_7(VAR_42);
 }

 return (0);
}
