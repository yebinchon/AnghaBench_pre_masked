
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct revmap_entry {unsigned long forw; } ;
struct TYPE_4__ {unsigned long* rmap; } ;
struct kvm_memory_slot {unsigned long base_gfn; TYPE_1__ arch; } ;
struct TYPE_5__ {scalar_t__ virt; struct revmap_entry* rev; } ;
struct TYPE_6__ {TYPE_2__ hpt; } ;
struct kvm {TYPE_3__ arch; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long*) ;
 int FUNC_2 (unsigned long*) ;

__attribute__((used)) static int FUNC_3(struct kvm *VAR_4, struct kvm_memory_slot *VAR_5,
         unsigned long VAR_6)
{
 struct revmap_entry *VAR_7 = VAR_4->arch.hpt.rev;
 unsigned long VAR_8, VAR_9, VAR_10;
 unsigned long *VAR_11;
 int VAR_12 = 1;
 unsigned long *VAR_13;

 VAR_13 = &VAR_5->arch.rmap[VAR_6 - VAR_5->base_gfn];
 if (*VAR_13 & VAR_3)
  return 1;

 FUNC_1(VAR_13);
 if (*VAR_13 & VAR_3)
  goto out;

 if (*VAR_13 & VAR_2) {
  VAR_9 = VAR_8 = *VAR_13 & VAR_1;
  do {
   VAR_11 = (unsigned long *)(VAR_4->arch.hpt.virt + (VAR_9 << 4));
   VAR_10 = VAR_7[VAR_9].forw;
   if (FUNC_0(VAR_11[1]) & VAR_0)
    goto out;
  } while ((VAR_9 = VAR_10) != VAR_8);
 }
 VAR_12 = 0;

 out:
 FUNC_2(VAR_13);
 return VAR_12;
}
