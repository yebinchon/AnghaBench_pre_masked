
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int exit_validity; } ;
struct TYPE_6__ {TYPE_1__* sie_block; } ;
struct kvm_vcpu {int kvm; TYPE_3__ stat; TYPE_2__ arch; } ;
struct TYPE_8__ {int pid; } ;
struct TYPE_5__ {int ipb; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*,int,int ,int ) ;
 int FUNC_1 (int,char*,int) ;
 TYPE_4__* VAR_1 ;
 int FUNC_2 (struct kvm_vcpu*,int) ;

__attribute__((used)) static int FUNC_3(struct kvm_vcpu *VAR_2)
{
 int VAR_3 = VAR_2->arch.sie_block->ipb >> 16;

 VAR_2->stat.exit_validity++;
 FUNC_2(VAR_2, VAR_3);
 FUNC_0(3, "validity intercept 0x%x for pid %u (kvm 0x%pK)", VAR_3,
    VAR_1->pid, VAR_2->kvm);


 FUNC_1(VAR_3 != 0x44, "kvm: unhandled validity intercept 0x%x\n",
    VAR_3);
 return -VAR_0;
}
