
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int *,int *) ;
 int VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int) ;
 void* FUNC_2 (int ,int ,int *,int ) ;
 int VAR_7 ;
 scalar_t__ FUNC_3 (char*) ;
 int VAR_8 ;
 int FUNC_4 (int *,char*,int ) ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int FUNC_5 (int ,char*) ;

__attribute__((used)) static void
FUNC_6(void)
{
 if (VAR_10 == 0) {
  if (FUNC_0(VAR_11, &VAR_1, &VAR_4) < 0) {
   FUNC_5(VAR_0, "NgMkSockNode: %m");
   FUNC_1(1);
  }
  VAR_10 = FUNC_3(".:");
 }

 if ((VAR_2 = FUNC_2(VAR_1, VAR_3, ((void*)0), VAR_7)) == ((void*)0)) {
  FUNC_5(VAR_0, "fd_select failed on csock: %m");
  return;
 }
 if ((VAR_5 = FUNC_2(VAR_4, VAR_6, ((void*)0), VAR_7)) == ((void*)0)) {
  FUNC_5(VAR_0, "fd_select failed on dsock: %m");
  return;
 }

 VAR_9 = FUNC_4(&VAR_8,
     "The MIB for the NetGraph access module for SNMP.", VAR_7);
}
