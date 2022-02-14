
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct kvm_cpuid_entry2 {int dummy; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct kvm_cpuid_entry2*,int ,int*,int) ;
 int FUNC_1 (struct kvm_cpuid_entry2*,int ,int*,int) ;

__attribute__((used)) static int FUNC_2(struct kvm_cpuid_entry2 *VAR_1, u32 VAR_2,
    int *VAR_3, int VAR_4, unsigned int VAR_5)
{
 if (VAR_5 == VAR_0)
  return FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4);

 return FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4);
}
