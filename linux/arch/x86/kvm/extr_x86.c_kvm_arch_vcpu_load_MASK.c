
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_5__ {int tsc_offset_adjustment; scalar_t__ last_host_tsc; int tsc_catchup; int last_guest_tsc; int wbinvd_dirty_mask; } ;
struct kvm_vcpu {int cpu; TYPE_3__* kvm; TYPE_1__ arch; } ;
typedef scalar_t__ s64 ;
struct TYPE_8__ {int (* vcpu_load ) (struct kvm_vcpu*,int) ;scalar_t__ (* has_wbinvd_exit ) () ;} ;
struct TYPE_6__ {int use_master_clock; } ;
struct TYPE_7__ {TYPE_2__ arch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct kvm_vcpu*,int) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (struct kvm_vcpu*,int ) ;
 scalar_t__ FUNC_5 (struct kvm_vcpu*) ;
 int FUNC_6 (struct kvm_vcpu*) ;
 int FUNC_7 (int ,struct kvm_vcpu*) ;
 int FUNC_8 (struct kvm_vcpu*,int ) ;
 TYPE_4__* VAR_5 ;
 int FUNC_9 (char*) ;
 scalar_t__ FUNC_10 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_11 () ;
 int FUNC_12 (int,int ,int *,int) ;
 scalar_t__ FUNC_13 () ;
 int FUNC_14 (struct kvm_vcpu*,int) ;
 int FUNC_15 () ;
 scalar_t__ FUNC_16 (int ) ;
 scalar_t__ FUNC_17 (int) ;
 int VAR_6 ;

void FUNC_18(struct kvm_vcpu *VAR_7, int VAR_8)
{

 if (FUNC_10(VAR_7)) {
  if (VAR_5->has_wbinvd_exit())
   FUNC_1(VAR_8, VAR_7->arch.wbinvd_dirty_mask);
  else if (VAR_7->cpu != -1 && VAR_7->cpu != VAR_8)
   FUNC_12(VAR_7->cpu,
     VAR_6, ((void*)0), 1);
 }

 VAR_5->vcpu_load(VAR_7, VAR_8);

 FUNC_2();
 if (FUNC_16(VAR_4))
  FUNC_15();


 if (FUNC_17(VAR_7->arch.tsc_offset_adjustment)) {
  FUNC_0(VAR_7, VAR_7->arch.tsc_offset_adjustment);
  VAR_7->arch.tsc_offset_adjustment = 0;
  FUNC_7(VAR_0, VAR_7);
 }

 if (FUNC_17(VAR_7->cpu != VAR_8) || FUNC_3()) {
  s64 VAR_9 = !VAR_7->arch.last_host_tsc ? 0 :
    FUNC_11() - VAR_7->arch.last_host_tsc;
  if (VAR_9 < 0)
   FUNC_9("KVM discovered backwards TSC");

  if (FUNC_3()) {
   u64 VAR_10 = FUNC_4(VAR_7,
      VAR_7->arch.last_guest_tsc);
   FUNC_8(VAR_7, VAR_10);
   VAR_7->arch.tsc_catchup = 1;
  }

  if (FUNC_5(VAR_7))
   FUNC_6(VAR_7);





  if (!VAR_7->kvm->arch.use_master_clock || VAR_7->cpu == -1)
   FUNC_7(VAR_1, VAR_7);
  if (VAR_7->cpu != VAR_8)
   FUNC_7(VAR_2, VAR_7);
  VAR_7->cpu = VAR_8;
 }

 FUNC_7(VAR_3, VAR_7);
}
