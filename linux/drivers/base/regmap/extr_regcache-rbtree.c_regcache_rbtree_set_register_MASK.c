
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {int dummy; } ;
struct regcache_rbtree_node {int block; int cache_present; } ;


 int FUNC_0 (struct regmap*,int ,unsigned int,unsigned int) ;
 int FUNC_1 (unsigned int,int ) ;

__attribute__((used)) static void FUNC_2(struct regmap *VAR_0,
      struct regcache_rbtree_node *VAR_1,
      unsigned int VAR_2, unsigned int VAR_3)
{
 FUNC_1(VAR_2, VAR_1->cache_present);
 FUNC_0(VAR_0, VAR_1->block, VAR_2, VAR_3);
}
