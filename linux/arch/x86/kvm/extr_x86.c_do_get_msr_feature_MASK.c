
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct kvm_vcpu {int dummy; } ;
struct kvm_msr_entry {unsigned int index; int data; } ;


 int FUNC_0 (struct kvm_msr_entry*) ;

__attribute__((used)) static int FUNC_1(struct kvm_vcpu *VAR_0, unsigned VAR_1, u64 *VAR_2)
{
 struct kvm_msr_entry VAR_3;
 int VAR_4;

 VAR_3.index = VAR_1;
 VAR_4 = FUNC_0(&VAR_3);
 if (VAR_4)
  return VAR_4;

 *VAR_2 = VAR_3.data;

 return 0;
}
