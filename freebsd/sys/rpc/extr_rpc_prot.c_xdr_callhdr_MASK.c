
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int cb_vers; int cb_prog; int cb_rpcvers; } ;
struct rpc_msg {int rm_direction; TYPE_1__ rm_call; int rm_xid; } ;
typedef int enum_t ;
typedef enum msg_type { ____Placeholder_msg_type } msg_type ;
typedef scalar_t__ bool_t ;
struct TYPE_7__ {scalar_t__ x_op; } ;
typedef TYPE_2__ XDR ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (TYPE_2__*,int *) ;
 scalar_t__ FUNC_2 (TYPE_2__*,int *) ;

bool_t
FUNC_3(XDR *VAR_4, struct rpc_msg *VAR_5)
{
 enum msg_type *VAR_6;

 FUNC_0(VAR_4 != ((void*)0));
 FUNC_0(VAR_5 != ((void*)0));

 VAR_6 = &VAR_5->rm_direction;

 VAR_5->rm_direction = VAR_0;
 VAR_5->rm_call.cb_rpcvers = VAR_2;
 if (
     (VAR_4->x_op == VAR_3) &&
     FUNC_2(VAR_4, &(VAR_5->rm_xid)) &&
     FUNC_1(VAR_4, (enum_t *) VAR_6) &&
     FUNC_2(VAR_4, &(VAR_5->rm_call.cb_rpcvers)) &&
     FUNC_2(VAR_4, &(VAR_5->rm_call.cb_prog)) )
  return (FUNC_2(VAR_4, &(VAR_5->rm_call.cb_vers)));
 return (VAR_1);
}
