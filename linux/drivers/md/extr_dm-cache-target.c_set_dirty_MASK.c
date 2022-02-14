
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cache {int policy; int nr_dirty; int dirty_bitset; } ;
typedef int dm_cblock_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void FUNC_4(struct cache *VAR_0, dm_cblock_t VAR_1)
{
 if (!FUNC_3(FUNC_1(VAR_1), VAR_0->dirty_bitset)) {
  FUNC_0(&VAR_0->nr_dirty);
  FUNC_2(VAR_0->policy, VAR_1);
 }
}
