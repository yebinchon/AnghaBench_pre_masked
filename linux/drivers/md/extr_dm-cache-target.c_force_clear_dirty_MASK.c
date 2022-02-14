
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cache {int policy; TYPE_1__* ti; int nr_dirty; int dirty_bitset; } ;
typedef int dm_cblock_t ;
struct TYPE_2__ {int table; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int ,int ) ;

__attribute__((used)) static void FUNC_5(struct cache *VAR_0, dm_cblock_t VAR_1)
{
 if (FUNC_4(FUNC_2(VAR_1), VAR_0->dirty_bitset)) {
  if (FUNC_0(&VAR_0->nr_dirty) == 0)
   FUNC_1(VAR_0->ti->table);
 }

 FUNC_3(VAR_0->policy, VAR_1);
}
