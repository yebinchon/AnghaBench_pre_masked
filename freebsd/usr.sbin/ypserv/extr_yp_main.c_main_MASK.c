
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netconfig {int nc_flag; int nc_netid; } ;
struct bindaddrlistent {scalar_t__ si_socktype; scalar_t__ si_af; void* ble_hostname; } ;
struct __rpc_sockinfo {scalar_t__ si_socktype; scalar_t__ si_af; void* ble_hostname; } ;
typedef int si ;
typedef int SIG_PF ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,struct bindaddrlistent*,int ) ;
 int FUNC_3 (int *,int ) ;
 int VAR_14 ;
 scalar_t__ FUNC_4 (int ,struct bindaddrlistent*) ;
 scalar_t__ FUNC_5 (struct netconfig*,struct bindaddrlistent*) ;
 int FUNC_6 (char*,...) ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 int FUNC_7 (int) ;
 int VAR_19 ;
 int VAR_20 ;
 scalar_t__ VAR_21 ;
 int FUNC_8 (scalar_t__,struct netconfig*,struct bindaddrlistent*) ;
 scalar_t__ FUNC_9 (int ,int ) ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_10 (void*) ;
 int FUNC_11 (int,char*,...) ;
 int VAR_24 ;
 int FUNC_12 (int) ;
 struct netconfig* FUNC_13 (void*) ;
 int FUNC_14 (int,char**,char*) ;
 int FUNC_15 () ;
 scalar_t__ FUNC_16 (int *,int ,int ) ;
 struct bindaddrlistent* FUNC_17 (int) ;
 int FUNC_18 (struct bindaddrlistent*,int ,int) ;
 int FUNC_19 (char*,int ,int ) ;
 void* VAR_25 ;
 scalar_t__ VAR_26 ;
 void* VAR_27 ;
 void* FUNC_20 () ;
 int FUNC_21 (int ,int ) ;
 int FUNC_22 (int ) ;
 int FUNC_23 () ;
 int FUNC_24 () ;
 void* VAR_28 ;
 int FUNC_25 () ;
 int FUNC_26 () ;
 int FUNC_27 () ;
 int VAR_29 ;

int
FUNC_28(int VAR_30, char *VAR_31[])
{
 int VAR_32;
 int VAR_33;
 int VAR_34;

 void *VAR_35;
 struct netconfig *VAR_36;
 struct __rpc_sockinfo VAR_37;
 struct bindaddrlistent *VAR_38;

 FUNC_18(&VAR_37, 0, sizeof(VAR_37));
 FUNC_1(&VAR_19);

 while ((VAR_32 = FUNC_14(VAR_30, VAR_31, "dh:np:P:")) != -1) {
  switch (VAR_32) {
  case 'd':
   VAR_22 = VAR_29 = 1;
   break;
  case 'h':
   VAR_38 = FUNC_17(sizeof(*VAR_38));
   if (VAR_38 == ((void*)0))
    FUNC_11(1, "malloc() failed: -h %s", VAR_25);
   VAR_38->ble_hostname = VAR_25;
   FUNC_2(&VAR_19, VAR_38, VAR_20);
   break;
  case 'n':
   VAR_23 = 1;
   break;
  case 'p':
   VAR_28 = VAR_25;
   break;
  case 'P':
   VAR_27 = VAR_25;
   break;
  default:
   FUNC_24();
  }
 }



 if (FUNC_0(&VAR_19)) {
  VAR_38 = FUNC_17(sizeof(*VAR_38));
  if (VAR_38 == ((void*)0))
   FUNC_11(1, "malloc() failed");
  FUNC_18(VAR_38, 0, sizeof(*VAR_38));
  FUNC_2(&VAR_19, VAR_38, VAR_20);
 }

 FUNC_15();
 FUNC_26();



 VAR_35 = FUNC_20();
 if (VAR_35 == ((void*)0))
  FUNC_11(1, "cannot read %s", VAR_5);
 if (FUNC_4(0, &VAR_37) != 0) {

  VAR_18 = 1;
  VAR_17 = VAR_37.si_socktype;
  VAR_15 = VAR_37.si_af;
  VAR_16 = 0;
  FUNC_19("ypserv", VAR_2, VAR_1);
 } else {

  if (!VAR_22) {
   if (FUNC_9(0,0)) {
    FUNC_11(1,"cannot fork");
   }
   FUNC_19("ypserv", VAR_2, VAR_1);
  }
  VAR_18 = 0;
  VAR_15 = VAR_0;
  VAR_16 = VAR_6;
  FUNC_23();
 }

 if (FUNC_16(((void*)0), 0, VAR_3) != 0)
  FUNC_6("madvise(): %s", FUNC_22(VAR_24));




 VAR_34 = 0;
 while((VAR_36 = FUNC_13(VAR_35))) {
  if ((VAR_36->nc_flag & VAR_4)) {
   if (FUNC_5(VAR_36, &VAR_37) == 0) {
    FUNC_6("cannot get information for %s.  "
        "Ignored.", VAR_36->nc_netid);
    continue;
   }
   if (VAR_18) {
    if (VAR_37.si_socktype != VAR_17 ||
        VAR_37.si_af != VAR_15)
     continue;
   } else if (VAR_37.si_af != VAR_15)
     continue;
   VAR_33 = FUNC_8(VAR_16, VAR_36, &VAR_37);
   if (VAR_33) {
    FUNC_10(VAR_35);
    FUNC_12(1);
   }
   VAR_34++;
  }
 }
 FUNC_10(VAR_35);
 while(!(FUNC_0(&VAR_19)))
  FUNC_3(&VAR_19, VAR_20);
 if (VAR_34 == 0) {
  FUNC_6("no transport is available.  Aborted.");
  FUNC_12(1);
 }
 if (VAR_18) {
  (void) FUNC_21(VAR_7, (SIG_PF) VAR_21);
  (void) FUNC_7(VAR_14/2);
 }




 (void) FUNC_21(VAR_11, VAR_13);
 (void) FUNC_21(VAR_8, (SIG_PF) VAR_26);
 (void) FUNC_21(VAR_12, (SIG_PF) VAR_26);
 (void) FUNC_21(VAR_10, (SIG_PF) VAR_26);
 (void) FUNC_21(VAR_9, (SIG_PF) VAR_26);
 FUNC_27();
 FUNC_6("svc_run returned");
 FUNC_12(1);

}
