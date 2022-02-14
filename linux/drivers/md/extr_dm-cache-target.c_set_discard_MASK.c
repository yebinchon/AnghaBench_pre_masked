
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int discard_count; } ;
struct cache {int lock; int discard_bitset; TYPE_1__ stats; int discard_nr_blocks; } ;
typedef int dm_dblock_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_6(struct cache *VAR_0, dm_dblock_t VAR_1)
{
 unsigned long VAR_2;

 FUNC_0(FUNC_2(VAR_1) >= FUNC_2(VAR_0->discard_nr_blocks));
 FUNC_1(&VAR_0->stats.discard_count);

 FUNC_4(&VAR_0->lock, VAR_2);
 FUNC_3(FUNC_2(VAR_1), VAR_0->discard_bitset);
 FUNC_5(&VAR_0->lock, VAR_2);
}
