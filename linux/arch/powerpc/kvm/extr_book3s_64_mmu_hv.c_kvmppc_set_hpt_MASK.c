
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm_hpt_info {int order; int virt; } ;
struct TYPE_2__ {int sdr1; int lpid; struct kvm_hpt_info hpt; int mmio_update; } ;
struct kvm {TYPE_1__ arch; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (char*,int ,long,int ) ;

void FUNC_3(struct kvm *VAR_0, struct kvm_hpt_info *VAR_1)
{
 FUNC_1(&VAR_0->arch.mmio_update, 0);
 VAR_0->arch.hpt = *VAR_1;
 VAR_0->arch.sdr1 = FUNC_0(VAR_1->virt) | (VAR_1->order - 18);

 FUNC_2("KVM guest htab at %lx (order %ld), LPID %x\n",
   VAR_1->virt, (long)VAR_1->order, VAR_0->arch.lpid);
}
