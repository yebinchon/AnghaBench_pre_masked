
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
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_24 ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (int,char*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,char**,char*) ;
 scalar_t__ FUNC_6 (int ,struct sockaddr*,int*) ;
 int FUNC_7 (int ,int ,int ,char*,int*) ;
 int FUNC_8 () ;
 int FUNC_9 (char*,int ,int ) ;
 int VAR_25 ;
 int FUNC_10 (int ,int ) ;
 scalar_t__ VAR_26 ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int *,int ,int ,int ,int) ;
 int * FUNC_14 (int,int ,int ) ;
 int * FUNC_15 (int) ;
 int FUNC_16 () ;
 int VAR_27 ;
 int FUNC_17 (char*) ;
 int VAR_28 ;
 int FUNC_18 () ;

int
FUNC_19(int VAR_29, char *VAR_30[])
{
 register SVCXPRT *VAR_31 = ((void*)0);
 int VAR_32;
 int VAR_33 = 0;
 struct sockaddr_in VAR_34;
 int VAR_35 = sizeof (VAR_34);
 int VAR_36;

 while ((VAR_36 = FUNC_5(VAR_29, VAR_30, "p:h")) != -1) {
  switch (VAR_36) {
  case 'p':
   VAR_27 = VAR_25;
   break;
  default:
   FUNC_16();
   break;
  }
 }




 if (FUNC_12(VAR_1, VAR_23) == -1) {
  FUNC_17("failed to register AUTH_DES flavor");
  FUNC_4(1);
 }

 if (FUNC_6(0, (struct sockaddr *)&VAR_34, &VAR_35) == 0) {
  int VAR_37 = sizeof (int);

  if (VAR_34.sin_family != VAR_0)
   FUNC_4(1);
  if (FUNC_7(0, VAR_16, VAR_17,
    (char *)&VAR_21, &VAR_37) == -1)
   FUNC_4(1);
  VAR_32 = 0;
  VAR_22 = 1;
  VAR_33 = 0;
  FUNC_9("rpc.ypupdatedd", VAR_5, VAR_4);
 } else {

  if (FUNC_2(0,0)) {
   FUNC_3(1, "cannot fork");
  }
  FUNC_9("rpc.ypupdated", VAR_5, VAR_4);

  VAR_32 = VAR_6;
  (void) FUNC_10(VAR_18, VAR_19);
 }

 if ((VAR_21 == 0) || (VAR_21 == VAR_14)) {
  VAR_31 = FUNC_15(VAR_32);
  if (VAR_31 == ((void*)0)) {
   FUNC_0("cannot create udp service.");
   FUNC_4(1);
  }
  if (!VAR_22)
   VAR_33 = VAR_3;
  if (!FUNC_13(VAR_31, VAR_18, VAR_19, VAR_28, VAR_33)) {
   FUNC_0("unable to register (YPU_PROG, YPU_VERS, udp).");
   FUNC_4(1);
  }
 }

 if ((VAR_21 == 0) || (VAR_21 == VAR_15)) {
  VAR_31 = FUNC_14(VAR_32, 0, 0);
  if (VAR_31 == ((void*)0)) {
   FUNC_0("cannot create tcp service.");
   FUNC_4(1);
  }
  if (!VAR_22)
   VAR_33 = VAR_2;
  if (!FUNC_13(VAR_31, VAR_18, VAR_19, VAR_28, VAR_33)) {
   FUNC_0("unable to register (YPU_PROG, YPU_VERS, tcp).");
   FUNC_4(1);
  }
 }

 if (VAR_31 == (SVCXPRT *)((void*)0)) {
  FUNC_0("could not create a handle");
  FUNC_4(1);
 }
 if (VAR_22) {
  (void) FUNC_11(VAR_7, (SIG_PF) VAR_24);
  (void) FUNC_1(VAR_20/2);
 }

 (void) FUNC_11(VAR_11, VAR_13);
 (void) FUNC_11(VAR_8, (SIG_PF) VAR_26);
 (void) FUNC_11(VAR_12, (SIG_PF) VAR_26);
 (void) FUNC_11(VAR_10, (SIG_PF) VAR_26);
 (void) FUNC_11(VAR_9, (SIG_PF) VAR_26);

 FUNC_18();
 FUNC_0("svc_run returned");
 FUNC_4(1);

}
