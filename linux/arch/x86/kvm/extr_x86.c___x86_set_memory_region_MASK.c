
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct kvm_userspace_memory_region {int slot; unsigned long userspace_addr; scalar_t__ memory_size; int guest_phys_addr; scalar_t__ flags; } ;
struct kvm_memslots {int dummy; } ;
struct kvm_memory_slot {int npages; int userspace_addr; } ;
struct kvm {int dummy; } ;
typedef int gpa_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (void*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (void*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct kvm*,struct kvm_userspace_memory_region*) ;
 struct kvm_memory_slot* FUNC_4 (struct kvm_memslots*,int) ;
 struct kvm_memslots* FUNC_5 (struct kvm*) ;
 unsigned long FUNC_6 (int *,int ,scalar_t__,int,int,int ) ;
 int FUNC_7 (int ,int) ;

int FUNC_8(struct kvm *VAR_9, int VAR_10, gpa_t VAR_11, u32 VAR_12)
{
 int VAR_13, VAR_14;
 unsigned long VAR_15;
 struct kvm_memslots *VAR_16 = FUNC_5(VAR_9);
 struct kvm_memory_slot *VAR_17, VAR_18;


 if (FUNC_2(VAR_10 >= VAR_3))
  return -VAR_1;

 VAR_17 = FUNC_4(VAR_16, VAR_10);
 if (VAR_12) {
  if (VAR_17->npages)
   return -VAR_0;





  VAR_15 = FUNC_6(((void*)0), 0, VAR_12, VAR_7 | VAR_8,
         VAR_5 | VAR_4, 0);
  if (FUNC_0((void *)VAR_15))
   return FUNC_1((void *)VAR_15);
 } else {
  if (!VAR_17->npages)
   return 0;

  VAR_15 = 0;
 }

 VAR_18 = *VAR_17;
 for (VAR_13 = 0; VAR_13 < VAR_2; VAR_13++) {
  struct kvm_userspace_memory_region VAR_19;

  VAR_19.slot = VAR_10 | (VAR_13 << 16);
  VAR_19.flags = 0;
  VAR_19.guest_phys_addr = VAR_11;
  VAR_19.userspace_addr = VAR_15;
  VAR_19.memory_size = VAR_12;
  VAR_14 = FUNC_3(VAR_9, &VAR_19);
  if (VAR_14 < 0)
   return VAR_14;
 }

 if (!VAR_12)
  FUNC_7(VAR_18.userspace_addr, VAR_18.npages * VAR_6);

 return 0;
}
