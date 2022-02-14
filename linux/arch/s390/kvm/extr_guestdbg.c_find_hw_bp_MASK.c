
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int nr_hw_bp; struct kvm_hw_bp_info_arch* hw_bp_info; } ;
struct TYPE_3__ {TYPE_2__ guestdbg; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
struct kvm_hw_bp_info_arch {unsigned long addr; scalar_t__ len; } ;


 int FUNC_0 (struct kvm_hw_bp_info_arch*) ;
 scalar_t__ FUNC_1 (unsigned long,unsigned long,int ) ;

__attribute__((used)) static struct kvm_hw_bp_info_arch *FUNC_2(struct kvm_vcpu *VAR_0,
           unsigned long VAR_1)
{
 struct kvm_hw_bp_info_arch *VAR_2 = VAR_0->arch.guestdbg.hw_bp_info;
 int VAR_3;

 if (VAR_0->arch.guestdbg.nr_hw_bp == 0)
  return ((void*)0);

 for (VAR_3 = 0; VAR_3 < VAR_0->arch.guestdbg.nr_hw_bp; VAR_3++) {

  if (VAR_1 == VAR_2->addr)
   goto found;
  if (VAR_2->len > 0 &&
      FUNC_1(VAR_1, VAR_2->addr, FUNC_0(VAR_2)))
   goto found;

  VAR_2++;
 }

 return ((void*)0);
found:
 return VAR_2;
}
