
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_3__ {int mmio_gva; unsigned int mmio_access; int mmio_gen; int mmio_gfn; } ;
struct kvm_vcpu {TYPE_1__ arch; int kvm; } ;
typedef int gva_t ;
typedef int gfn_t ;
struct TYPE_4__ {int generation; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static inline void FUNC_3(struct kvm_vcpu *VAR_2,
     gva_t VAR_3, gfn_t VAR_4, unsigned VAR_5)
{
 u64 VAR_6 = FUNC_0(VAR_2->kvm)->generation;

 if (FUNC_2(VAR_6 & VAR_0))
  return;





 VAR_2->arch.mmio_gva = FUNC_1(VAR_2) ? 0 : VAR_3 & VAR_1;
 VAR_2->arch.mmio_access = VAR_5;
 VAR_2->arch.mmio_gfn = VAR_4;
 VAR_2->arch.mmio_gen = VAR_6;
}
