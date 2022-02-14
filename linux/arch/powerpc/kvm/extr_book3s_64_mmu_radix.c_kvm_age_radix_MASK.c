
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {unsigned long* rmap; } ;
struct kvm_memory_slot {unsigned long base_gfn; TYPE_2__ arch; } ;
struct TYPE_3__ {int pgtable; } ;
struct kvm {TYPE_1__ arch; } ;
typedef int pte_t ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int ,unsigned long,int *,unsigned int*) ;
 int FUNC_1 (struct kvm*,unsigned long*,int ,int ,unsigned long,unsigned long) ;
 unsigned long FUNC_2 (struct kvm*,int *,int ,int ,unsigned long,unsigned int) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;

int FUNC_5(struct kvm *VAR_3, struct kvm_memory_slot *VAR_4,
    unsigned long VAR_5)
{
 pte_t *VAR_6;
 unsigned long VAR_7 = VAR_5 << VAR_0;
 unsigned int VAR_8;
 int VAR_9 = 0;
 unsigned long VAR_10, *VAR_11;

 VAR_6 = FUNC_0(VAR_3->arch.pgtable, VAR_7, ((void*)0), &VAR_8);
 if (VAR_6 && FUNC_3(*VAR_6) && FUNC_4(*VAR_6)) {
  VAR_10 = FUNC_2(VAR_3, VAR_6, VAR_2, 0,
           VAR_7, VAR_8);


  VAR_11 = &VAR_4->arch.rmap[VAR_5 - VAR_4->base_gfn];
  FUNC_1(VAR_3, VAR_11, VAR_2, 0,
            VAR_10 & VAR_1,
            1UL << VAR_8);
  VAR_9 = 1;
 }
 return VAR_9;
}
