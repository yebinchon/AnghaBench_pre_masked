
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct kvm_segment* segs; scalar_t__ vm86_active; } ;
struct vcpu_vmx {int emulation_required; TYPE_1__ rmode; } ;
struct kvm_vmx_segment_field {int ar_bytes; int selector; int limit; int base; } ;
struct kvm_vcpu {int dummy; } ;
struct kvm_segment {int type; int selector; int limit; int base; scalar_t__ s; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct kvm_vcpu*) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int,struct kvm_segment*) ;
 struct kvm_vmx_segment_field* VAR_3 ;
 struct vcpu_vmx* FUNC_2 (struct kvm_vcpu*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (struct kvm_segment*) ;
 int FUNC_7 (struct vcpu_vmx*) ;

void FUNC_8(struct kvm_vcpu *VAR_4, struct kvm_segment *VAR_5, int VAR_6)
{
 struct vcpu_vmx *VAR_7 = FUNC_2(VAR_4);
 const struct kvm_vmx_segment_field *VAR_8 = &VAR_3[VAR_6];

 FUNC_7(VAR_7);

 if (VAR_7->rmode.vm86_active && VAR_6 != VAR_0) {
  VAR_7->rmode.segs[VAR_6] = *VAR_5;
  if (VAR_6 == VAR_1)
   FUNC_3(VAR_8->selector, VAR_5->selector);
  else if (VAR_5->s)
   FUNC_1(VAR_6, &VAR_7->rmode.segs[VAR_6]);
  goto out;
 }

 FUNC_5(VAR_8->base, VAR_5->base);
 FUNC_4(VAR_8->limit, VAR_5->limit);
 FUNC_3(VAR_8->selector, VAR_5->selector);
 if (VAR_2 && (VAR_6 != VAR_0))
  VAR_5->type |= 0x1;

 FUNC_4(VAR_8->ar_bytes, FUNC_6(VAR_5));

out:
 VAR_7->emulation_required = FUNC_0(VAR_4);
}
