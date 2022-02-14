
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct x86_emulate_ctxt {int dummy; } ;
struct kvm_vcpu {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct kvm_vcpu* FUNC_0 (struct x86_emulate_ctxt*) ;
 int FUNC_1 (struct kvm_vcpu*,unsigned long,void*,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct x86_emulate_ctxt *VAR_2,
  unsigned long VAR_3, void *VAR_4, unsigned int VAR_5)
{
 struct kvm_vcpu *VAR_6 = FUNC_0(VAR_2);
 int VAR_7 = FUNC_1(VAR_6, VAR_3, VAR_4, VAR_5);

 return VAR_7 < 0 ? VAR_1 : VAR_0;
}
