
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct kvm_vcpu {int dummy; } ;
struct kvm_one_reg {int id; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct kvm_vcpu const*,int ) ;

__attribute__((used)) static int FUNC_3(const struct kvm_vcpu *VAR_1,
    const struct kvm_one_reg *VAR_2)
{
 u64 VAR_3 = FUNC_1(VAR_2->id);
 int VAR_4 = FUNC_2(VAR_1, VAR_3);

 if (VAR_4 < 0)
  return -VAR_0;

 if (FUNC_0(VAR_2->id) != VAR_4)
  return -VAR_0;

 return 0;
}
