
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xdrproc_t ;
struct timeval {int dummy; } ;
struct rpc_callextra {int dummy; } ;
typedef int nlm4_notify ;
typedef enum clnt_stat { ____Placeholder_clnt_stat } clnt_stat ;
typedef int caddr_t ;
typedef int CLIENT ;


 int FUNC_0 (int *,struct rpc_callextra*,int ,int ,int ,int ,int ,struct timeval) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

enum clnt_stat
FUNC_1(nlm4_notify *VAR_3, void *VAR_4, CLIENT *VAR_5, struct rpc_callextra *VAR_6, struct timeval VAR_7)
{
 return (FUNC_0(VAR_5, VAR_6, VAR_0,
  (xdrproc_t) VAR_1, (caddr_t) VAR_3,
  (xdrproc_t) VAR_2, (caddr_t) VAR_4,
  VAR_7));
}
