
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ apicv_active; struct kvm_lapic* apic; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
struct kvm_lapic {void* regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int,void*) ;
 scalar_t__ FUNC_1 (struct kvm_lapic*) ;
 int FUNC_2 (struct kvm_lapic*,int ) ;

__attribute__((used)) static bool FUNC_3(struct kvm_vcpu *VAR_4)
{
 struct kvm_lapic *VAR_5 = VAR_4->arch.apic;
 u32 VAR_6 = FUNC_2(VAR_5, VAR_2);

 if (FUNC_1(VAR_5)) {
  int VAR_7 = VAR_6 & VAR_3;
  void *VAR_8 = VAR_5->regs + VAR_1;

  if (VAR_4->arch.apicv_active)
   VAR_8 = VAR_5->regs + VAR_0;

  if (FUNC_0(VAR_7, VAR_8))
   return 1;
 }
 return 0;
}
