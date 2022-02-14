
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int hflags; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct kvm_vcpu*) ;

__attribute__((used)) static inline bool FUNC_1(struct kvm_vcpu *VAR_1)
{
 return FUNC_0(VAR_1) && (VAR_1->arch.hflags & VAR_0);
}
