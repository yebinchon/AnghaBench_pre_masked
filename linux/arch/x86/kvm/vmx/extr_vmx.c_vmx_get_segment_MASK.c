
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {struct kvm_segment* segs; scalar_t__ vm86_active; } ;
struct vcpu_vmx {TYPE_1__ rmode; } ;
struct kvm_vcpu {int dummy; } ;
struct kvm_segment {scalar_t__ selector; int unusable; int type; int s; int dpl; int present; int avl; int l; int db; int g; int limit; void* base; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct vcpu_vmx* FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 (struct vcpu_vmx*,int) ;
 void* FUNC_2 (struct vcpu_vmx*,int) ;
 int FUNC_3 (struct vcpu_vmx*,int) ;
 scalar_t__ FUNC_4 (struct vcpu_vmx*,int) ;

void FUNC_5(struct kvm_vcpu *VAR_2, struct kvm_segment *VAR_3, int VAR_4)
{
 struct vcpu_vmx *VAR_5 = FUNC_0(VAR_2);
 u32 VAR_6;

 if (VAR_5->rmode.vm86_active && VAR_4 != VAR_0) {
  *VAR_3 = VAR_5->rmode.segs[VAR_4];
  if (VAR_4 == VAR_1
      || VAR_3->selector == FUNC_4(VAR_5, VAR_4))
   return;
  VAR_3->base = FUNC_2(VAR_5, VAR_4);
  VAR_3->selector = FUNC_4(VAR_5, VAR_4);
  return;
 }
 VAR_3->base = FUNC_2(VAR_5, VAR_4);
 VAR_3->limit = FUNC_3(VAR_5, VAR_4);
 VAR_3->selector = FUNC_4(VAR_5, VAR_4);
 VAR_6 = FUNC_1(VAR_5, VAR_4);
 VAR_3->unusable = (VAR_6 >> 16) & 1;
 VAR_3->type = VAR_6 & 15;
 VAR_3->s = (VAR_6 >> 4) & 1;
 VAR_3->dpl = (VAR_6 >> 5) & 3;







 VAR_3->present = !VAR_3->unusable;
 VAR_3->avl = (VAR_6 >> 12) & 1;
 VAR_3->l = (VAR_6 >> 13) & 1;
 VAR_3->db = (VAR_6 >> 14) & 1;
 VAR_3->g = (VAR_6 >> 15) & 1;
}
