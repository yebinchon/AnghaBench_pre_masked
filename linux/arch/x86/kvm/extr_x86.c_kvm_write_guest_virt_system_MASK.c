
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct x86_exception {int dummy; } ;
struct TYPE_2__ {int l1tf_flush_l1d; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
typedef int gva_t ;


 int VAR_0 ;
 int FUNC_0 (int ,void*,unsigned int,struct kvm_vcpu*,int ,struct x86_exception*) ;
 int FUNC_1 (struct x86_exception*,int ,int) ;

int FUNC_2(struct kvm_vcpu *VAR_1, gva_t VAR_2, void *VAR_3,
    unsigned int VAR_4, struct x86_exception *VAR_5)
{

 VAR_1->arch.l1tf_flush_l1d = 1;







 FUNC_1(VAR_5, 0, sizeof(*VAR_5));
 return FUNC_0(VAR_2, VAR_3, VAR_4, VAR_1,
        VAR_0, VAR_5);
}
