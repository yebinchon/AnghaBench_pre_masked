
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vcpu {int dummy; } ;
typedef int kvm_pfn_t ;
typedef int gva_t ;
typedef int gfn_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct kvm_vcpu*,int ,int ) ;
 unsigned int VAR_0 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct kvm_vcpu*,int ,int ,unsigned int) ;

__attribute__((used)) static bool FUNC_5(struct kvm_vcpu *VAR_1, gva_t VAR_2, gfn_t VAR_3,
    kvm_pfn_t VAR_4, unsigned VAR_5, int *VAR_6)
{

 if (FUNC_3(FUNC_0(VAR_4))) {
  *VAR_6 = FUNC_2(VAR_1, VAR_3, VAR_4);
  return 1;
 }

 if (FUNC_3(FUNC_1(VAR_4)))
  FUNC_4(VAR_1, VAR_2, VAR_3,
         VAR_5 & VAR_0);

 return 0;
}
