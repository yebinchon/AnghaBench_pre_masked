
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
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct netconfig*,struct __rpc_sockinfo*) ;
 int FUNC_1 (int) ;
 int VAR_10 ;
 int FUNC_2 (struct addrinfo*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *,char*,struct addrinfo*,struct addrinfo**) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (struct addrinfo*,int ,int) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_9 (int ,int ,struct netconfig*,struct netbuf*) ;
 int* VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int * FUNC_10 (int,int ,int ) ;
 int FUNC_11 (int *,int ,int ,int ,int *) ;
 int * FUNC_12 (int,int ,int ) ;
 int FUNC_13 (int ,char*,...) ;
 int VAR_16 ;

__attribute__((used)) static void
FUNC_14(struct netconfig *VAR_17, char *VAR_18)
{
 struct addrinfo VAR_19, *VAR_20 = ((void*)0);
 struct __rpc_sockinfo VAR_21;
 struct netbuf VAR_22;
 SVCXPRT *VAR_23 = ((void*)0);
 int VAR_24, VAR_25, VAR_26;
 int VAR_27 = 0;

 if ((VAR_17->nc_semantics != VAR_6) &&
     (VAR_17->nc_semantics != VAR_7) &&
     (VAR_17->nc_semantics != VAR_8))
  return;




 if (!FUNC_0(VAR_17, &VAR_21)) {
  FUNC_13(VAR_1, "cannot get information for %s",
      VAR_17->nc_netid);
  return;
 }

 VAR_26 = VAR_12;
 while (VAR_26 > 0) {
  --VAR_26;
  if (VAR_15 >= VAR_14) {

   FUNC_13(VAR_1, "Ran out of socket fd's");
   return;
  }
  VAR_25 = VAR_13[VAR_15++];
  if (VAR_25 < 0)
   continue;





  if (VAR_17->nc_semantics != VAR_6)
   FUNC_5(VAR_25, -1);

  if (VAR_17->nc_semantics == VAR_6 )
   VAR_23 = FUNC_10(VAR_25, 0, 0);
  else
   VAR_23 = FUNC_12(VAR_25, VAR_9,
       VAR_9);

  if (VAR_23 != (SVCXPRT *) ((void*)0)) {
   if (!FUNC_11(VAR_23, VAR_3, VAR_4, VAR_11,
       ((void*)0)))
    FUNC_13(VAR_1,
        "can't register %s MOUNTVERS service",
        VAR_17->nc_netid);
   if (!VAR_10) {
    if (!FUNC_11(VAR_23, VAR_3, VAR_5,
        VAR_11, ((void*)0)))
     FUNC_13(VAR_1,
         "can't register %s MOUNTVERS3 service",
         VAR_17->nc_netid);
   }
  } else
   FUNC_13(VAR_2, "can't create %s services",
       VAR_17->nc_netid);

  if (VAR_27 == 0) {
   VAR_27 = 1;
   FUNC_8(&VAR_19, 0, sizeof VAR_19);
   VAR_19.ai_flags = VAR_0;
   VAR_19.ai_family = VAR_21.si_af;
   VAR_19.ai_socktype = VAR_21.si_socktype;
   VAR_19.ai_protocol = VAR_21.si_proto;

   if ((VAR_24 = FUNC_4(((void*)0), VAR_18, &VAR_19,
       &VAR_20)) != 0) {
    FUNC_13(VAR_1, "cannot get local address: %s",
        FUNC_3(VAR_24));
    FUNC_1(1);
   }

   VAR_22.buf = FUNC_6(VAR_20->ai_addrlen);
   FUNC_7(VAR_22.buf, VAR_20->ai_addr, VAR_20->ai_addrlen);
   VAR_22.len = VAR_20->ai_addrlen;

   FUNC_9(VAR_3, VAR_4, VAR_17, &VAR_22);
   FUNC_9(VAR_3, VAR_5, VAR_17, &VAR_22);

   VAR_16++;
   FUNC_2(VAR_20);
  }
 }
}
