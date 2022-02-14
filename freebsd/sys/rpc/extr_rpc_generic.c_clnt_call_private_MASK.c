
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int (* xdrproc_t ) (int *,void*) ;
struct timeval {int dummy; } ;
struct rpc_callextra {int dummy; } ;
struct mbuf {int dummy; } ;
typedef int rpcproc_t ;
typedef enum clnt_stat { ____Placeholder_clnt_stat } clnt_stat ;
typedef int XDR ;
typedef int CLIENT ;


 int FUNC_0 (int *,struct rpc_callextra*,int ,struct mbuf*,struct mbuf**,struct timeval) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 int VAR_6 ;
 int FUNC_2 (struct mbuf*) ;
 struct mbuf* FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int *,struct mbuf*,int ) ;

enum clnt_stat
FUNC_5(
 CLIENT *VAR_7,
 struct rpc_callextra *VAR_8,
 rpcproc_t VAR_9,
 xdrproc_t VAR_10,
 void *VAR_11,
 xdrproc_t VAR_12,
 void *VAR_13,
 struct timeval VAR_14)
{
 XDR VAR_15;
 struct mbuf *VAR_16;
 struct mbuf *VAR_17;
 enum clnt_stat VAR_18;

 VAR_16 = FUNC_3(VAR_1, VAR_0, 0);

 FUNC_4(&VAR_15, VAR_16, VAR_6);
 if (!VAR_10(&VAR_15, VAR_11)) {
  FUNC_2(VAR_16);
  return (VAR_3);
 }
 FUNC_1(&VAR_15);

 VAR_18 = FUNC_0(VAR_7, VAR_8, VAR_9, VAR_16, &VAR_17, VAR_14);
 FUNC_2(VAR_16);

 if (VAR_18 == VAR_4) {
  FUNC_4(&VAR_15, VAR_17, VAR_5);
  if (!VAR_12(&VAR_15, VAR_13)) {
   FUNC_1(&VAR_15);
   return (VAR_2);
  }
  FUNC_1(&VAR_15);
 }

 return (VAR_18);
}
