
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmcs12 {int virtual_apic_page_addr; int posted_intr_desc_addr; } ;
struct kvm_vcpu {int dummy; } ;
typedef int gfn_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct vmcs12* FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 (struct kvm_vcpu*,int) ;
 scalar_t__ FUNC_2 (struct vmcs12*,int ) ;
 scalar_t__ FUNC_3 (struct vmcs12*) ;

__attribute__((used)) static void FUNC_4(struct kvm_vcpu *VAR_2)
{
 struct vmcs12 *VAR_3 = FUNC_0(VAR_2);
 gfn_t VAR_4;






 if (FUNC_2(VAR_3, VAR_0)) {
  VAR_4 = VAR_3->virtual_apic_page_addr >> VAR_1;
  FUNC_1(VAR_2, VAR_4);
 }

 if (FUNC_3(VAR_3)) {
  VAR_4 = VAR_3->posted_intr_desc_addr >> VAR_1;
  FUNC_1(VAR_2, VAR_4);
 }
}
