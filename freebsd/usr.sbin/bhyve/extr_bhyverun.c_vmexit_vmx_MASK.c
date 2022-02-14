
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vmctx {int dummy; } ;
struct TYPE_3__ {int status; int exit_reason; int inst_type; int inst_error; int exit_qualification; } ;
struct TYPE_4__ {TYPE_1__ vmx; } ;
struct vm_exit {int inst_length; TYPE_2__ u; int rip; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_6 ;
 int FUNC_2 (struct vmctx*,int ,int *,int*) ;
 int FUNC_3 (struct vmctx*,int,int ,int *) ;
 char* FUNC_4 (int) ;

__attribute__((used)) static int
FUNC_5(struct vmctx *VAR_7, struct vm_exit *VAR_8, int *VAR_9)
{

 FUNC_1(VAR_6, "vm exit[%d]\n", *VAR_9);
 FUNC_1(VAR_6, "\treason\t\tVMX\n");
 FUNC_1(VAR_6, "\trip\t\t0x%016x\n", VAR_8->rip);
 FUNC_1(VAR_6, "\tinst_length\t%d\n", VAR_8->inst_length);
 FUNC_1(VAR_6, "\tstatus\t\t%d\n", VAR_8->u.vmx.status);
 FUNC_1(VAR_6, "\texit_reason\t%u (%s)\n", VAR_8->u.vmx.exit_reason,
     FUNC_4(VAR_8->u.vmx.exit_reason));
 FUNC_1(VAR_6, "\tqualification\t0x%016x\n",
     VAR_8->u.vmx.exit_qualification);
 FUNC_1(VAR_6, "\tinst_type\t\t%d\n", VAR_8->u.vmx.inst_type);
 FUNC_1(VAR_6, "\tinst_error\t\t%d\n", VAR_8->u.vmx.inst_error);
 return (VAR_2);
}
