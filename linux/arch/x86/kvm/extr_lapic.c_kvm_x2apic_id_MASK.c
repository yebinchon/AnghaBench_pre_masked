
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct kvm_lapic {TYPE_1__* vcpu; } ;
struct TYPE_2__ {int vcpu_id; } ;



__attribute__((used)) static inline u32 FUNC_0(struct kvm_lapic *VAR_0)
{
 return VAR_0->vcpu->vcpu_id;
}
