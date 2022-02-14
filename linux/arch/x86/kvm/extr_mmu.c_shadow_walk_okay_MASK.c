
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct kvm_shadow_walk_iterator {scalar_t__ level; int index; int shadow_addr; int * sptep; int addr; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static bool FUNC_2(struct kvm_shadow_walk_iterator *VAR_1)
{
 if (VAR_1->level < VAR_0)
  return 0;

 VAR_1->index = FUNC_0(VAR_1->addr, VAR_1->level);
 VAR_1->sptep = ((u64 *)FUNC_1(VAR_1->shadow_addr)) + VAR_1->index;
 return 1;
}
