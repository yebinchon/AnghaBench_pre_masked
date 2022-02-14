
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct revmap_entry {unsigned long forw; int guest_rpte; } ;
struct TYPE_4__ {unsigned long* rmap; } ;
struct kvm_memory_slot {unsigned long base_gfn; TYPE_1__ arch; } ;
struct TYPE_5__ {scalar_t__ virt; struct revmap_entry* rev; } ;
struct TYPE_6__ {TYPE_2__ hpt; } ;
struct kvm {TYPE_3__ arch; } ;
typedef int __be64 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (struct kvm*,int *,unsigned long) ;
 int FUNC_4 (unsigned long*) ;
 int FUNC_5 (struct kvm*,struct revmap_entry*) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (unsigned long*) ;

__attribute__((used)) static int FUNC_8(struct kvm *VAR_6, struct kvm_memory_slot *VAR_7,
    unsigned long VAR_8)
{
 struct revmap_entry *VAR_9 = VAR_6->arch.hpt.rev;
 unsigned long VAR_10, VAR_11, VAR_12;
 __be64 *VAR_13;
 int VAR_14 = 0;
 unsigned long *VAR_15;

 VAR_15 = &VAR_7->arch.rmap[VAR_8 - VAR_7->base_gfn];
 retry:
 FUNC_4(VAR_15);
 if (*VAR_15 & VAR_5) {
  *VAR_15 &= ~VAR_5;
  VAR_14 = 1;
 }
 if (!(*VAR_15 & VAR_4)) {
  FUNC_7(VAR_15);
  return VAR_14;
 }

 VAR_11 = VAR_10 = *VAR_15 & VAR_3;
 do {
  VAR_13 = (__be64 *) (VAR_6->arch.hpt.virt + (VAR_11 << 4));
  VAR_12 = VAR_9[VAR_11].forw;


  if (!(FUNC_1(VAR_13[1]) & VAR_0))
   continue;

  if (!FUNC_6(VAR_13, VAR_1)) {

   FUNC_7(VAR_15);
   while (FUNC_1(VAR_13[0]) & VAR_1)
    FUNC_2();
   goto retry;
  }


  if ((FUNC_1(VAR_13[0]) & VAR_2) &&
      (FUNC_1(VAR_13[1]) & VAR_0)) {
   FUNC_3(VAR_6, VAR_13, VAR_11);
   if (!(VAR_9[VAR_11].guest_rpte & VAR_0)) {
    VAR_9[VAR_11].guest_rpte |= VAR_0;
    FUNC_5(VAR_6, &VAR_9[VAR_11]);
   }
   VAR_14 = 1;
  }
  FUNC_0(VAR_13, FUNC_1(VAR_13[0]));
 } while ((VAR_11 = VAR_12) != VAR_10);

 FUNC_7(VAR_15);
 return VAR_14;
}
