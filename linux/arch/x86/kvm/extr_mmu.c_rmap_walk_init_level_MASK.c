
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slot_rmap_walk_iterator {int level; int slot; int end_gfn; void* end_rmap; int gfn; void* rmap; int start_gfn; } ;


 void* FUNC_0 (int ,int,int ) ;

__attribute__((used)) static void
FUNC_1(struct slot_rmap_walk_iterator *VAR_0, int VAR_1)
{
 VAR_0->level = VAR_1;
 VAR_0->gfn = VAR_0->start_gfn;
 VAR_0->rmap = FUNC_0(VAR_0->gfn, VAR_1, VAR_0->slot);
 VAR_0->end_rmap = FUNC_0(VAR_0->end_gfn, VAR_1,
        VAR_0->slot);
}
