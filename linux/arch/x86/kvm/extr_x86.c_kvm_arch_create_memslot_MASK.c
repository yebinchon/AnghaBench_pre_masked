
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct kvm_lpage_info** lpage_info; struct kvm_lpage_info** rmap; } ;
struct kvm_memory_slot {unsigned long base_gfn; unsigned long userspace_addr; TYPE_1__ arch; } ;
struct kvm_lpage_info {int disallow_lpage; } ;
struct kvm {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 unsigned long VAR_3 ;
 int FUNC_1 (unsigned long,unsigned long,int) ;
 void* FUNC_2 (int,int,int ) ;
 int FUNC_3 (struct kvm_lpage_info*) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (struct kvm_memory_slot*,unsigned long) ;

int FUNC_6(struct kvm *VAR_4, struct kvm_memory_slot *VAR_5,
       unsigned long VAR_6)
{
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_2; ++VAR_7) {
  struct kvm_lpage_info *VAR_8;
  unsigned long VAR_9;
  int VAR_10;
  int VAR_11 = VAR_7 + 1;

  VAR_10 = FUNC_1(VAR_5->base_gfn + VAR_6 - 1,
          VAR_5->base_gfn, VAR_11) + 1;

  VAR_5->arch.rmap[VAR_7] =
   FUNC_2(VAR_10, sizeof(*VAR_5->arch.rmap[VAR_7]),
     VAR_1);
  if (!VAR_5->arch.rmap[VAR_7])
   goto out_free;
  if (VAR_7 == 0)
   continue;

  VAR_8 = FUNC_2(VAR_10, sizeof(*VAR_8), VAR_1);
  if (!VAR_8)
   goto out_free;

  VAR_5->arch.lpage_info[VAR_7 - 1] = VAR_8;

  if (VAR_5->base_gfn & (FUNC_0(VAR_11) - 1))
   VAR_8[0].disallow_lpage = 1;
  if ((VAR_5->base_gfn + VAR_6) & (FUNC_0(VAR_11) - 1))
   VAR_8[VAR_10 - 1].disallow_lpage = 1;
  VAR_9 = VAR_5->userspace_addr >> VAR_3;





  if ((VAR_5->base_gfn ^ VAR_9) & (FUNC_0(VAR_11) - 1) ||
      !FUNC_4()) {
   unsigned long VAR_12;

   for (VAR_12 = 0; VAR_12 < VAR_10; ++VAR_12)
    VAR_8[VAR_12].disallow_lpage = 1;
  }
 }

 if (FUNC_5(VAR_5, VAR_6))
  goto out_free;

 return 0;

out_free:
 for (VAR_7 = 0; VAR_7 < VAR_2; ++VAR_7) {
  FUNC_3(VAR_5->arch.rmap[VAR_7]);
  VAR_5->arch.rmap[VAR_7] = ((void*)0);
  if (VAR_7 == 0)
   continue;

  FUNC_3(VAR_5->arch.lpage_info[VAR_7 - 1]);
  VAR_5->arch.lpage_info[VAR_7 - 1] = ((void*)0);
 }
 return -VAR_0;
}
