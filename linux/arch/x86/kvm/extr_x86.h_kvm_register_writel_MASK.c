
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u32 ;
struct kvm_vcpu {int dummy; } ;
typedef enum kvm_reg { ____Placeholder_kvm_reg } kvm_reg ;


 int FUNC_0 (struct kvm_vcpu*) ;
 void FUNC_1 (struct kvm_vcpu*,int,unsigned long) ;

__attribute__((used)) static inline void FUNC_2(struct kvm_vcpu *VAR_0,
           enum kvm_reg VAR_1,
           unsigned long VAR_2)
{
 if (!FUNC_0(VAR_0))
  VAR_2 = (u32)VAR_2;
 return FUNC_1(VAR_0, VAR_1, VAR_2);
}
