
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_req {int rq_verf; } ;
struct rpc_msg {int dummy; } ;
typedef enum auth_stat { ____Placeholder_auth_stat } auth_stat ;


 int VAR_0 ;
 int VAR_1 ;

enum auth_stat
FUNC_0(struct svc_req *VAR_2, struct rpc_msg *VAR_3)
{

 VAR_2->rq_verf = VAR_1;
 return (VAR_0);
}
