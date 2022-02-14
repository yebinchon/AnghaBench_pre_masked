
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ buf; } ;
struct t_bind {scalar_t__ qlen; TYPE_1__ addr; } ;
struct socket {int dummy; } ;
struct sockaddr_storage {int ss_len; int ss_family; } ;
struct sockaddr {int dummy; } ;
struct netconfig {char* nc_netid; int nc_protofmly; } ;
struct __rpc_sockinfo {int si_socktype; int si_alen; int si_af; } ;
typedef scalar_t__ bool_t ;
struct TYPE_10__ {int * xp_socket; int xp_netid; int xp_type; } ;
typedef TYPE_2__ SVCXPRT ;
typedef int SVCPOOL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;


 scalar_t__ VAR_2 ;
 struct socket* FUNC_0 (struct netconfig const*) ;
 int FUNC_1 (struct netconfig const*,struct __rpc_sockinfo*) ;
 int FUNC_2 (struct socket*,struct __rpc_sockinfo*) ;
 int FUNC_3 (struct socket*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (TYPE_2__*,scalar_t__) ;
 int FUNC_6 (int ,struct sockaddr*,int*) ;
 scalar_t__ FUNC_7 (struct socket*,struct sockaddr*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_8 (struct sockaddr_storage*,int ,int) ;
 int FUNC_9 (char*,...) ;
 int VAR_5 ;
 scalar_t__ FUNC_10 (struct socket*,struct sockaddr*,int ) ;
 int FUNC_11 (struct socket*) ;
 int FUNC_12 (struct socket*,int,int ) ;
 int FUNC_13 (int ,char*) ;
 int FUNC_14 (char*,int ) ;
 TYPE_2__* FUNC_15 (int *,struct socket*,size_t,size_t) ;
 TYPE_2__* FUNC_16 (int ,size_t,size_t) ;
 TYPE_2__* FUNC_17 (int *,struct socket*,size_t,size_t) ;
 int FUNC_18 (TYPE_2__*) ;

SVCXPRT *
FUNC_19(
 SVCPOOL *VAR_6,
 struct socket *VAR_7,
 const struct netconfig *VAR_8,
 const struct t_bind *VAR_9,
 size_t VAR_10,
 size_t VAR_11)
{
 SVCXPRT *VAR_12 = ((void*)0);
 bool_t VAR_13 = VAR_0;
 struct __rpc_sockinfo VAR_14;
 struct sockaddr_storage VAR_15;

 if (!VAR_7) {
  if (VAR_8 == ((void*)0)) {
   FUNC_9("svc_tli_create: invalid netconfig\n");
   return (((void*)0));
  }
  VAR_7 = FUNC_0(VAR_8);
  if (!VAR_7) {
   FUNC_9(
       "svc_tli_create: could not open connection for %s\n",
     VAR_8->nc_netid);
   return (((void*)0));
  }
  FUNC_1(VAR_8, &VAR_14);
  VAR_13 = VAR_2;
 } else {



  if (!FUNC_2(VAR_7, &VAR_14)) {
   FUNC_9(
  "svc_tli_create: could not get transport information\n");
   return (((void*)0));
  }
 }




 if (VAR_13 || !FUNC_3(VAR_7)) {
  if (VAR_9 == ((void*)0)) {
   if (FUNC_7(VAR_7, ((void*)0))) {
    FUNC_8(&VAR_15, 0, sizeof VAR_15);
    VAR_15.ss_family = VAR_14.si_af;
    VAR_15.ss_len = VAR_14.si_alen;
    if (FUNC_10(VAR_7, (struct sockaddr *)&VAR_15,
     VAR_3)) {
     FUNC_9(
   "svc_tli_create: could not bind to anonymous port\n");
     goto freedata;
    }
   }
   FUNC_12(VAR_7, -1, VAR_3);
  } else {
   if (FUNC_7(VAR_7,
    (struct sockaddr *)VAR_9->addr.buf)) {
    FUNC_9(
  "svc_tli_create: could not bind to requested address\n");
    goto freedata;
   }
   FUNC_12(VAR_7, (int)VAR_9->qlen, VAR_3);
  }

 }



 switch (VAR_14.si_socktype) {
  case 128:
    VAR_12 = FUNC_17(VAR_6, VAR_7, VAR_10, VAR_11);
   if (!VAR_8 || !VAR_12)
    break;






   break;
  case 129:
   VAR_12 = FUNC_15(VAR_6, VAR_7, VAR_10, VAR_11);
   break;
  default:
   FUNC_9("svc_tli_create: bad service type");
   goto freedata;
 }

 if (VAR_12 == ((void*)0))




  goto freedata;


 VAR_12->xp_type = FUNC_4(VAR_14.si_socktype);

 if (VAR_8) {
  VAR_12->xp_netid = FUNC_14(VAR_8->nc_netid, VAR_1);
 }
 return (VAR_12);

freedata:
 if (VAR_13)
  (void)FUNC_11(VAR_7);
 if (VAR_12) {
  if (!VAR_13)
   VAR_12->xp_socket = ((void*)0);
  FUNC_18(VAR_12);
 }
 return (((void*)0));
}
