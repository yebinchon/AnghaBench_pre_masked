
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct sys_reg_desc {int dummy; } ;
struct kvm_vcpu {int vcpu_id; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct kvm_vcpu*,unsigned long long,int ) ;

__attribute__((used)) static void FUNC_2(struct kvm_vcpu *VAR_1, const struct sys_reg_desc *VAR_2)
{
 u64 VAR_3;
 VAR_3 = (VAR_1->vcpu_id & 0x0f) << FUNC_0(0);
 VAR_3 |= ((VAR_1->vcpu_id >> 4) & 0xff) << FUNC_0(1);
 VAR_3 |= ((VAR_1->vcpu_id >> 12) & 0xff) << FUNC_0(2);
 FUNC_1(VAR_1, (1ULL << 31) | VAR_3, VAR_0);
}
