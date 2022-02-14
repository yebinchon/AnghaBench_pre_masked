
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef scalar_t__ u32 ;
typedef int u16 ;
struct x86_emulate_ctxt {int dummy; } ;
struct kvm_vcpu {int dummy; } ;
struct kvm_segment {int base; int limit; int unusable; scalar_t__ padding; int present; int avl; scalar_t__ g; int l; int s; int db; int dpl; int type; int selector; } ;
struct desc_struct {int p; int avl; scalar_t__ g; int l; int s; int d; int dpl; int type; } ;


 struct kvm_vcpu* FUNC_0 (struct x86_emulate_ctxt*) ;
 int FUNC_1 (struct desc_struct*) ;
 int FUNC_2 (struct desc_struct*) ;
 int FUNC_3 (struct kvm_vcpu*,struct kvm_segment*,int) ;

__attribute__((used)) static void FUNC_4(struct x86_emulate_ctxt *VAR_0, u16 VAR_1,
     struct desc_struct *VAR_2, u32 VAR_3,
     int VAR_4)
{
 struct kvm_vcpu *VAR_5 = FUNC_0(VAR_0);
 struct kvm_segment VAR_6;

 VAR_6.selector = VAR_1;
 VAR_6.base = FUNC_1(VAR_2);



 VAR_6.limit = FUNC_2(VAR_2);
 if (VAR_2->g)
  VAR_6.limit = (VAR_6.limit << 12) | 0xfff;
 VAR_6.type = VAR_2->type;
 VAR_6.dpl = VAR_2->dpl;
 VAR_6.db = VAR_2->d;
 VAR_6.s = VAR_2->s;
 VAR_6.l = VAR_2->l;
 VAR_6.g = VAR_2->g;
 VAR_6.avl = VAR_2->avl;
 VAR_6.present = VAR_2->p;
 VAR_6.unusable = !VAR_6.present;
 VAR_6.padding = 0;

 FUNC_3(VAR_5, &VAR_6, VAR_4);
 return;
}
