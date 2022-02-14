
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slot_rmap_walk_iterator {scalar_t__ rmap; scalar_t__ end_rmap; unsigned long gfn; scalar_t__ level; scalar_t__ end_level; } ;


 unsigned long FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct slot_rmap_walk_iterator*,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct slot_rmap_walk_iterator *VAR_0)
{
 if (++VAR_0->rmap <= VAR_0->end_rmap) {
  VAR_0->gfn += (1UL << FUNC_0(VAR_0->level));
  return;
 }

 if (++VAR_0->level > VAR_0->end_level) {
  VAR_0->rmap = ((void*)0);
  return;
 }

 FUNC_1(VAR_0, VAR_0->level);
}
