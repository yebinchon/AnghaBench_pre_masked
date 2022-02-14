
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* sie_block; } ;
struct TYPE_4__ {int instruction_ri; } ;
struct kvm_vcpu {TYPE_3__ arch; int kvm; TYPE_1__ stat; } ;
struct TYPE_5__ {int ecb3; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct kvm_vcpu*,int,char*,char*) ;
 int FUNC_1 (struct kvm_vcpu*,int ) ;
 int FUNC_2 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_3 (int ,int) ;

__attribute__((used)) static int FUNC_4(struct kvm_vcpu *VAR_2)
{
 VAR_2->stat.instruction_ri++;

 if (FUNC_3(VAR_2->kvm, 64)) {
  FUNC_0(VAR_2, 3, "%s", "ENABLE: RI (lazy)");
  VAR_2->arch.sie_block->ecb3 |= VAR_0;
  FUNC_2(VAR_2);
  return 0;
 } else
  return FUNC_1(VAR_2, VAR_1);
}
