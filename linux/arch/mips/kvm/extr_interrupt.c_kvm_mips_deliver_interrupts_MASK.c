
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {unsigned long pending_exceptions; unsigned long pending_exceptions_clr; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
struct TYPE_4__ {scalar_t__ (* irq_deliver ) (struct kvm_vcpu*,unsigned int,int ) ;scalar_t__ (* irq_clear ) (struct kvm_vcpu*,unsigned int,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int FUNC_0 (unsigned long) ;
 unsigned int FUNC_1 (unsigned long*,int,unsigned int) ;
 TYPE_2__* VAR_4 ;
 scalar_t__ FUNC_2 (struct kvm_vcpu*,unsigned int,int ) ;
 scalar_t__ FUNC_3 (struct kvm_vcpu*,unsigned int,int ) ;

void FUNC_4(struct kvm_vcpu *VAR_5, u32 VAR_6)
{
 unsigned long *VAR_7 = &VAR_5->arch.pending_exceptions;
 unsigned long *VAR_8 = &VAR_5->arch.pending_exceptions_clr;
 unsigned int VAR_9;

 if (!(*VAR_7) && !(*VAR_8))
  return;

 VAR_9 = FUNC_0(*VAR_8);
 while (VAR_9 <= VAR_3) {
  if (VAR_4->irq_clear(VAR_5, VAR_9, VAR_6)) {
   if (!VAR_1)
    break;
  }

  VAR_9 = FUNC_1(VAR_8,
      VAR_0 * sizeof(*VAR_8),
      VAR_9 + 1);
 }

 VAR_9 = FUNC_0(*VAR_7);
 while (VAR_9 <= VAR_3) {
  if (VAR_4->irq_deliver(VAR_5, VAR_9, VAR_6)) {
   if (!VAR_2)
    break;
  }

  VAR_9 = FUNC_1(VAR_7,
      VAR_0 * sizeof(*VAR_7),
      VAR_9 + 1);
 }

}
