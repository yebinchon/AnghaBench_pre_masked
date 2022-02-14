
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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (struct netconfig*,struct __rpc_sockinfo*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct addrinfo*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *,char*,struct addrinfo*,struct addrinfo**) ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (struct addrinfo*,int ,int) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_9 (int ,int ,struct netconfig*,struct netbuf*) ;
 int* VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 int FUNC_10 (int *,int ,int ,int ,int *) ;
 int * FUNC_11 (int,struct netconfig*,int *,int ,int ) ;
 int FUNC_12 (int ,char*,...) ;
 int VAR_21 ;

__attribute__((used)) static void
FUNC_13(struct netconfig *VAR_22, char *VAR_23)
{
 struct addrinfo VAR_24, *VAR_25 = ((void*)0);
 struct __rpc_sockinfo VAR_26;
 struct netbuf VAR_27;
 SVCXPRT *VAR_28 = ((void*)0);
 int VAR_29, VAR_30, VAR_31;
 int VAR_32 = 0;

 if ((VAR_22->nc_semantics != VAR_3) &&
     (VAR_22->nc_semantics != VAR_4) &&
     (VAR_22->nc_semantics != VAR_5))
  return;




 if (!FUNC_0(VAR_22, &VAR_26)) {
  FUNC_12(VAR_1, "cannot get information for %s",
      VAR_22->nc_netid);
  return;
 }

 VAR_31 = VAR_13;
 while (VAR_31 > 0) {
  --VAR_31;
  if (VAR_20 >= VAR_19) {

   FUNC_12(VAR_1, "Ran out of socket fd's");
   return;
  }
  VAR_30 = VAR_18[VAR_20++];
  if (VAR_30 < 0)
   continue;

  if (VAR_22->nc_semantics != VAR_3)
      FUNC_5(VAR_30, VAR_12);

  VAR_28 = FUNC_11(VAR_30, VAR_22, ((void*)0),
      VAR_11, VAR_11);

  if (VAR_28 != (SVCXPRT *) ((void*)0)) {
   if (!FUNC_10(VAR_28, VAR_6, VAR_7, VAR_14,
       ((void*)0)))
    FUNC_12(VAR_1,
        "can't register %s NLM_PROG, NLM_SM service",
        VAR_22->nc_netid);

   if (!FUNC_10(VAR_28, VAR_6, VAR_8, VAR_15,
       ((void*)0)))
    FUNC_12(VAR_1,
        "can't register %s NLM_PROG, NLM_VERS service",
        VAR_22->nc_netid);

   if (!FUNC_10(VAR_28, VAR_6, VAR_10, VAR_16,
       ((void*)0)))
    FUNC_12(VAR_1,
        "can't register %s NLM_PROG, NLM_VERSX service",
        VAR_22->nc_netid);

   if (!FUNC_10(VAR_28, VAR_6, VAR_9, VAR_17,
       ((void*)0)))
    FUNC_12(VAR_1,
        "can't register %s NLM_PROG, NLM_VERS4 service",
        VAR_22->nc_netid);

  } else
   FUNC_12(VAR_2, "can't create %s services",
       VAR_22->nc_netid);

  if (VAR_32 == 0) {
   VAR_32 = 1;
   FUNC_8(&VAR_24, 0, sizeof VAR_24);
   VAR_24.ai_flags = VAR_0;
   VAR_24.ai_family = VAR_26.si_af;
   VAR_24.ai_socktype = VAR_26.si_socktype;
   VAR_24.ai_protocol = VAR_26.si_proto;

   if ((VAR_29 = FUNC_4(((void*)0), VAR_23, &VAR_24,
       &VAR_25)) != 0) {
    FUNC_12(VAR_1, "cannot get local address: %s",
        FUNC_3(VAR_29));
    FUNC_1(1);
   }

   VAR_27.buf = FUNC_6(VAR_25->ai_addrlen);
   FUNC_7(VAR_27.buf, VAR_25->ai_addr, VAR_25->ai_addrlen);
   VAR_27.len = VAR_25->ai_addrlen;

   FUNC_9(VAR_6, VAR_7, VAR_22, &VAR_27);
   FUNC_9(VAR_6, VAR_8, VAR_22, &VAR_27);
   FUNC_9(VAR_6, VAR_10, VAR_22, &VAR_27);
   FUNC_9(VAR_6, VAR_9, VAR_22, &VAR_27);

   VAR_21++;
   FUNC_2(VAR_25);
  }
 }
}
