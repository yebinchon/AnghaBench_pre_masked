
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct rpc_err {int dummy; } ;
struct rc_data {struct rpc_err rc_err; } ;
struct TYPE_3__ {scalar_t__ cl_private; } ;
typedef TYPE_1__ CLIENT ;



__attribute__((used)) static void
FUNC_0(CLIENT *VAR_0, struct rpc_err *VAR_1)
{
 struct rc_data *VAR_2 = (struct rc_data *)VAR_0->cl_private;

 *VAR_1 = VAR_2->rc_err;
}
