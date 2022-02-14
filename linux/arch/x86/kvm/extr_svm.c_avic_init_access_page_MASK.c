
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm_vcpu {struct kvm* kvm; } ;
struct TYPE_2__ {int apic_access_page_done; } ;
struct kvm {int slots_lock; TYPE_1__ arch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct kvm*,int ,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct kvm_vcpu *VAR_3)
{
 struct kvm *VAR_4 = VAR_3->kvm;
 int VAR_5 = 0;

 FUNC_1(&VAR_4->slots_lock);
 if (VAR_4->arch.apic_access_page_done)
  goto out;

 VAR_5 = FUNC_0(VAR_4,
          VAR_0,
          VAR_1,
          VAR_2);
 if (VAR_5)
  goto out;

 VAR_4->arch.apic_access_page_done = 1;
out:
 FUNC_2(&VAR_4->slots_lock);
 return VAR_5;
}
