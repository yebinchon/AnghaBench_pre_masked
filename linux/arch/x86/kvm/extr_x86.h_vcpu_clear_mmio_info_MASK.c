
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mmio_gva; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
typedef int gva_t ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline void FUNC_0(struct kvm_vcpu *VAR_2, gva_t VAR_3)
{
 if (VAR_3 != VAR_0 && VAR_2->arch.mmio_gva != (VAR_3 & VAR_1))
  return;

 VAR_2->arch.mmio_gva = 0;
}
