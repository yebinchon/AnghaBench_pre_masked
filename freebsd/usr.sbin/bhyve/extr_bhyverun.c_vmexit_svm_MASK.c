
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vmctx {int dummy; } ;
struct TYPE_3__ {int exitcode; int exitinfo1; int exitinfo2; } ;
struct TYPE_4__ {TYPE_1__ svm; } ;
struct vm_exit {int rip; int inst_length; TYPE_2__ u; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_1(struct vmctx *VAR_2, struct vm_exit *VAR_3, int *VAR_4)
{

 FUNC_0(VAR_1, "vm exit[%d]\n", *VAR_4);
 FUNC_0(VAR_1, "\treason\t\tSVM\n");
 FUNC_0(VAR_1, "\trip\t\t0x%016x\n", VAR_3->rip);
 FUNC_0(VAR_1, "\tinst_length\t%d\n", VAR_3->inst_length);
 FUNC_0(VAR_1, "\texitcode\t%#x\n", VAR_3->u.svm.exitcode);
 FUNC_0(VAR_1, "\texitinfo1\t%#x\n", VAR_3->u.svm.exitinfo1);
 FUNC_0(VAR_1, "\texitinfo2\t%#x\n", VAR_3->u.svm.exitinfo2);
 return (VAR_0);
}
