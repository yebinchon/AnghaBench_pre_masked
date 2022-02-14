
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {int reg_stride; } ;
struct regcache_rbtree_node {unsigned int base_reg; int blklen; } ;



__attribute__((used)) static inline void FUNC_0(
 struct regmap *VAR_0,
 struct regcache_rbtree_node *VAR_1,
 unsigned int *VAR_2, unsigned int *VAR_3)
{
 *VAR_2 = VAR_1->base_reg;
 *VAR_3 = VAR_1->base_reg + ((VAR_1->blklen - 1) * VAR_0->reg_stride);
}
