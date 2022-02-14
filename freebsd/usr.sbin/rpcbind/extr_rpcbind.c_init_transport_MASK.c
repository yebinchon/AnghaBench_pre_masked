
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int32_t ;
struct netbuf {int len; int maxlen; struct sockaddr* buf; } ;
struct t_bind {struct netbuf addr; } ;
struct sockaddr_un {int ai_family; int ai_addrlen; scalar_t__ ai_addr; int ai_flags; int ai_protocol; int ai_socktype; int sun_len; int sun_path; int sun_family; } ;
struct sockaddr {int sa_len; } ;
typedef char pmaplist ;
struct netconfig {scalar_t__ nc_semantics; char* nc_netid; int nc_nlookups; char** nc_lookups; char* nc_protofmly; char* nc_proto; } ;
struct addrinfo {int ai_family; int ai_addrlen; scalar_t__ ai_addr; int ai_flags; int ai_protocol; int ai_socktype; int sun_len; int sun_path; int sun_family; } ;
struct __rpc_sockinfo {int si_af; int si_proto; int si_socktype; } ;
typedef int mode_t ;
struct TYPE_2__ {void* pm_vers; void* pm_prot; int pm_port; int pm_prog; } ;
typedef int SVCXPRT ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 char* VAR_11 ;
 char* VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 char* VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 void* VAR_19 ;
 int VAR_20 ;
 void* VAR_21 ;
 void* VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_0 (struct sockaddr_un*) ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int FUNC_1 (struct netconfig*) ;
 int FUNC_2 (struct netconfig*,struct __rpc_sockinfo*) ;
 int FUNC_3 (struct netconfig*,struct netbuf*) ;
 scalar_t__ FUNC_4 (int,struct sockaddr*,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct netconfig*) ;
 scalar_t__ VAR_29 ;
 scalar_t__ VAR_30 ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ,char*,...) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (struct sockaddr_un*) ;
 int FUNC_11 (int) ;
 int FUNC_12 (char*,int ,struct sockaddr_un*,struct sockaddr_un**) ;
 char** VAR_31 ;
 int FUNC_13 (int const,char*,int *) ;
 char* VAR_32 ;
 int FUNC_14 (int,int ) ;
 void* FUNC_15 (int) ;
 int FUNC_16 (struct sockaddr*,struct sockaddr*,int) ;
 int FUNC_17 (struct sockaddr_un*,int ,int) ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int FUNC_18 (int ,void*,struct netconfig*,struct netbuf*) ;
 char** FUNC_19 (char**,int) ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int FUNC_20 (int,int ,int ,int *,int) ;
 int VAR_39 ;
 scalar_t__ FUNC_21 (char*,char*) ;
 int FUNC_22 (int ,int ) ;
 void* FUNC_23 (char*) ;
 int FUNC_24 (int *,int ,void*,int ,int *) ;
 int FUNC_25 (int *,int ,void*,int ,int ) ;
 scalar_t__ FUNC_26 (int,struct netconfig*,struct t_bind*,int ,int ) ;
 int FUNC_27 (int ,char*,...) ;
 void* FUNC_28 (struct netconfig*,struct netbuf*) ;
 void* VAR_40 ;
 scalar_t__* VAR_41 ;
 void* VAR_42 ;
 scalar_t__* VAR_43 ;
 int FUNC_29 (int) ;
 int FUNC_30 (int ) ;

__attribute__((used)) static int
FUNC_31(struct netconfig *VAR_44)
{
 int VAR_45;
 struct t_bind VAR_46;
 struct addrinfo VAR_47, *VAR_48 = ((void*)0);
 struct __rpc_sockinfo VAR_49;
 SVCXPRT *VAR_50;
 int VAR_51;
 int VAR_52;
 int VAR_53;
 int VAR_54;
 int VAR_55;
 struct sockaddr *VAR_56;
 u_int32_t VAR_57[4];
 struct sockaddr_un VAR_58;
 mode_t VAR_59;

 if ((VAR_44->nc_semantics != VAR_13) &&
     (VAR_44->nc_semantics != VAR_14) &&
     (VAR_44->nc_semantics != VAR_15))
     return (1);
 if ((FUNC_21(VAR_44->nc_netid, "local") == 0) ||
     (FUNC_21(VAR_44->nc_netid, "unix") == 0)) {




     if ((VAR_45 = FUNC_1(VAR_44)) < 0) {
  int VAR_60 = 0;
  if (VAR_30 == VAR_3)
      VAR_60 = 1;
  FUNC_27(VAR_60?VAR_9:VAR_10, "cannot create socket for %s",
      VAR_44->nc_netid);
  return (1);
     }
 }

 if (!FUNC_2(VAR_44, &VAR_49)) {
     FUNC_27(VAR_10, "cannot get information for %s",
  VAR_44->nc_netid);
     return (1);
 }

 if ((FUNC_21(VAR_44->nc_netid, "local") == 0) ||
     (FUNC_21(VAR_44->nc_netid, "unix") == 0)) {
     FUNC_17(&VAR_58, 0, sizeof VAR_58);
     VAR_58.sun_family = VAR_0;
     FUNC_30(VAR_28);
     FUNC_22(VAR_58.sun_path, VAR_28);
     VAR_58.sun_len = FUNC_0(&VAR_58);
     VAR_53 = sizeof (struct sockaddr_un);
     VAR_56 = (struct sockaddr *)&VAR_58;
 } else {


     FUNC_17(&VAR_47, 0, sizeof VAR_47);
     VAR_47.ai_flags = VAR_2;
     VAR_47.ai_family = VAR_49.si_af;
     VAR_47.ai_socktype = VAR_49.si_socktype;
     VAR_47.ai_protocol = VAR_49.si_proto;
 }

 if ((FUNC_21(VAR_44->nc_netid, "local") != 0) &&
     (FUNC_21(VAR_44->nc_netid, "unix") != 0)) {




     VAR_54 = VAR_33 + 1;
     VAR_31 = FUNC_19(VAR_31, VAR_54 * sizeof(char *));
     if (VAR_54 == 1)
         VAR_31[0] = "*";
     else {
  if (VAR_47.ai_family == 129) {
      VAR_31[VAR_54 - 1] = "127.0.0.1";
  } else if (VAR_47.ai_family == 128) {
      VAR_31[VAR_54 - 1] = "::1";
  } else
      return 1;
     }




     VAR_55 = 0;
     while (VAR_54 > 0) {
  --VAR_54;



  if ((VAR_45 = FUNC_1(VAR_44)) < 0) {
      int VAR_61 = 0;
      if (VAR_30 == VAR_3 &&
   VAR_44->nc_semantics != VAR_13)
   VAR_61 = 1;
      FUNC_27(VAR_61 ? VAR_9 : VAR_10,
   "cannot create socket for %s", VAR_44->nc_netid);
      return (1);
  }
  switch (VAR_47.ai_family) {
  case 129:
      if (FUNC_13(129, VAR_31[VAR_54],
   VAR_57) == 1) {
   VAR_47.ai_flags &= VAR_1;
      } else {



   if (FUNC_13(128,
       VAR_31[VAR_54], VAR_57) == 1) {
       FUNC_5(VAR_45);
       continue;
   }
      }
      break;
  case 128:
      if (FUNC_13(128, VAR_31[VAR_54],
   VAR_57) == 1) {
   VAR_47.ai_flags &= VAR_1;
      } else {



   if (FUNC_13(129, VAR_31[VAR_54],
       VAR_57) == 1) {
    FUNC_5(VAR_45);
    continue;
   }
      }
      if (FUNC_20(VAR_45, VAR_4,
   VAR_8, &VAR_34, sizeof VAR_34) < 0) {
   FUNC_27(VAR_10,
       "can't set v6-only binding for "
       "ipv6 socket: %m");
   continue;
      }
      break;
  default:
      break;
  }




  if (FUNC_21("*", VAR_31[VAR_54]) == 0)
      VAR_31[VAR_54] = ((void*)0);
  if ((FUNC_21(VAR_44->nc_netid, "local") != 0) &&
      (FUNC_21(VAR_44->nc_netid, "unix") != 0)) {
      if ((VAR_52 = FUNC_12(VAR_31[VAR_54],
   VAR_38, &VAR_47, &VAR_48)) != 0) {
   FUNC_27(VAR_10,
       "cannot get local address for %s: %s",
       VAR_44->nc_netid, FUNC_11(VAR_52));
   continue;
      }
      VAR_53 = VAR_48->ai_addrlen;
      VAR_56 = (struct sockaddr *)VAR_48->ai_addr;
  }
  VAR_59 = FUNC_29(VAR_27|VAR_25|VAR_26);
  if (FUNC_4(VAR_45, VAR_56, VAR_53) != 0) {
      FUNC_27(VAR_10, "cannot bind %s on %s: %m",
   (VAR_31[VAR_54] == ((void*)0)) ? "*" :
       VAR_31[VAR_54], VAR_44->nc_netid);
      if (VAR_48 != ((void*)0))
   FUNC_10(VAR_48);
      continue;
  } else
      VAR_55 = 1;
  (void)FUNC_29(VAR_59);


  VAR_46.addr.len = VAR_46.addr.maxlen = VAR_53;
  VAR_46.addr.buf = FUNC_15(VAR_53);
  if (VAR_46.addr.buf == ((void*)0)) {
      FUNC_27(VAR_10,
   "cannot allocate memory for %s address",
   VAR_44->nc_netid);
      if (VAR_48 != ((void*)0))
   FUNC_10(VAR_48);
      return 1;
  }
  FUNC_16(VAR_46.addr.buf, VAR_56, VAR_53);
  if (VAR_44->nc_semantics != VAR_13)
      FUNC_14(VAR_45, VAR_24);

  VAR_50 = (SVCXPRT *)FUNC_26(VAR_45, VAR_44, &VAR_46,
      VAR_23, VAR_23);
  if (VAR_50 == (SVCXPRT *)((void*)0)) {
      FUNC_27(VAR_10, "%s: could not create service",
   VAR_44->nc_netid);
      goto error;
  }
     }
     if (!VAR_55)
  return 1;
 } else {
     VAR_59 = FUNC_29(VAR_27|VAR_25|VAR_26);
     if (FUNC_4(VAR_45, VAR_56, VAR_53) < 0) {
  FUNC_27(VAR_10, "cannot bind %s: %m", VAR_44->nc_netid);
  if (VAR_48 != ((void*)0))
      FUNC_10(VAR_48);
  return 1;
     }
     (void) FUNC_29(VAR_59);


     VAR_46.addr.len = VAR_46.addr.maxlen = VAR_53;
     VAR_46.addr.buf = FUNC_15(VAR_53);
     if (VAR_46.addr.buf == ((void*)0)) {
  FUNC_27(VAR_10, "cannot allocate memory for %s address",
      VAR_44->nc_netid);
  if (VAR_48 != ((void*)0))
      FUNC_10(VAR_48);
  return 1;
     }
     FUNC_16(VAR_46.addr.buf, VAR_56, VAR_53);
     if (VAR_44->nc_semantics != VAR_13)
  FUNC_14(VAR_45, VAR_24);

     VAR_50 = (SVCXPRT *)FUNC_26(VAR_45, VAR_44, &VAR_46,
  VAR_23, VAR_23);
     if (VAR_50 == (SVCXPRT *)((void*)0)) {
  FUNC_27(VAR_10, "%s: could not create service",
      VAR_44->nc_netid);
  goto error;
     }
 }
 if (!FUNC_24(VAR_50, VAR_20, VAR_21, VAR_36, ((void*)0))) {
  FUNC_27(VAR_10, "could not register %s version 3",
    VAR_44->nc_netid);
  goto error;
 }
 FUNC_18(VAR_20, VAR_21, VAR_44, &VAR_46.addr);


 if (!FUNC_24(VAR_50, VAR_20, VAR_22, VAR_37, ((void*)0))) {
  FUNC_27(VAR_10, "could not register %s version 4",
    VAR_44->nc_netid);
  goto error;
 }
 FUNC_18(VAR_20, VAR_22, VAR_44, &VAR_46.addr);


 VAR_51 = FUNC_3(VAR_44, &VAR_46.addr);
 if (VAR_44->nc_semantics == VAR_13) {
  VAR_51 = FUNC_6(VAR_44);
 }
 return (0);
error:
 FUNC_5(VAR_45);
 return (1);
}
