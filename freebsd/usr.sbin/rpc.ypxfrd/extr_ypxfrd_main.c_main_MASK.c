
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in {scalar_t__ sin_family; } ;
struct sockaddr {int dummy; } ;
typedef int saddr ;
typedef int SVCXPRT ;
typedef int SIG_PF ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
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
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_23 ;
 int VAR_24 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_25 ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int,char*) ;
 int FUNC_5 (int) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (int,char**,char*) ;
 scalar_t__ FUNC_9 (int ,struct sockaddr*,int*) ;
 int FUNC_10 (int ,int ,int ,char*,int*) ;
 int FUNC_11 (int,int ,char*) ;
 int FUNC_12 () ;
 int FUNC_13 (int ,int) ;
 int FUNC_14 (char*,int ,int ) ;
 int VAR_26 ;
 int FUNC_15 (int ,int ) ;
 scalar_t__ VAR_27 ;
 int FUNC_16 (int ,int ) ;
 int FUNC_17 (int *,int ,int ,int ,int) ;
 int * FUNC_18 (int,int ,int ) ;
 int * FUNC_19 (int) ;
 int FUNC_20 () ;
 int VAR_28 ;
 int VAR_29 ;
 int FUNC_21 () ;

int
FUNC_22(int VAR_30, char *VAR_31[])
{
 register SVCXPRT *VAR_32 = ((void*)0);
 int VAR_33;
 int VAR_34 = 0;
 struct sockaddr_in VAR_35;
 int VAR_36 = sizeof (VAR_35);
 int VAR_37;

 while ((VAR_37 = FUNC_8(VAR_30, VAR_31, "p:h")) != -1) {
  switch (VAR_37) {
  case 'p':
   VAR_28 = VAR_26;
   break;
  default:
   FUNC_20();
   break;
  }
 }

 FUNC_12();

 if (FUNC_9(0, (struct sockaddr *)&VAR_35, &VAR_36) == 0) {
  int VAR_38 = sizeof (int);

  if (VAR_35.sin_family != VAR_0)
   FUNC_5(1);
  if (FUNC_10(0, VAR_15, VAR_16,
    (char *)&VAR_23, &VAR_38) == -1)
   FUNC_5(1);
  VAR_33 = 0;
  VAR_24 = 1;
  VAR_34 = 0;
  FUNC_14("rpc.ypxfrd", VAR_4, VAR_3);
 } else {

  int VAR_39;
  int VAR_40, VAR_41;

  VAR_40 = FUNC_6();
  if (VAR_40 < 0)
   FUNC_4(1, "fork");
  if (VAR_40)
   FUNC_5(0);
  VAR_39 = FUNC_7();
  for (VAR_41 = 0; VAR_41 < VAR_39; VAR_41++)
   (void) FUNC_2(VAR_41);
  VAR_41 = FUNC_13(VAR_20, 2);
  (void) FUNC_3(VAR_41, 1);
  (void) FUNC_3(VAR_41, 2);
  VAR_41 = FUNC_13(VAR_21, 2);
  if (VAR_41 >= 0) {
   (void) FUNC_11(VAR_41, VAR_17, (char *)((void*)0));
   (void) FUNC_2(VAR_41);
  }
  FUNC_14("rpc.ypxfrd", VAR_4, VAR_3);

  VAR_33 = VAR_5;
  (void) FUNC_15(VAR_18, VAR_19);
 }

 if ((VAR_23 == 0) || (VAR_23 == VAR_13)) {
  VAR_32 = FUNC_19(VAR_33);
  if (VAR_32 == ((void*)0)) {
   FUNC_0("cannot create udp service.");
   FUNC_5(1);
  }
  if (!VAR_24)
   VAR_34 = VAR_2;
  if (!FUNC_17(VAR_32, VAR_18, VAR_19, VAR_29, VAR_34)) {
   FUNC_0("unable to register (YPXFRD_FREEBSD_PROG, YPXFRD_FREEBSD_VERS, udp).");
   FUNC_5(1);
  }
 }

 if ((VAR_23 == 0) || (VAR_23 == VAR_14)) {
  VAR_32 = FUNC_18(VAR_33, 0, 0);
  if (VAR_32 == ((void*)0)) {
   FUNC_0("cannot create tcp service.");
   FUNC_5(1);
  }
  if (!VAR_24)
   VAR_34 = VAR_1;
  if (!FUNC_17(VAR_32, VAR_18, VAR_19, VAR_29, VAR_34)) {
   FUNC_0("unable to register (YPXFRD_FREEBSD_PROG, YPXFRD_FREEBSD_VERS, tcp).");
   FUNC_5(1);
  }
 }

 if (VAR_32 == (SVCXPRT *)((void*)0)) {
  FUNC_0("could not create a handle");
  FUNC_5(1);
 }
 if (VAR_24) {
  (void) FUNC_16(VAR_6, (SIG_PF) VAR_25);
  (void) FUNC_1(VAR_22/2);
 }

 (void) FUNC_16(VAR_10, VAR_12);
 (void) FUNC_16(VAR_7, (SIG_PF) VAR_27);
 (void) FUNC_16(VAR_11, (SIG_PF) VAR_27);
 (void) FUNC_16(VAR_9, (SIG_PF) VAR_27);
 (void) FUNC_16(VAR_8, (SIG_PF) VAR_27);

 FUNC_21();
 FUNC_0("svc_run returned");
 FUNC_5(1);

}
