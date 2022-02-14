
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int kseg0_commpage; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
typedef int pte_t ;
typedef int kvm_pfn_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,unsigned long) ;
 int FUNC_2 (struct kvm_vcpu*,unsigned long,int,int) ;
 int * FUNC_3 (struct kvm_vcpu*,unsigned long) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

int FUNC_8(unsigned long VAR_1,
           struct kvm_vcpu *VAR_2)
{
 kvm_pfn_t VAR_3;
 pte_t *VAR_4;

 VAR_4 = FUNC_3(VAR_2, VAR_1);
 if (!VAR_4) {
  FUNC_1("No ptep for commpage %lx\n", VAR_1);
  return -1;
 }

 VAR_3 = FUNC_0(FUNC_7(VAR_2->arch.kseg0_commpage));

 *VAR_4 = FUNC_6(FUNC_5(FUNC_4(VAR_3, VAR_0)));


 FUNC_2(VAR_2, VAR_1, 0, 1);
 return 0;
}
