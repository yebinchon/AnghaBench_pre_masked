
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct x86_exception {int dummy; } ;
struct x86_emulate_ctxt {int dummy; } ;
struct kvm_vcpu {int dummy; } ;
typedef int gva_t ;
struct TYPE_2__ {int (* get_cpl ) (struct kvm_vcpu*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 struct kvm_vcpu* FUNC_0 (struct x86_emulate_ctxt*) ;
 int FUNC_1 (int ,void*,unsigned int,struct kvm_vcpu*,int ,struct x86_exception*) ;
 TYPE_1__* VAR_2 ;
 int FUNC_2 (struct kvm_vcpu*) ;

__attribute__((used)) static int FUNC_3(struct x86_emulate_ctxt *VAR_3, gva_t VAR_4, void *VAR_5,
         unsigned int VAR_6, struct x86_exception *VAR_7,
         bool VAR_8)
{
 struct kvm_vcpu *VAR_9 = FUNC_0(VAR_3);
 u32 VAR_10 = VAR_1;

 if (!VAR_8 && VAR_2->get_cpl(VAR_9) == 3)
  VAR_10 |= VAR_0;

 return FUNC_1(VAR_4, VAR_5, VAR_6, VAR_9,
        VAR_10, VAR_7);
}
