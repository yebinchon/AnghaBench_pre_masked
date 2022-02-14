
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int32_t ;
struct sockaddr_in6 {int sin6_family; int sin6_addr; void* sin6_port; } ;
struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {int sin_family; TYPE_1__ sin_addr; void* sin_port; } ;
struct sockaddr {int ai_family; struct sockaddr* ai_addr; int sa_len; void* ai_addrlen; int ai_protocol; int ai_flags; int ai_socktype; } ;
struct netconfig {scalar_t__ nc_semantics; int nc_netid; } ;
struct addrinfo {int ai_family; struct addrinfo* ai_addr; int sa_len; void* ai_addrlen; int ai_protocol; int ai_flags; int ai_socktype; } ;
struct __rpc_sockinfo {int si_af; int si_proto; int si_socktype; } ;
typedef void* socklen_t ;




 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (struct netconfig*) ;
 int FUNC_1 (struct netconfig*,struct __rpc_sockinfo*) ;
 int FUNC_2 (int,struct sockaddr*) ;
 int FUNC_3 (int) ;
 scalar_t__ VAR_16 ;
 int FUNC_4 (int,char*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct sockaddr*) ;
 int FUNC_7 (struct sockaddr*) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int *,int *,struct sockaddr*,struct sockaddr**) ;
 scalar_t__ FUNC_10 (struct sockaddr*,int ,int *,int ,int *,int,int) ;
 int ** VAR_17 ;
 int FUNC_11 (int ) ;
 void* FUNC_12 (int ) ;
 int VAR_18 ;
 int FUNC_13 (int const,int *,int *) ;
 void* FUNC_14 (int) ;
 int VAR_19 ;
 int FUNC_15 (struct sockaddr*,int ,int) ;
 int VAR_20 ;
 int FUNC_16 () ;
 int* FUNC_17 (int*,int) ;
 int FUNC_18 (int,int ,int ,int*,int) ;
 int* VAR_21 ;
 int VAR_22 ;
 scalar_t__ FUNC_19 (char*,int *) ;
 int * VAR_23 ;
 int FUNC_20 (int ,char*,...) ;

__attribute__((used)) static int
FUNC_21(struct netconfig *VAR_24)
{
 struct addrinfo VAR_25, *VAR_26 = ((void*)0);
 struct sockaddr_in *VAR_27;
 struct sockaddr_in6 *VAR_28;
 struct __rpc_sockinfo VAR_29;
 int VAR_30;
 int VAR_31;
 int VAR_32;
 int VAR_33 = 1;
 int VAR_34;
 u_int32_t VAR_35[4];
 int VAR_36;

 if ((VAR_24->nc_semantics != VAR_9) &&
     (VAR_24->nc_semantics != VAR_10) &&
     (VAR_24->nc_semantics != VAR_11))
  return (1);




 if (!FUNC_1(VAR_24, &VAR_29)) {
  FUNC_20(VAR_8, "cannot get information for %s",
      VAR_24->nc_netid);
  return (1);
 }


 FUNC_15(&VAR_25, 0, sizeof VAR_25);
 VAR_25.ai_family = VAR_29.si_af;
 VAR_25.ai_socktype = VAR_29.si_socktype;
 VAR_25.ai_protocol = VAR_29.si_proto;




 VAR_32 = VAR_20;
 while (VAR_32 > 0) {
  --VAR_32;
  VAR_21 = FUNC_17(VAR_21, (VAR_22 + 1) * sizeof(int));
  if (VAR_21 == ((void*)0))
   FUNC_16();
  VAR_21[VAR_22++] = -1;
  VAR_36 = 0;

  VAR_25.ai_flags = VAR_1;




  if ((VAR_31 = FUNC_0(VAR_24)) < 0) {
   int VAR_37 = 0;
       if (VAR_16 == VAR_3 &&
       VAR_24->nc_semantics != VAR_9)
    VAR_37 = 1;

   FUNC_20(VAR_37 ? VAR_7 : VAR_8,
       "cannot create socket for %s", VAR_24->nc_netid);
   if (VAR_37 != 0)
    continue;
   FUNC_5(1);
  }

  switch (VAR_25.ai_family) {
  case 129:
   if (FUNC_13(129, VAR_17[VAR_32],
       VAR_35) == 1) {
    VAR_25.ai_flags |= VAR_0;
   } else {



    if (FUNC_13(128, VAR_17[VAR_32],
        VAR_35) == 1) {
     FUNC_3(VAR_31);
     continue;
    }
   }
   break;
  case 128:
   if (FUNC_13(128, VAR_17[VAR_32],
       VAR_35) == 1) {
    VAR_25.ai_flags |= VAR_0;
   } else {



    if (FUNC_13(129, VAR_17[VAR_32],
        VAR_35) == 1) {
     FUNC_3(VAR_31);
     continue;
    }
   }






   if (FUNC_18(VAR_31, VAR_5, VAR_6, &VAR_33,
       sizeof VAR_33) < 0) {
    FUNC_20(VAR_8,
        "can't disable v4-in-v6 on IPv6 socket");
    FUNC_5(1);
   }
   break;
  default:
   break;
  }




  if (FUNC_19("*", VAR_17[VAR_32]) == 0) {
   if (VAR_23 == ((void*)0)) {
    VAR_26 = FUNC_14(sizeof(struct addrinfo));
    if (VAR_26 == ((void*)0))
     FUNC_16();
    VAR_36 = 1;
    VAR_26->ai_flags = VAR_25.ai_flags;
    VAR_26->ai_family = VAR_25.ai_family;
    VAR_26->ai_protocol = VAR_25.ai_protocol;
    switch (VAR_26->ai_family) {
    case 129:
     VAR_27 = FUNC_14(sizeof(struct sockaddr_in));
     if (VAR_27 == ((void*)0))
      FUNC_16();
     VAR_27->sin_family = 129;
     VAR_27->sin_port = FUNC_12(0);
     VAR_27->sin_addr.s_addr = FUNC_11(VAR_4);
     VAR_26->ai_addr = (struct sockaddr*) VAR_27;
     VAR_26->ai_addrlen = (socklen_t)
         sizeof(struct sockaddr_in);
     break;
    case 128:
     VAR_28 = FUNC_14(sizeof(struct sockaddr_in6));
     if (VAR_28 == ((void*)0))
      FUNC_16();
     VAR_28->sin6_family = 128;
     VAR_28->sin6_port = FUNC_12(0);
     VAR_28->sin6_addr = VAR_18;
     VAR_26->ai_addr = (struct sockaddr*) VAR_28;
     VAR_26->ai_addrlen = (socklen_t)
         sizeof(struct sockaddr_in6);
     break;
    default:
     FUNC_20(VAR_8, "bad addr fam %d",
         VAR_26->ai_family);
     FUNC_5(1);
    }
   } else {
    if ((VAR_30 = FUNC_9(((void*)0), VAR_23,
        &VAR_25, &VAR_26)) != 0) {
     FUNC_20(VAR_8,
         "cannot get local address for %s: %s",
         VAR_24->nc_netid,
         FUNC_8(VAR_30));
     FUNC_3(VAR_31);
     continue;
    }
   }
  } else {
   if ((VAR_30 = FUNC_9(VAR_17[VAR_32], VAR_23,
       &VAR_25, &VAR_26)) != 0) {
    FUNC_20(VAR_8,
        "cannot get local address for %s: %s",
        VAR_24->nc_netid, FUNC_8(VAR_30));
    FUNC_3(VAR_31);
    continue;
   }
  }


  VAR_21[VAR_22 - 1] = VAR_31;


  VAR_34 = FUNC_2(VAR_31, VAR_26->ai_addr);
  if (VAR_34 != 0) {
   if (VAR_16 == VAR_2 && VAR_19 != 0) {
    if (VAR_36 != 0) {
     FUNC_6(VAR_26->ai_addr);
     FUNC_6(VAR_26);
    } else
     FUNC_7(VAR_26);
    return (-1);
   }
   FUNC_20(VAR_8, "bindresvport_sa: %m");
   FUNC_5(1);
  }

  if (VAR_23 == ((void*)0)) {
   VAR_23 = FUNC_14(VAR_13 * sizeof(char));
   if (VAR_23 == ((void*)0))
    FUNC_16();
   VAR_19 = 1;

   if (FUNC_10(VAR_26->ai_addr,
       VAR_26->ai_addr->sa_len, ((void*)0), VAR_12,
       VAR_23, VAR_13 * sizeof(char),
       VAR_14 | VAR_15))
    FUNC_4(1, "Cannot get port number");
  }
  if (VAR_36 != 0) {
   FUNC_6(VAR_26->ai_addr);
   FUNC_6(VAR_26);
  } else
   FUNC_7(VAR_26);
  VAR_26 = ((void*)0);
 }
 return (0);
}
