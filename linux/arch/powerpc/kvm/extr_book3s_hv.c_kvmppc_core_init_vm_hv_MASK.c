
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned long lpid; unsigned long host_lpcr; int vrma_slb_v; int radix; int mmu_ready; unsigned long lpcr; int threads_indep; int smt_mode; int emul_smt_mode; int debugfs_dir; int tlb_sets; int * resize_hpt; void* host_lpid; void* host_sdr1; int enabled_hcalls; int need_tlb_flush; int mmu_setup_lock; } ;
struct kvm {TYPE_1__ arch; } ;
typedef int buf ;
struct TYPE_4__ {int pid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 unsigned long VAR_9 ;
 unsigned long VAR_10 ;
 unsigned long VAR_11 ;
 unsigned long VAR_12 ;
 unsigned long VAR_13 ;
 unsigned long VAR_14 ;
 unsigned long VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 TYPE_2__* VAR_26 ;
 int FUNC_2 (char*,int ) ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int FUNC_3 () ;
 int FUNC_4 (struct kvm*) ;
 int FUNC_5 (struct kvm*) ;
 int FUNC_6 () ;
 unsigned long FUNC_7 () ;
 int FUNC_8 (unsigned long) ;
 int FUNC_9 (struct kvm*) ;
 int FUNC_10 (struct kvm*) ;
 int FUNC_11 (struct kvm*) ;
 int FUNC_12 (int ,int ,int) ;
 void* FUNC_13 (int ) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (char*) ;
 scalar_t__ FUNC_16 () ;
 int FUNC_17 (char*,int,char*,int) ;
 int VAR_30 ;
 scalar_t__ FUNC_18 () ;

__attribute__((used)) static int FUNC_19(struct kvm *VAR_31)
{
 unsigned long VAR_32, VAR_33;
 char VAR_34[32];
 int VAR_35;

 FUNC_14(&VAR_31->arch.mmu_setup_lock);



 VAR_33 = FUNC_7();
 if ((long)VAR_33 < 0)
  return -VAR_3;
 VAR_31->arch.lpid = VAR_33;

 FUNC_6();

 FUNC_5(VAR_31);
 if (!FUNC_0(VAR_1))
  FUNC_1(&VAR_31->arch.need_tlb_flush);


 FUNC_12(VAR_31->arch.enabled_hcalls, VAR_27,
        sizeof(VAR_31->arch.enabled_hcalls));

 if (!FUNC_0(VAR_1))
  VAR_31->arch.host_sdr1 = FUNC_13(VAR_24);


 if (FUNC_0(VAR_2)) {
  VAR_31->arch.host_lpid = FUNC_13(VAR_23);
  VAR_31->arch.host_lpcr = VAR_32 = FUNC_13(VAR_22);
  VAR_32 &= VAR_12 | VAR_10;
 } else {
  VAR_32 = 0;
 }
 VAR_32 |= (4UL << VAR_4) | VAR_6 |
  VAR_14 | VAR_15;
 VAR_31->arch.vrma_slb_v = VAR_20 |
  (VAR_25 << VAR_21);

 if (FUNC_0(VAR_0))
  VAR_32 |= VAR_11;







 if (FUNC_0(VAR_1)) {
  VAR_32 &= ~VAR_14;
  VAR_32 |= VAR_9 | VAR_7;





  if (FUNC_18())
   VAR_32 |= VAR_10;
 }




 if (FUNC_16()) {
  VAR_31->arch.radix = 1;
  VAR_31->arch.mmu_ready = 1;
  VAR_32 &= ~VAR_15;
  VAR_32 |= VAR_13 | VAR_5 | VAR_8;
  VAR_35 = FUNC_9(VAR_31);
  if (VAR_35) {
   FUNC_8(VAR_31->arch.lpid);
   return VAR_35;
  }
  FUNC_11(VAR_31);
 }

 VAR_31->arch.lpcr = VAR_32;


 VAR_31->arch.resize_hpt = ((void*)0);





 if (FUNC_16())
  VAR_31->arch.tlb_sets = VAR_19;
 else if (FUNC_0(VAR_1))
  VAR_31->arch.tlb_sets = VAR_18;
 else if (FUNC_0(VAR_0))
  VAR_31->arch.tlb_sets = VAR_17;
 else
  VAR_31->arch.tlb_sets = VAR_16;







 if (FUNC_0(VAR_1)) {
  if (!VAR_28 && !FUNC_0(VAR_2)) {
   FUNC_15("KVM: Ignoring indep_threads_mode=N in nested hypervisor\n");
   VAR_31->arch.threads_indep = 1;
  } else {
   VAR_31->arch.threads_indep = VAR_28;
  }
 }
 if (!VAR_31->arch.threads_indep)
  FUNC_3();
 if (!FUNC_0(VAR_1))
  VAR_31->arch.smt_mode = VAR_30;
 else
  VAR_31->arch.smt_mode = 1;
 VAR_31->arch.emul_smt_mode = 1;




 FUNC_17(VAR_34, sizeof(VAR_34), "vm%d", VAR_26->pid);
 VAR_31->arch.debugfs_dir = FUNC_2(VAR_34, VAR_29);
 FUNC_10(VAR_31);
 if (FUNC_16())
  FUNC_4(VAR_31);

 return 0;
}
