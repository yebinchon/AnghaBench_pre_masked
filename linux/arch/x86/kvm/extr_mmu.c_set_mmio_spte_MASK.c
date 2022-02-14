
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct kvm_vcpu {int dummy; } ;
typedef int kvm_pfn_t ;
typedef int gfn_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct kvm_vcpu*,int *,int ,unsigned int) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static bool FUNC_3(struct kvm_vcpu *VAR_0, u64 *VAR_1, gfn_t VAR_2,
     kvm_pfn_t VAR_3, unsigned VAR_4)
{
 if (FUNC_2(FUNC_0(VAR_3))) {
  FUNC_1(VAR_0, VAR_1, VAR_2, VAR_4);
  return 1;
 }

 return 0;
}
