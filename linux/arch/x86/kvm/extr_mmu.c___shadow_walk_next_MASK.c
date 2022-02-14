
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct kvm_shadow_walk_iterator {int shadow_addr; scalar_t__ level; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct kvm_shadow_walk_iterator *VAR_1,
          u64 VAR_2)
{
 if (FUNC_0(VAR_2, VAR_1->level)) {
  VAR_1->level = 0;
  return;
 }

 VAR_1->shadow_addr = VAR_2 & VAR_0;
 --VAR_1->level;
}
