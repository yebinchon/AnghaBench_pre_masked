
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct kvm_lapic {TYPE_1__* vcpu; } ;
struct TYPE_2__ {int kvm; } ;


 int VAR_0 ;
 int FUNC_0 (struct kvm_lapic*,int ,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static inline void FUNC_2(struct kvm_lapic *VAR_1, u8 VAR_2)
{
 FUNC_0(VAR_1, VAR_0, VAR_2 << 24);
 FUNC_1(VAR_1->vcpu->kvm);
}
