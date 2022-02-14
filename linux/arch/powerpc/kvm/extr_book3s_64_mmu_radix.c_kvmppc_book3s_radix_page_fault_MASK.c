
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int fault_gpa; } ;
struct kvm_vcpu {TYPE_1__ arch; struct kvm* kvm; } ;
struct kvm_run {int dummy; } ;
struct kvm_memory_slot {int flags; } ;
struct TYPE_4__ {int lpid; int pgtable; } ;
struct kvm {int mmu_lock; TYPE_2__ arch; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 long VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 unsigned long VAR_12 ;
 int VAR_13 ;
 struct kvm_memory_slot* FUNC_0 (struct kvm*,unsigned long) ;
 long FUNC_1 (struct kvm_vcpu*,unsigned long,struct kvm_memory_slot*,int,int,int *,int *) ;
 int FUNC_2 (struct kvm_vcpu*,unsigned long,unsigned long) ;
 int FUNC_3 (struct kvm_run*,struct kvm_vcpu*,unsigned long,unsigned long,int) ;
 scalar_t__ FUNC_4 (struct kvm*,int ,int,unsigned long,int ) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

int FUNC_8(struct kvm_run *VAR_14, struct kvm_vcpu *VAR_15,
       unsigned long VAR_16, unsigned long VAR_17)
{
 struct kvm *VAR_18 = VAR_15->kvm;
 unsigned long VAR_19, VAR_20;
 struct kvm_memory_slot *VAR_21;
 long VAR_22;
 bool VAR_23 = !!(VAR_17 & VAR_2);
 bool VAR_24 = 0;


 if (VAR_17 & VAR_7) {
  FUNC_5("KVM: Got unsupported MMU fault\n");
  return -VAR_9;
 }
 if (VAR_17 & VAR_0) {

  FUNC_5("KVM: Got radix HV page fault with DSISR=%lx\n", VAR_17);
  FUNC_2(VAR_15, VAR_16, VAR_17);
  return VAR_13;
 }


 VAR_19 = VAR_15->arch.fault_gpa & ~0xfffUL;
 VAR_19 &= ~0xF000000000000000ul;
 VAR_20 = VAR_19 >> VAR_12;
 if (!(VAR_17 & VAR_5))
  VAR_19 |= VAR_16 & 0xfff;


 VAR_21 = FUNC_0(VAR_18, VAR_20);


 if (!VAR_21 || (VAR_21->flags & VAR_10)) {
  if (VAR_17 & (VAR_5 | VAR_0 |
        VAR_6)) {




   FUNC_2(VAR_15, VAR_16, VAR_17);
   return VAR_13;
  }
  return FUNC_3(VAR_14, VAR_15, VAR_19, VAR_16, VAR_23);
 }

 if (VAR_21->flags & VAR_11) {
  if (VAR_23) {

   FUNC_2(VAR_15, VAR_16, VAR_2 |
             VAR_4);
   return VAR_13;
  }
  VAR_24 = 1;
 }


 if (VAR_17 & VAR_6) {
  FUNC_6(&VAR_18->mmu_lock);
  if (FUNC_4(VAR_18, VAR_18->arch.pgtable,
         VAR_23, VAR_19, VAR_18->arch.lpid))
   VAR_17 &= ~VAR_6;
  FUNC_7(&VAR_18->mmu_lock);

  if (!(VAR_17 & (VAR_1 | VAR_3 |
          VAR_4 | VAR_6)))
   return VAR_13;
 }


 VAR_22 = FUNC_1(VAR_15, VAR_19, VAR_21, VAR_23,
          VAR_24, ((void*)0), ((void*)0));

 if (VAR_22 == 0 || VAR_22 == -VAR_8)
  VAR_22 = VAR_13;
 return VAR_22;
}
