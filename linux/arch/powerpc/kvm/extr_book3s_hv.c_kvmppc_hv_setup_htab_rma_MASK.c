
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct vm_area_struct {unsigned long vm_start; int vm_flags; } ;
struct kvm_vcpu {struct kvm* kvm; } ;
struct kvm_memory_slot {int flags; unsigned long userspace_addr; } ;
struct kvm_hpt_info {int dummy; } ;
struct TYPE_5__ {int virt; } ;
struct TYPE_6__ {unsigned long vrma_slb_v; TYPE_1__ hpt; } ;
struct kvm {int srcu; TYPE_2__ arch; } ;
struct TYPE_8__ {TYPE_3__* mm; } ;
struct TYPE_7__ {int mmap_sem; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned long VAR_8 ;
 unsigned long VAR_9 ;
 int VAR_10 ;
 unsigned long VAR_11 ;
 unsigned long FUNC_0 (unsigned long) ;
 int FUNC_1 (int ) ;
 TYPE_4__* VAR_12 ;
 int FUNC_2 (int *) ;
 struct vm_area_struct* FUNC_3 (TYPE_3__*,unsigned long) ;
 struct kvm_memory_slot* FUNC_4 (struct kvm*,int ) ;
 int FUNC_5 (struct kvm_hpt_info*,int) ;
 int FUNC_6 (struct kvm_vcpu*,struct kvm_memory_slot*,unsigned long) ;
 int FUNC_7 (struct kvm*,struct kvm_hpt_info*) ;
 int FUNC_8 (struct kvm*,unsigned long,int ) ;
 int FUNC_9 (char*) ;
 unsigned long FUNC_10 (unsigned long) ;
 int FUNC_11 () ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,int) ;
 int FUNC_14 (int *) ;
 unsigned long FUNC_15 (struct vm_area_struct*) ;

__attribute__((used)) static int FUNC_16(struct kvm_vcpu *VAR_13)
{
 int VAR_14 = 0;
 struct kvm *VAR_15 = VAR_13->kvm;
 unsigned long VAR_16;
 struct kvm_memory_slot *VAR_17;
 struct vm_area_struct *VAR_18;
 unsigned long VAR_19 = 0, VAR_20;
 unsigned long VAR_21, VAR_22;
 int VAR_23;


 if (!VAR_15->arch.hpt.virt) {
  int VAR_24 = VAR_3;
  struct kvm_hpt_info VAR_25;

  VAR_14 = FUNC_5(&VAR_25, VAR_24);



  while ((VAR_14 == -VAR_2) && --VAR_24 >= VAR_7)
   VAR_14 = FUNC_5(&VAR_25, VAR_24);

  if (VAR_14 < 0) {
   FUNC_9("KVM: Couldn't alloc HPT\n");
   goto out;
  }

  FUNC_7(VAR_15, &VAR_25);
 }


 VAR_23 = FUNC_12(&VAR_15->srcu);
 VAR_17 = FUNC_4(VAR_15, 0);


 VAR_14 = -VAR_1;
 if (!VAR_17 || (VAR_17->flags & VAR_4))
  goto out_srcu;


 VAR_16 = VAR_17->userspace_addr;
 FUNC_2(&VAR_12->mm->mmap_sem);
 VAR_18 = FUNC_3(VAR_12->mm, VAR_16);
 if (!VAR_18 || VAR_18->vm_start > VAR_16 || (VAR_18->vm_flags & VAR_10))
  goto up_out;

 VAR_21 = FUNC_15(VAR_18);

 FUNC_14(&VAR_12->mm->mmap_sem);


 if (VAR_21 >= 0x1000000)
  VAR_21 = 0x1000000;
 else if (VAR_21 >= 0x10000)
  VAR_21 = 0x10000;
 else
  VAR_21 = 0x1000;
 VAR_22 = FUNC_0(VAR_21);

 VAR_20 = FUNC_10(VAR_21);
 VAR_15->arch.vrma_slb_v = VAR_20 | VAR_8 |
  (VAR_11 << VAR_9);

 FUNC_6(VAR_13, VAR_17, VAR_22);


 if (!FUNC_1(VAR_0)) {

  VAR_19 = VAR_20 << (VAR_6 - 4);
  FUNC_8(VAR_15, VAR_19, VAR_5);
 }


 FUNC_11();
 VAR_14 = 0;
 out_srcu:
 FUNC_13(&VAR_15->srcu, VAR_23);
 out:
 return VAR_14;

 up_out:
 FUNC_14(&VAR_12->mm->mmap_sem);
 goto out_srcu;
}
