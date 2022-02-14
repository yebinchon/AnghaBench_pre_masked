
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smq_policy {int current_writeback_sentinels; int writeback_sentinel_alloc; int dirty; int clean; int cache_hit_bits; } ;
struct entry {int level; int dirty; scalar_t__ pending_work; } ;


 int FUNC_0 (int ) ;
 int * FUNC_1 (int *,int ,int) ;
 int FUNC_2 (struct smq_policy*,struct entry*) ;
 int FUNC_3 (int *,struct entry*,unsigned int,int *,int *) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static void FUNC_5(struct smq_policy *VAR_0, struct entry *VAR_1)
{



 if (VAR_1->pending_work)
  return;

 if (!FUNC_4(FUNC_0(FUNC_2(VAR_0, VAR_1)), VAR_0->cache_hit_bits)) {
  if (!VAR_1->dirty) {
   FUNC_3(&VAR_0->clean, VAR_1, 1u, ((void*)0), ((void*)0));
   return;
  }

  FUNC_3(&VAR_0->dirty, VAR_1, 1u,
     FUNC_1(&VAR_0->writeback_sentinel_alloc, VAR_1->level, !VAR_0->current_writeback_sentinels),
     FUNC_1(&VAR_0->writeback_sentinel_alloc, VAR_1->level, VAR_0->current_writeback_sentinels));
 }
}
