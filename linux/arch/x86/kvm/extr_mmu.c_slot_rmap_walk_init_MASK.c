
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slot_rmap_walk_iterator {int start_level; int end_level; void* end_gfn; void* start_gfn; struct kvm_memory_slot* slot; } ;
struct kvm_memory_slot {int dummy; } ;
typedef void* gfn_t ;


 int FUNC_0 (struct slot_rmap_walk_iterator*,int) ;

__attribute__((used)) static void
FUNC_1(struct slot_rmap_walk_iterator *VAR_0,
      struct kvm_memory_slot *VAR_1, int VAR_2,
      int VAR_3, gfn_t VAR_4, gfn_t VAR_5)
{
 VAR_0->slot = VAR_1;
 VAR_0->start_level = VAR_2;
 VAR_0->end_level = VAR_3;
 VAR_0->start_gfn = VAR_4;
 VAR_0->end_gfn = VAR_5;

 FUNC_0(VAR_0, VAR_0->start_level);
}
