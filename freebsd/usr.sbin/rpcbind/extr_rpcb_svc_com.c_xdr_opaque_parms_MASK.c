
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int arglen; int args; } ;
struct r_rmtcall_args {TYPE_1__ rmt_args; } ;
typedef int bool_t ;
typedef int XDR ;


 int FUNC_0 (int *,int ,int ) ;

__attribute__((used)) static bool_t
FUNC_1(XDR *VAR_0, struct r_rmtcall_args *VAR_1)
{
 return (FUNC_0(VAR_0, VAR_1->rmt_args.args, VAR_1->rmt_args.arglen));
}
