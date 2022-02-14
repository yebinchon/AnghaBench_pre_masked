
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regmap {int num_reg_defaults; TYPE_1__* reg_defaults; struct regcache_rbtree_ctx* cache; } ;
struct regcache_rbtree_ctx {int * cached_rbnode; int root; } ;
struct TYPE_2__ {int def; int reg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct regcache_rbtree_ctx* FUNC_0 (int,int ) ;
 int FUNC_1 (struct regmap*) ;
 int FUNC_2 (struct regmap*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct regmap *VAR_3)
{
 struct regcache_rbtree_ctx *VAR_4;
 int VAR_5;
 int VAR_6;

 VAR_3->cache = FUNC_0(sizeof *VAR_4, VAR_1);
 if (!VAR_3->cache)
  return -VAR_0;

 VAR_4 = VAR_3->cache;
 VAR_4->root = VAR_2;
 VAR_4->cached_rbnode = ((void*)0);

 for (VAR_5 = 0; VAR_5 < VAR_3->num_reg_defaults; VAR_5++) {
  VAR_6 = FUNC_2(VAR_3,
         VAR_3->reg_defaults[VAR_5].reg,
         VAR_3->reg_defaults[VAR_5].def);
  if (VAR_6)
   goto err;
 }

 return 0;

err:
 FUNC_1(VAR_3);
 return VAR_6;
}
