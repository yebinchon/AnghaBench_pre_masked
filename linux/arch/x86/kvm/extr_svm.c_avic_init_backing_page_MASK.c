
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_5__ {TYPE_1__* apic; } ;
struct TYPE_6__ {TYPE_2__ arch; } ;
struct vcpu_svm {int * avic_physical_id_cache; int avic_backing_page; TYPE_3__ vcpu; } ;
struct kvm_vcpu {int vcpu_id; } ;
struct TYPE_4__ {int regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int) ;
 int * FUNC_2 (struct kvm_vcpu*,int) ;
 int FUNC_3 (struct kvm_vcpu*) ;
 int FUNC_4 (int ) ;
 struct vcpu_svm* FUNC_5 (struct kvm_vcpu*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct kvm_vcpu *VAR_4)
{
 int VAR_5;
 u64 *VAR_6, VAR_7;
 int VAR_8 = VAR_4->vcpu_id;
 struct vcpu_svm *VAR_9 = FUNC_5(VAR_4);

 VAR_5 = FUNC_3(VAR_4);
 if (VAR_5)
  return VAR_5;

 if (VAR_8 >= VAR_0)
  return -VAR_3;

 if (!VAR_9->vcpu.arch.apic->regs)
  return -VAR_3;

 VAR_9->avic_backing_page = FUNC_6(VAR_9->vcpu.arch.apic->regs);


 VAR_6 = FUNC_2(VAR_4, VAR_8);
 if (!VAR_6)
  return -VAR_3;

 VAR_7 = FUNC_1((FUNC_4(VAR_9->avic_backing_page) &
         VAR_1) |
         VAR_2);
 FUNC_0(*VAR_6, VAR_7);

 VAR_9->avic_physical_id_cache = VAR_6;

 return 0;
}
