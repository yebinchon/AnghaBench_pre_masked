
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_11__ {int event_exit_inst_len; } ;
struct TYPE_12__ {TYPE_5__ arch; } ;
struct TYPE_8__ {scalar_t__ vm86_active; } ;
struct vcpu_vmx {TYPE_6__ vcpu; TYPE_2__ rmode; } ;
struct TYPE_9__ {int nr; scalar_t__ soft; } ;
struct TYPE_10__ {int event_exit_inst_len; TYPE_3__ interrupt; } ;
struct TYPE_7__ {int irq_injections; } ;
struct kvm_vcpu {TYPE_4__ arch; TYPE_1__ stat; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct kvm_vcpu*,int,int) ;
 struct vcpu_vmx* FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (struct kvm_vcpu*) ;

__attribute__((used)) static void FUNC_5(struct kvm_vcpu *VAR_5)
{
 struct vcpu_vmx *VAR_6 = FUNC_1(VAR_5);
 uint32_t VAR_7;
 int VAR_8 = VAR_5->arch.interrupt.nr;

 FUNC_2(VAR_8);

 ++VAR_5->stat.irq_injections;
 if (VAR_6->rmode.vm86_active) {
  int VAR_9 = 0;
  if (VAR_5->arch.interrupt.soft)
   VAR_9 = VAR_5->arch.event_exit_inst_len;
  FUNC_0(VAR_5, VAR_8, VAR_9);
  return;
 }
 VAR_7 = VAR_8 | VAR_0;
 if (VAR_5->arch.interrupt.soft) {
  VAR_7 |= VAR_2;
  FUNC_3(VAR_3,
        VAR_6->vcpu.arch.event_exit_inst_len);
 } else
  VAR_7 |= VAR_1;
 FUNC_3(VAR_4, VAR_7);

 FUNC_4(VAR_5);
}
