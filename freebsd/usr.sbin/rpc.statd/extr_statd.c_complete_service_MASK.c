
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netconfig {scalar_t__ nc_semantics; int nc_netid; } ;
struct netbuf {int len; int buf; } ;
struct addrinfo {int ai_addrlen; int ai_addr; int ai_protocol; int ai_socktype; int ai_family; int ai_flags; } ;
struct __rpc_sockinfo {int si_proto; int si_socktype; int si_af; } ;
typedef int SVCXPRT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct netconfig*,struct __rpc_sockinfo*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct addrinfo*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *,char*,struct addrinfo*,struct addrinfo**) ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (struct addrinfo*,int ,int) ;
 int VAR_10 ;
 int FUNC_9 (int ,int ,struct netconfig*,struct netbuf*) ;
 int VAR_11 ;
 int* VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_10 (int *,int ,int ,int ,int *) ;
 int FUNC_11 (int *,int ,int ,int ,int ) ;
 int * FUNC_12 (int,struct netconfig*,int *,int ,int ) ;
 int FUNC_13 (int ,char*,...) ;
 int VAR_15 ;

__attribute__((used)) static void
FUNC_14(struct netconfig *VAR_16, char *VAR_17)
{
 struct addrinfo VAR_18, *VAR_19 = ((void*)0);
 struct __rpc_sockinfo VAR_20;
 struct netbuf VAR_21;
 SVCXPRT *VAR_22 = ((void*)0);
 int VAR_23, VAR_24, VAR_25;
 int VAR_26 = 0;

 if ((VAR_16->nc_semantics != VAR_3) &&
     (VAR_16->nc_semantics != VAR_4) &&
     (VAR_16->nc_semantics != VAR_5))
  return;




 if (!FUNC_0(VAR_16, &VAR_20)) {
  FUNC_13(VAR_1, "cannot get information for %s",
      VAR_16->nc_netid);
  return;
 }

 VAR_25 = VAR_10;
 while (VAR_25 > 0) {
  --VAR_25;
  if (VAR_14 >= VAR_13) {

   FUNC_13(VAR_1, "Ran out of socket fd's");
   return;
  }
  VAR_24 = VAR_12[VAR_14++];
  if (VAR_24 < 0)
   continue;

  if (VAR_16->nc_semantics != VAR_3)
   FUNC_5(VAR_24, VAR_9);

  VAR_22 = FUNC_12(VAR_24, VAR_16, ((void*)0),
  VAR_6, VAR_6);

  if (VAR_22 != (SVCXPRT *) ((void*)0)) {
   if (!FUNC_11(VAR_22, VAR_7, VAR_8,
       VAR_11, 0)) {
    FUNC_13(VAR_1, "can't register on %s",
        VAR_16->nc_netid);
   } else {
    if (!FUNC_10(VAR_22, VAR_7, VAR_8,
        VAR_11, ((void*)0)))
     FUNC_13(VAR_1,
         "can't register %s SM_PROG service",
         VAR_16->nc_netid);
   }
  } else
   FUNC_13(VAR_2, "can't create %s services",
       VAR_16->nc_netid);

  if (VAR_26 == 0) {
   VAR_26 = 1;
   FUNC_8(&VAR_18, 0, sizeof VAR_18);
   VAR_18.ai_flags = VAR_0;
   VAR_18.ai_family = VAR_20.si_af;
   VAR_18.ai_socktype = VAR_20.si_socktype;
   VAR_18.ai_protocol = VAR_20.si_proto;


   if ((VAR_23 = FUNC_4(((void*)0), VAR_17, &VAR_18,
       &VAR_19)) != 0) {
    FUNC_13(VAR_1, "cannot get local address: %s",
        FUNC_3(VAR_23));
    FUNC_1(1);
   }

   VAR_21.buf = FUNC_6(VAR_19->ai_addrlen);
   FUNC_7(VAR_21.buf, VAR_19->ai_addr, VAR_19->ai_addrlen);
   VAR_21.len = VAR_19->ai_addrlen;

   FUNC_9(VAR_7, VAR_8, VAR_16, &VAR_21);

   VAR_15++;
   FUNC_2(VAR_19);
  }
 }
}
