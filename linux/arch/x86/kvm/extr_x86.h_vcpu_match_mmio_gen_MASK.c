
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ mmio_gen; } ;
struct kvm_vcpu {int kvm; TYPE_1__ arch; } ;
struct TYPE_4__ {scalar_t__ generation; } ;


 TYPE_2__* FUNC_0 (int ) ;

__attribute__((used)) static inline bool FUNC_1(struct kvm_vcpu *VAR_0)
{
 return VAR_0->arch.mmio_gen == FUNC_0(VAR_0->kvm)->generation;
}
