
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ update_pending; scalar_t__ pinned_addr; } ;
struct TYPE_3__ {int vpa_update_lock; TYPE_2__ slb_shadow; scalar_t__ dtl_index; TYPE_2__ dtl; scalar_t__ dtl_ptr; TYPE_2__ vpa; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 int FUNC_0 (struct kvm_vcpu*,scalar_t__) ;
 int FUNC_1 (struct kvm_vcpu*,TYPE_2__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct kvm_vcpu *VAR_0)
{
 if (!(VAR_0->arch.vpa.update_pending ||
       VAR_0->arch.slb_shadow.update_pending ||
       VAR_0->arch.dtl.update_pending))
  return;

 FUNC_2(&VAR_0->arch.vpa_update_lock);
 if (VAR_0->arch.vpa.update_pending) {
  FUNC_1(VAR_0, &VAR_0->arch.vpa);
  if (VAR_0->arch.vpa.pinned_addr)
   FUNC_0(VAR_0, VAR_0->arch.vpa.pinned_addr);
 }
 if (VAR_0->arch.dtl.update_pending) {
  FUNC_1(VAR_0, &VAR_0->arch.dtl);
  VAR_0->arch.dtl_ptr = VAR_0->arch.dtl.pinned_addr;
  VAR_0->arch.dtl_index = 0;
 }
 if (VAR_0->arch.slb_shadow.update_pending)
  FUNC_1(VAR_0, &VAR_0->arch.slb_shadow);
 FUNC_3(&VAR_0->arch.vpa_update_lock);
}
