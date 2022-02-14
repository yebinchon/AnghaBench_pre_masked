
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct kvm_vcpu {int dummy; } ;


 int FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static inline u64 FUNC_2(struct kvm_vcpu *VAR_0)
{
 return FUNC_1(FUNC_0(VAR_0), 63) | FUNC_1(5, 8) |
        FUNC_1(1, 2);
}
