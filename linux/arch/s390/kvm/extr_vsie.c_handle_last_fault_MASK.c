
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vsie_page {scalar_t__ fault_addr; int gmap; } ;
struct kvm_vcpu {int dummy; } ;


 int FUNC_0 (struct kvm_vcpu*,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct kvm_vcpu *VAR_0,
         struct vsie_page *VAR_1)
{
 if (VAR_1->fault_addr)
  FUNC_0(VAR_0, VAR_1->gmap,
          VAR_1->fault_addr);
 VAR_1->fault_addr = 0;
}
