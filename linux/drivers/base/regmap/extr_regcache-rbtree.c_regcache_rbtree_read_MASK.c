
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {unsigned int reg_stride; } ;
struct regcache_rbtree_node {unsigned int base_reg; int cache_present; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (struct regmap*,struct regcache_rbtree_node*,unsigned int) ;
 struct regcache_rbtree_node* FUNC_1 (struct regmap*,unsigned int) ;
 int FUNC_2 (unsigned int,int ) ;

__attribute__((used)) static int FUNC_3(struct regmap *VAR_1,
    unsigned int VAR_2, unsigned int *VAR_3)
{
 struct regcache_rbtree_node *VAR_4;
 unsigned int VAR_5;

 VAR_4 = FUNC_1(VAR_1, VAR_2);
 if (VAR_4) {
  VAR_5 = (VAR_2 - VAR_4->base_reg) / VAR_1->reg_stride;
  if (!FUNC_2(VAR_5, VAR_4->cache_present))
   return -VAR_0;
  *VAR_3 = FUNC_0(VAR_1, VAR_4, VAR_5);
 } else {
  return -VAR_0;
 }

 return 0;
}
