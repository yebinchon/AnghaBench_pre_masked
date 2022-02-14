
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u16 ;
struct kvm_vcpu {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static u16 FUNC_0(struct kvm_vcpu *VAR_2, u64 VAR_3)
{
 return (u16)(((VAR_3 >> (VAR_0 * 7)) & VAR_1) ^
       ((VAR_3 >> (VAR_0 * 6)) & VAR_1) ^
       ((VAR_3 >> (VAR_0 * 5)) & VAR_1) ^
       ((VAR_3 >> (VAR_0 * 4)) & VAR_1) ^
       ((VAR_3 >> (VAR_0 * 3)) & VAR_1) ^
       ((VAR_3 >> (VAR_0 * 2)) & VAR_1) ^
       ((VAR_3 >> (VAR_0 * 1)) & VAR_1) ^
       ((VAR_3 >> (VAR_0 * 0)) & VAR_1));
}
