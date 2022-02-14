
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cache {int dirty_bitset; int cache_size; int cmd; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct cache*) ;
 int FUNC_3 (struct cache*,char*,int) ;

__attribute__((used)) static int FUNC_4(struct cache *VAR_2)
{
 int VAR_3;

 if (FUNC_2(VAR_2) >= VAR_0)
  return -VAR_1;

 VAR_3 = FUNC_0(VAR_2->cmd, FUNC_1(VAR_2->cache_size), VAR_2->dirty_bitset);
 if (VAR_3)
  FUNC_3(VAR_2, "dm_cache_set_dirty_bits", VAR_3);

 return VAR_3;
}
