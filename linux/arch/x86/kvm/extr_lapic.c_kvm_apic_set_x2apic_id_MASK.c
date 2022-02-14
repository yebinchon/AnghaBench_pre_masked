
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct kvm_lapic {TYPE_1__* vcpu; } ;
struct TYPE_2__ {scalar_t__ vcpu_id; int kvm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct kvm_lapic*,int ,scalar_t__) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static inline void FUNC_4(struct kvm_lapic *VAR_2, u32 VAR_3)
{
 u32 VAR_4 = FUNC_1(VAR_3);

 FUNC_0(VAR_3 != VAR_2->vcpu->vcpu_id);

 FUNC_2(VAR_2, VAR_0, VAR_3);
 FUNC_2(VAR_2, VAR_1, VAR_4);
 FUNC_3(VAR_2->vcpu->kvm);
}
