
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cache {int dirty_bitset; } ;
typedef int dm_cblock_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static bool FUNC_2(struct cache *VAR_0, dm_cblock_t VAR_1)
{
 return FUNC_1(FUNC_0(VAR_1), VAR_0->dirty_bitset);
}
