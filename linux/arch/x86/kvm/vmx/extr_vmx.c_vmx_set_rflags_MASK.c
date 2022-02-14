
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ulong ;
struct TYPE_4__ {int regs_avail; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
struct TYPE_5__ {unsigned long save_rflags; scalar_t__ vm86_active; } ;
struct TYPE_6__ {unsigned long rflags; int emulation_required; TYPE_2__ rmode; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 TYPE_3__* FUNC_2 (struct kvm_vcpu*) ;
 int FUNC_3 (int ,unsigned long) ;
 unsigned long FUNC_4 (struct kvm_vcpu*) ;

void FUNC_5(struct kvm_vcpu *VAR_4, unsigned long VAR_5)
{
 unsigned long VAR_6 = FUNC_4(VAR_4);

 FUNC_0(VAR_1, (ulong *)&VAR_4->arch.regs_avail);
 FUNC_2(VAR_4)->rflags = VAR_5;
 if (FUNC_2(VAR_4)->rmode.vm86_active) {
  FUNC_2(VAR_4)->rmode.save_rflags = VAR_5;
  VAR_5 |= VAR_2 | VAR_3;
 }
 FUNC_3(VAR_0, VAR_5);

 if ((VAR_6 ^ FUNC_2(VAR_4)->rflags) & VAR_3)
  FUNC_2(VAR_4)->emulation_required = FUNC_1(VAR_4);
}
