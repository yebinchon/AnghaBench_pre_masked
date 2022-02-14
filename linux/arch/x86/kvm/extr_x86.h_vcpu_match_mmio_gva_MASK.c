
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long mmio_gva; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 unsigned long VAR_0 ;
 scalar_t__ FUNC_0 (struct kvm_vcpu*) ;

__attribute__((used)) static inline bool FUNC_1(struct kvm_vcpu *VAR_1, unsigned long VAR_2)
{
 if (FUNC_0(VAR_1) && VAR_1->arch.mmio_gva &&
       VAR_1->arch.mmio_gva == (VAR_2 & VAR_0))
  return 1;

 return 0;
}
