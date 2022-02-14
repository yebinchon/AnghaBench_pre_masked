
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct x86_exception {int dummy; } ;
struct kvm_vcpu {int dummy; } ;
typedef int gva_t ;
struct TYPE_2__ {int (* get_cpl ) (struct kvm_vcpu*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,void*,unsigned int,struct kvm_vcpu*,int ,struct x86_exception*) ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (struct x86_exception*,int ,int) ;
 int FUNC_2 (struct kvm_vcpu*) ;

int FUNC_3(struct kvm_vcpu *VAR_2,
          gva_t VAR_3, void *VAR_4, unsigned int VAR_5,
          struct x86_exception *VAR_6)
{
 u32 VAR_7 = (VAR_1->get_cpl(VAR_2) == 3) ? VAR_0 : 0;







 FUNC_1(VAR_6, 0, sizeof(*VAR_6));
 return FUNC_0(VAR_3, VAR_4, VAR_5, VAR_2, VAR_7,
       VAR_6);
}
