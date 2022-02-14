
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_rmap_head {int dummy; } ;
struct kvm_memory_slot {scalar_t__ base_gfn; } ;
struct kvm {int dummy; } ;
typedef scalar_t__ gfn_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (unsigned long) ;
 struct kvm_rmap_head* FUNC_1 (scalar_t__,int ,struct kvm_memory_slot*) ;
 int FUNC_2 (struct kvm*,struct kvm_rmap_head*) ;

void FUNC_3(struct kvm *VAR_1,
         struct kvm_memory_slot *VAR_2,
         gfn_t VAR_3, unsigned long VAR_4)
{
 struct kvm_rmap_head *VAR_5;

 while (VAR_4) {
  VAR_5 = FUNC_1(VAR_2->base_gfn + VAR_3 + FUNC_0(VAR_4),
       VAR_0, VAR_2);
  FUNC_2(VAR_1, VAR_5);


  VAR_4 &= VAR_4 - 1;
 }
}
