
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ nip; } ;
struct TYPE_6__ {int shadow_msr; int shadow_pid; int ivpr; int* ivor; TYPE_2__* shared; TYPE_1__ regs; } ;
struct kvm_vcpu {TYPE_3__ arch; int vcpu_id; } ;
struct TYPE_5__ {scalar_t__ msr; int pir; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (struct kvm_vcpu*) ;
 int FUNC_3 (struct kvm_vcpu*,int,int) ;
 int FUNC_4 (struct kvm_vcpu*,int ) ;

int FUNC_5(struct kvm_vcpu *VAR_4)
{
 int VAR_5;
 int VAR_6;

 VAR_4->arch.regs.nip = 0;
 VAR_4->arch.shared->pir = VAR_4->vcpu_id;
 FUNC_3(VAR_4, 1, (16<<20) - 8);
 FUNC_4(VAR_4, 0);


 VAR_4->arch.shadow_msr = VAR_3 | VAR_2 | VAR_1;
 VAR_4->arch.shadow_pid = 1;
 VAR_4->arch.shared->msr = 0;




 VAR_4->arch.ivpr = 0x55550000;
 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
  VAR_4->arch.ivor[VAR_5] = 0x7700 | VAR_5 * 4;

 FUNC_1(VAR_4);

 VAR_6 = FUNC_0(VAR_4);
 FUNC_2(VAR_4);
 return VAR_6;
}
