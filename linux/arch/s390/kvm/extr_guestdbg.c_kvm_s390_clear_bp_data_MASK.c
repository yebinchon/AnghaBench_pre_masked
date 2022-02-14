
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nr_hw_wp; scalar_t__ nr_hw_bp; struct kvm_hw_wp_info_arch* hw_bp_info; struct kvm_hw_wp_info_arch* hw_wp_info; } ;
struct TYPE_4__ {TYPE_1__ guestdbg; } ;
struct kvm_vcpu {TYPE_2__ arch; } ;
struct kvm_hw_wp_info_arch {struct kvm_hw_wp_info_arch* old_data; } ;


 int FUNC_0 (struct kvm_hw_wp_info_arch*) ;

void FUNC_1(struct kvm_vcpu *VAR_0)
{
 int VAR_1;
 struct kvm_hw_wp_info_arch *VAR_2 = ((void*)0);

 for (VAR_1 = 0; VAR_1 < VAR_0->arch.guestdbg.nr_hw_wp; VAR_1++) {
  VAR_2 = &VAR_0->arch.guestdbg.hw_wp_info[VAR_1];
  FUNC_0(VAR_2->old_data);
  VAR_2->old_data = ((void*)0);
 }
 FUNC_0(VAR_0->arch.guestdbg.hw_wp_info);
 VAR_0->arch.guestdbg.hw_wp_info = ((void*)0);

 FUNC_0(VAR_0->arch.guestdbg.hw_bp_info);
 VAR_0->arch.guestdbg.hw_bp_info = ((void*)0);

 VAR_0->arch.guestdbg.nr_hw_wp = 0;
 VAR_0->arch.guestdbg.nr_hw_bp = 0;
}
