
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
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct netconfig*) ;
 int FUNC_1 (struct netconfig*,struct __rpc_sockinfo*) ;
 int FUNC_2 (int,struct sockaddr*) ;
 int FUNC_3 (int) ;
 scalar_t__ VAR_12 ;
 int FUNC_4 (int,char*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct sockaddr*) ;
 int FUNC_7 (struct sockaddr*) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int *,int *,struct sockaddr*,struct sockaddr**) ;
 scalar_t__ FUNC_10 (struct sockaddr*,int ,int *,int ,int *,int,int) ;
 int ** VAR_13 ;
 int FUNC_11 (int ) ;
 void* FUNC_12 (int ) ;
 int VAR_14 ;
 int FUNC_13 (int const,int *,int *) ;
 void* FUNC_14 (int) ;
 int VAR_15 ;
 int FUNC_15 (struct sockaddr*,int ,int) ;
 int VAR_16 ;
 int FUNC_16 () ;
 int* FUNC_17 (int*,int) ;
 int* VAR_17 ;
 int VAR_18 ;
 scalar_t__ FUNC_18 (char*,int *) ;
 int * VAR_19 ;
 int FUNC_19 (int ,char*,...) ;

__attribute__((used)) static int
FUNC_20(struct netconfig *VAR_20)
{
 struct addrinfo VAR_21, *VAR_22 = ((void*)0);
 struct sockaddr_in *VAR_23;
 struct sockaddr_in6 *VAR_24;
 struct __rpc_sockinfo VAR_25;
 int VAR_26;
 int VAR_27;
 int VAR_28;
 int VAR_29;
 u_int32_t VAR_30[4];
 int VAR_31;

 if ((VAR_20->nc_semantics != VAR_5) &&
     (VAR_20->nc_semantics != VAR_6) &&
     (VAR_20->nc_semantics != VAR_7))
  return (1);




 if (!FUNC_1(VAR_20, &VAR_25)) {
  FUNC_19(VAR_4, "cannot get information for %s",
      VAR_20->nc_netid);
  return (1);
 }


 FUNC_15(&VAR_21, 0, sizeof VAR_21);
 VAR_21.ai_family = VAR_25.si_af;
 VAR_21.ai_socktype = VAR_25.si_socktype;
 VAR_21.ai_protocol = VAR_25.si_proto;




 VAR_28 = VAR_16;
 while (VAR_28 > 0) {
  --VAR_28;
  VAR_17 = FUNC_17(VAR_17, (VAR_18 + 1) * sizeof(int));
  if (VAR_17 == ((void*)0))
   FUNC_16();
  VAR_17[VAR_18++] = -1;
  VAR_31 = 0;
  VAR_21.ai_flags = VAR_1;




  if ((VAR_27 = FUNC_0(VAR_20)) < 0) {
   FUNC_19(VAR_4, "cannot create socket for %s",
       VAR_20->nc_netid);
   continue;
  }
  switch (VAR_21.ai_family) {
  case 129:
   if (FUNC_13(129, VAR_13[VAR_28],
       VAR_30) == 1) {
    VAR_21.ai_flags |= VAR_0;
   } else {



    if (FUNC_13(128, VAR_13[VAR_28],
        VAR_30) == 1) {
     FUNC_3(VAR_27);
     continue;
    }
   }
   break;
  case 128:
   if (FUNC_13(128, VAR_13[VAR_28],
       VAR_30) == 1) {
    VAR_21.ai_flags |= VAR_0;
   } else {



    if (FUNC_13(129, VAR_13[VAR_28],
        VAR_30) == 1) {
     FUNC_3(VAR_27);
     continue;
    }
   }
   break;
  default:
   break;
  }




  if (FUNC_18("*", VAR_13[VAR_28]) == 0) {
   if (VAR_19 == ((void*)0)) {
    VAR_22 = FUNC_14(sizeof(struct addrinfo));
    if (VAR_22 == ((void*)0))
     FUNC_16();
    VAR_31 = 1;
    VAR_22->ai_flags = VAR_21.ai_flags;
    VAR_22->ai_family = VAR_21.ai_family;
    VAR_22->ai_protocol = VAR_21.ai_protocol;
    switch (VAR_22->ai_family) {
    case 129:
     VAR_23 = FUNC_14(sizeof(struct sockaddr_in));
     if (VAR_23 == ((void*)0))
      FUNC_16();
     VAR_23->sin_family = 129;
     VAR_23->sin_port = FUNC_12(0);
     VAR_23->sin_addr.s_addr = FUNC_11(VAR_3);
     VAR_22->ai_addr = (struct sockaddr*) VAR_23;
     VAR_22->ai_addrlen = (socklen_t)
         sizeof(struct sockaddr_in);
     break;
    case 128:
     VAR_24 = FUNC_14(sizeof(struct sockaddr_in6));
     if (VAR_24 == ((void*)0))
      FUNC_16();
     VAR_24->sin6_family = 128;
     VAR_24->sin6_port = FUNC_12(0);
     VAR_24->sin6_addr = VAR_14;
     VAR_22->ai_addr = (struct sockaddr*) VAR_24;
     VAR_22->ai_addrlen = (socklen_t)
         sizeof(struct sockaddr_in6);
     break;
    default:
     FUNC_19(VAR_4, "bad addr fam %d",
         VAR_22->ai_family);
     FUNC_5(1);
    }
   } else {
    if ((VAR_26 = FUNC_9(((void*)0), VAR_19,
        &VAR_21, &VAR_22)) != 0) {
     FUNC_19(VAR_4,
         "cannot get local address for %s: %s",
         VAR_20->nc_netid,
         FUNC_8(VAR_26));
     FUNC_3(VAR_27);
     continue;
    }
   }
  } else {
   if ((VAR_26 = FUNC_9(VAR_13[VAR_28], VAR_19,
       &VAR_21, &VAR_22)) != 0) {
    FUNC_19(VAR_4,
        "cannot get local address for %s: %s",
        VAR_20->nc_netid, FUNC_8(VAR_26));
    FUNC_3(VAR_27);
    continue;
   }
  }


  VAR_17[VAR_18 - 1] = VAR_27;


  VAR_29 = FUNC_2(VAR_27, VAR_22->ai_addr);
  if (VAR_29 != 0) {
   if (VAR_12 == VAR_2 && VAR_15 != 0) {
    if (VAR_31 != 0) {
     FUNC_6(VAR_22->ai_addr);
     FUNC_6(VAR_22);
    } else
     FUNC_7(VAR_22);
    return (-1);
   }
   FUNC_19(VAR_4, "bindresvport_sa: %m");
   FUNC_5(1);
  }

  if (VAR_19 == ((void*)0)) {
   VAR_19 = FUNC_14(VAR_9 * sizeof(char));
   if (VAR_19 == ((void*)0))
    FUNC_16();
   VAR_15 = 1;

   if (FUNC_10(VAR_22->ai_addr,
       VAR_22->ai_addr->sa_len, ((void*)0), VAR_8,
       VAR_19, VAR_9 * sizeof(char),
       VAR_10 | VAR_11))
    FUNC_4(1, "Cannot get port number");
  }
  if (VAR_31 != 0) {
   FUNC_6(VAR_22->ai_addr);
   FUNC_6(VAR_22);
  } else
   FUNC_7(VAR_22);
  VAR_22 = ((void*)0);
 }
 return (0);
}
