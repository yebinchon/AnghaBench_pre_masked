
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int tv_sec; scalar_t__ tv_usec; } ;
struct TYPE_5__ {int tv_sec; scalar_t__ tv_usec; } ;
struct itimerval {TYPE_2__ it_value; TYPE_1__ it_interval; } ;
struct ctx {int pdp_ctx; char* pdp_apn; char* pdp_user; char* pdp_pwd; char* pin; int con_net_type; int flags; char* resolv_path; int dbm; int pfh; scalar_t__ con_status; scalar_t__ fd; int ifnam; int * ns; int * resolv; scalar_t__ con_net_stat; int * con_oper; int * con_apn; } ;
typedef int fd_set ;
struct TYPE_7__ {int res; int head; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__,int *) ;
 int FUNC_1 (scalar_t__,int *) ;
 int FUNC_2 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

 char* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct ctx*,struct ctx*) ;
 int FUNC_5 () ;
 int FUNC_6 (struct ctx*) ;
 int FUNC_7 (struct ctx*,char*) ;
 int FUNC_8 (struct ctx*) ;
 scalar_t__ VAR_17 ;
 int FUNC_9 (int,char*,...) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,char*,...) ;
 char** FUNC_13 (struct ctx*) ;
 int FUNC_14 (int,char**,char*) ;
 char** VAR_18 ;
 size_t VAR_19 ;
 int FUNC_15 (int ) ;
 int FUNC_16 (char*,...) ;
 int VAR_20 ;
 int FUNC_17 (scalar_t__,int *,int *,int *,int *) ;
 int FUNC_18 (char const*) ;
 int FUNC_19 (int ,struct itimerval*,int *) ;
 int VAR_21 ;
 int FUNC_20 (int ,int ) ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_21 (char const*) ;
 int FUNC_22 (char*,int *,int) ;
 scalar_t__ VAR_24 ;
 TYPE_3__ VAR_25 ;
 int FUNC_23 (TYPE_3__*,int,int,int *,struct ctx*) ;
 int VAR_26 ;
 int FUNC_24 (char*) ;
 int FUNC_25 (char*) ;
 int FUNC_26 (struct ctx*) ;
 int FUNC_27 (struct ctx*,int) ;

int
FUNC_28(int VAR_27, char *VAR_28[])
{
 int VAR_29, VAR_30, VAR_31;
 const char *VAR_32 = ((void*)0);
 char *VAR_33 = ((void*)0);
 char **VAR_34, **VAR_35;
 fd_set VAR_36;
 struct ctx VAR_37;
 struct itimerval VAR_38;

 FUNC_3(&VAR_25.head);
 VAR_25.res = 1;

 VAR_37.pdp_ctx = 1;
 VAR_37.pdp_apn = VAR_37.pdp_user = VAR_37.pdp_pwd = ((void*)0);
 VAR_37.pin = ((void*)0);

 VAR_37.con_status = 0;
 VAR_37.con_apn = ((void*)0);
 VAR_37.con_oper = ((void*)0);
 VAR_37.con_net_stat = 0;
 VAR_37.con_net_type = -1;
 VAR_37.flags = 0;
 VAR_37.resolv_path = VAR_9;
 VAR_37.resolv = ((void*)0);
 VAR_37.ns = ((void*)0);
 VAR_37.dbm = 0;

 VAR_31 = VAR_8;
 VAR_37.flags |= VAR_3;

 while ((VAR_29 = FUNC_14(VAR_27, VAR_28, "?ha:p:c:u:k:r:f:dbn")) != -1) {
  switch (VAR_29) {
  case 'a':
   VAR_37.pdp_apn = VAR_28[VAR_19 - 1];
   break;
  case 'c':
   VAR_37.pdp_ctx = FUNC_22(VAR_28[VAR_19 - 1], ((void*)0), 10);
   if (VAR_37.pdp_ctx < 1) {
    FUNC_25("Invalid context ID, defaulting to 1");
    VAR_37.pdp_ctx = 1;
   }
   break;
  case 'p':
   VAR_37.pin = VAR_28[VAR_19 - 1];
   break;
  case 'u':
   VAR_37.pdp_user = VAR_28[VAR_19 - 1];
   break;
  case 'k':
   VAR_37.pdp_pwd = VAR_28[VAR_19 - 1];
   break;
  case 'r':
   VAR_37.resolv_path = VAR_28[VAR_19 - 1];
   break;
  case 'd':
   VAR_31 = 128;
   break;
  case 'b':
   VAR_37.flags &= ~VAR_3;
   break;
  case 'n':
   VAR_37.flags |= VAR_4;
   break;
  case 'f':
   VAR_33 = VAR_28[VAR_19 - 1];
   break;
  case 'h':
  case '?':
  default:
   FUNC_24(VAR_28[0]);
   FUNC_10(VAR_1);
  }
 }

 VAR_27 -= VAR_19;
 VAR_28 += VAR_19;

 if (VAR_27 < 1)
  FUNC_9(1, "no interface given");

 VAR_32 = VAR_28[VAR_27 - 1];
 VAR_37.ifnam = FUNC_21(VAR_32);

 switch (VAR_31) {
 case 128:
  FUNC_16("Disconnecting %s\n", VAR_32);
  FUNC_18(VAR_32);
  FUNC_10(VAR_1);
 default:
  break;
 }

 FUNC_20(VAR_11, VAR_21);
 FUNC_20(VAR_12, VAR_21);
 FUNC_20(VAR_13, VAR_21);
 FUNC_20(VAR_14, VAR_21);
 FUNC_20(VAR_10, VAR_21);

 VAR_38.it_interval.tv_sec = 1;
 VAR_38.it_interval.tv_usec = 0;
 VAR_38.it_value.tv_sec = 1;
 VAR_38.it_value.tv_usec = 0;
 VAR_30 = FUNC_19(VAR_7, &VAR_38, ((void*)0));
 if (VAR_30 != 0)
  FUNC_9(1, "setitimer");

 FUNC_23(&VAR_25, 1, 5, &VAR_26, &VAR_37);
 FUNC_27(&VAR_37, 15);

 if (VAR_33 != ((void*)0)) {
  VAR_30 = FUNC_7(&VAR_37, VAR_33);
  if (VAR_30 != 0)
   FUNC_9(1, "Failed to open %s", VAR_33);
 }
 else {
  VAR_35 = FUNC_13(&VAR_37);
  if (VAR_35 == ((void*)0))
   FUNC_9(1, "%s does not appear to be a uhso device", VAR_32);
  for (VAR_34 = VAR_35; *VAR_34 != ((void*)0); VAR_34++) {
   VAR_30 = FUNC_7(&VAR_37, *VAR_34);
   if (VAR_30 == 0) {
    VAR_33 = *VAR_34;
    break;
   }
  }
  if (*VAR_34 == ((void*)0))
   FUNC_9(1, "Failed to obtain a control port, "
       "try specifying one manually");
 }

 if (!(VAR_37.flags & VAR_3) && !(VAR_37.flags & VAR_4))
  FUNC_6(&VAR_37);


 FUNC_2(&VAR_36);
 FUNC_1(VAR_37.fd, &VAR_36);
 for (;;) {

  FUNC_26(&VAR_37);
  VAR_30 = FUNC_17(VAR_37.fd + 1, &VAR_36, ((void*)0), ((void*)0), ((void*)0));
  if (VAR_30 <= 0) {
   if (VAR_20 && VAR_17 == VAR_0)
    continue;
   if (VAR_37.flags & VAR_5) {
    VAR_37.flags &= ~VAR_5;
    FUNC_27(&VAR_37, 5);
    FUNC_8(&VAR_37);
    FUNC_27(&VAR_37, 15);
    FUNC_7(&VAR_37, VAR_33);
    VAR_20 = 1;
    continue;
   }

   break;
  }

  if (FUNC_0(VAR_37.fd, &VAR_36)) {
   FUNC_27(&VAR_37, 15);
   VAR_30 = FUNC_4(&VAR_37, &VAR_37);
   if (VAR_30 != 0)
    break;
  }
  FUNC_1(VAR_37.fd, &VAR_36);

  if (!(VAR_37.flags & VAR_2) && (VAR_37.flags & VAR_6)) {
   FUNC_16("Status: %s (%s)",
       VAR_37.con_status ? "connected" : "disconnected",
       VAR_18[VAR_37.con_net_type]);
   if (VAR_37.dbm < 0)
    FUNC_16(", signal: %d dBm", VAR_37.dbm);
   FUNC_16("\t\t\t\r");
   FUNC_11(VAR_23);
  }
 }
 if (!(VAR_37.flags & VAR_2) && (VAR_37.flags & VAR_6))
  FUNC_16("\n");

 FUNC_20(VAR_11, VAR_15);
 FUNC_20(VAR_12, VAR_15);
 FUNC_20(VAR_13, VAR_15);
 FUNC_20(VAR_14, VAR_15);
 FUNC_20(VAR_10, VAR_16);

 FUNC_8(&VAR_37);

 if (VAR_37.flags & VAR_2) {
  FUNC_15(VAR_37.pfh);
  if (VAR_24)
   FUNC_5();
 }

 return (0);
}
