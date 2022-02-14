
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct rpc_err {scalar_t__ re_status; } ;
typedef int CLIENT ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,struct rpc_err*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (char*,int ,int ) ;

__attribute__((used)) static int
FUNC_3(register CLIENT *VAR_1, u_long VAR_2, u_long VAR_3)
{
 struct rpc_err VAR_4;

 FUNC_0(VAR_1, &VAR_4);
 if (VAR_4.re_status != VAR_0) {
  FUNC_1(VAR_1, "rpcinfo");
  FUNC_2("program %lu version %lu is not available\n",
   VAR_2, VAR_3);
  return (-1);
 } else {
  FUNC_2("program %lu version %lu ready and waiting\n",
   VAR_2, VAR_3);
  return (0);
 }
}
