
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct vcpu_svm {TYPE_2__* vmcb; int vcpu; } ;
struct TYPE_3__ {int insn_len; int * insn_bytes; int exit_info_1; int exit_info_2; } ;
struct TYPE_4__ {TYPE_1__ control; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int ,int *,int ) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct vcpu_svm *VAR_1)
{
 u64 VAR_2 = FUNC_0(VAR_1->vmcb->control.exit_info_2);
 u64 VAR_3 = VAR_1->vmcb->control.exit_info_1;

 return FUNC_1(&VAR_1->vcpu, VAR_3, VAR_2,
   FUNC_2(VAR_0) ?
   VAR_1->vmcb->control.insn_bytes : ((void*)0),
   VAR_1->vmcb->control.insn_len);
}
