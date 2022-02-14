
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct kvm_vcpu {int kvm; } ;
struct TYPE_2__ {int (* set_apic_access_page_addr ) (struct kvm_vcpu*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 struct page* FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (struct page*) ;
 TYPE_1__* VAR_2 ;
 int FUNC_2 (struct kvm_vcpu*) ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (struct page*) ;
 int FUNC_5 (struct kvm_vcpu*,int ) ;

void FUNC_6(struct kvm_vcpu *VAR_3)
{
 struct page *VAR_4 = ((void*)0);

 if (!FUNC_2(VAR_3))
  return;

 if (!VAR_2->set_apic_access_page_addr)
  return;

 VAR_4 = FUNC_0(VAR_3->kvm, VAR_0 >> VAR_1);
 if (FUNC_1(VAR_4))
  return;
 VAR_2->set_apic_access_page_addr(VAR_3, FUNC_3(VAR_4));





 FUNC_4(VAR_4);
}
