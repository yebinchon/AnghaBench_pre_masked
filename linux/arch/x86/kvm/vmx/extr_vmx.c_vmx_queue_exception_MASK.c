
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef unsigned int u32 ;
struct TYPE_9__ {unsigned int event_exit_inst_len; } ;
struct TYPE_10__ {TYPE_4__ arch; } ;
struct TYPE_7__ {scalar_t__ vm86_active; } ;
struct vcpu_vmx {TYPE_5__ vcpu; int emulation_required; TYPE_2__ rmode; } ;
struct TYPE_6__ {unsigned int nr; int has_error_code; unsigned int error_code; } ;
struct TYPE_8__ {int event_exit_inst_len; TYPE_1__ exception; } ;
struct kvm_vcpu {TYPE_3__ arch; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_2 (unsigned int) ;
 int FUNC_3 (struct kvm_vcpu*,unsigned int,int) ;
 struct vcpu_vmx* FUNC_4 (struct kvm_vcpu*) ;
 int FUNC_5 (int ,unsigned int) ;
 int FUNC_6 (struct kvm_vcpu*) ;

__attribute__((used)) static void FUNC_7(struct kvm_vcpu *VAR_7)
{
 struct vcpu_vmx *VAR_8 = FUNC_4(VAR_7);
 unsigned VAR_9 = VAR_7->arch.exception.nr;
 bool VAR_10 = VAR_7->arch.exception.has_error_code;
 u32 VAR_11 = VAR_7->arch.exception.error_code;
 u32 VAR_12 = VAR_9 | VAR_1;

 FUNC_1(VAR_7);

 if (VAR_10) {
  FUNC_5(VAR_4, VAR_11);
  VAR_12 |= VAR_0;
 }

 if (VAR_8->rmode.vm86_active) {
  int VAR_13 = 0;
  if (FUNC_2(VAR_9))
   VAR_13 = VAR_7->arch.event_exit_inst_len;
  FUNC_3(VAR_7, VAR_9, VAR_13);
  return;
 }

 FUNC_0(VAR_8->emulation_required);

 if (FUNC_2(VAR_9)) {
  FUNC_5(VAR_5,
        VAR_8->vcpu.arch.event_exit_inst_len);
  VAR_12 |= VAR_3;
 } else
  VAR_12 |= VAR_2;

 FUNC_5(VAR_6, VAR_12);

 FUNC_6(VAR_7);
}
