
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm_vcpu_hv_stimer {int index; } ;
struct kvm_vcpu {int dummy; } ;
struct TYPE_2__ {int stimer_pending_bitmap; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct kvm_vcpu*) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (int ,int ) ;
 struct kvm_vcpu* FUNC_3 (struct kvm_vcpu_hv_stimer*) ;
 TYPE_1__* FUNC_4 (struct kvm_vcpu*) ;

__attribute__((used)) static void FUNC_5(struct kvm_vcpu_hv_stimer *VAR_1,
    bool VAR_2)
{
 struct kvm_vcpu *VAR_3 = FUNC_3(VAR_1);

 FUNC_2(VAR_1->index,
  FUNC_4(VAR_3)->stimer_pending_bitmap);
 FUNC_0(VAR_0, VAR_3);
 if (VAR_2)
  FUNC_1(VAR_3);
}
