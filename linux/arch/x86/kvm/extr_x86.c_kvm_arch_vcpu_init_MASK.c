
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct page {int dummy; } ;
struct TYPE_4__ {int * ops; } ;
struct TYPE_5__ {int mcg_cap; int pending_external_vector; int preempted_in_kernel; scalar_t__ pio_data; int mce_banks; int pat; int maxphyaddr; scalar_t__ guest_xstate_size; int wbinvd_dirty_mask; int apicv_active; int mp_state; TYPE_1__ emulate_ctxt; } ;
struct kvm_vcpu {TYPE_2__ arch; int kvm; } ;
struct TYPE_6__ {int (* get_enable_apicv ) (struct kvm_vcpu*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 struct page* FUNC_0 (int) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 int VAR_10 ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct kvm_vcpu*) ;
 int FUNC_7 (struct kvm_vcpu*,int ) ;
 int FUNC_8 (struct kvm_vcpu*) ;
 int FUNC_9 (struct kvm_vcpu*) ;
 int FUNC_10 (struct kvm_vcpu*) ;
 int FUNC_11 (struct kvm_vcpu*) ;
 int VAR_11 ;
 int FUNC_12 (struct kvm_vcpu*) ;
 int FUNC_13 (struct kvm_vcpu*,int ) ;
 scalar_t__ FUNC_14 (struct kvm_vcpu*) ;
 TYPE_3__* VAR_12 ;
 int FUNC_15 (int,int ) ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_16 (struct page*) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (struct kvm_vcpu*) ;
 int FUNC_19 (int *,int ) ;

int FUNC_20(struct kvm_vcpu *VAR_15)
{
 struct page *VAR_16;
 int VAR_17;

 VAR_15->arch.emulate_ctxt.ops = &VAR_10;
 if (!FUNC_4(VAR_15->kvm) || FUNC_14(VAR_15))
  VAR_15->arch.mp_state = VAR_4;
 else
  VAR_15->arch.mp_state = VAR_5;

 VAR_16 = FUNC_0(VAR_1 | VAR_9);
 if (!VAR_16) {
  VAR_17 = -VAR_0;
  goto fail;
 }
 VAR_15->arch.pio_data = FUNC_16(VAR_16);

 FUNC_13(VAR_15, VAR_14);

 VAR_17 = FUNC_10(VAR_15);
 if (VAR_17 < 0)
  goto fail_free_pio_data;

 if (FUNC_4(VAR_15->kvm)) {
  VAR_15->arch.apicv_active = VAR_12->get_enable_apicv(VAR_15);
  VAR_17 = FUNC_7(VAR_15, VAR_13);
  if (VAR_17 < 0)
   goto fail_mmu_destroy;
 } else
  FUNC_17(&VAR_11);

 VAR_15->arch.mce_banks = FUNC_15(VAR_3 * sizeof(u64) * 4,
           VAR_2);
 if (!VAR_15->arch.mce_banks) {
  VAR_17 = -VAR_0;
  goto fail_free_lapic;
 }
 VAR_15->arch.mcg_cap = VAR_3;

 if (!FUNC_19(&VAR_15->arch.wbinvd_dirty_mask,
    VAR_2)) {
  VAR_17 = -VAR_0;
  goto fail_free_mce_banks;
 }

 FUNC_3(VAR_15);

 VAR_15->arch.guest_xstate_size = VAR_8 + VAR_7;

 VAR_15->arch.maxphyaddr = FUNC_1(VAR_15);

 VAR_15->arch.pat = VAR_6;

 FUNC_6(VAR_15);
 FUNC_12(VAR_15);

 VAR_15->arch.pending_external_vector = -1;
 VAR_15->arch.preempted_in_kernel = 0;

 FUNC_9(VAR_15);

 return 0;

fail_free_mce_banks:
 FUNC_5(VAR_15->arch.mce_banks);
fail_free_lapic:
 FUNC_8(VAR_15);
fail_mmu_destroy:
 FUNC_11(VAR_15);
fail_free_pio_data:
 FUNC_2((unsigned long)VAR_15->arch.pio_data);
fail:
 return VAR_17;
}
