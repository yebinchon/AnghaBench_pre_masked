
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct kvm_vcpu {int dummy; } ;
struct kvm_segment {int dpl; int type; int base; int selector; int limit; } ;


 int VAR_0 ;
 int FUNC_0 (struct kvm_vcpu*,struct kvm_segment*,int) ;
 int FUNC_1 (struct kvm_segment*) ;

__attribute__((used)) static bool FUNC_2(struct kvm_vcpu *VAR_1, int VAR_2)
{
 struct kvm_segment VAR_3;
 u32 VAR_4;

 FUNC_0(VAR_1, &VAR_3, VAR_2);
 VAR_3.dpl = 0x3;
 if (VAR_2 == VAR_0)
  VAR_3.type = 0x3;
 VAR_4 = FUNC_1(&VAR_3);

 if (VAR_3.base != (VAR_3.selector << 4))
  return 0;
 if (VAR_3.limit != 0xffff)
  return 0;
 if (VAR_4 != 0xf3)
  return 0;

 return 1;
}
