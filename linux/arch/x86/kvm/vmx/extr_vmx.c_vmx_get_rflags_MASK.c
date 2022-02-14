
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ulong ;
struct TYPE_5__ {int regs_avail; } ;
struct kvm_vcpu {TYPE_2__ arch; } ;
struct TYPE_4__ {unsigned long save_rflags; scalar_t__ vm86_active; } ;
struct TYPE_6__ {unsigned long rflags; TYPE_1__ rmode; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *) ;
 TYPE_3__* FUNC_2 (struct kvm_vcpu*) ;
 unsigned long FUNC_3 (int ) ;

unsigned long FUNC_4(struct kvm_vcpu *VAR_3)
{
 unsigned long VAR_4, VAR_5;

 if (!FUNC_1(VAR_2, (ulong *)&VAR_3->arch.regs_avail)) {
  FUNC_0(VAR_2, (ulong *)&VAR_3->arch.regs_avail);
  VAR_4 = FUNC_3(VAR_0);
  if (FUNC_2(VAR_3)->rmode.vm86_active) {
   VAR_4 &= VAR_1;
   VAR_5 = FUNC_2(VAR_3)->rmode.save_rflags;
   VAR_4 |= VAR_5 & ~VAR_1;
  }
  FUNC_2(VAR_3)->rflags = VAR_4;
 }
 return FUNC_2(VAR_3)->rflags;
}
