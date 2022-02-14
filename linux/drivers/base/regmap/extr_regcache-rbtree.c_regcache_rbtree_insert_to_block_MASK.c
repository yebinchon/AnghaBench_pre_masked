
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u8 ;
struct regmap {unsigned int reg_stride; unsigned int cache_word_size; } ;
struct regcache_rbtree_node {unsigned int base_reg; unsigned long* block; unsigned int blklen; unsigned long* cache_present; } ;


 int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (unsigned long*,unsigned long*,unsigned int,unsigned int) ;
 int FUNC_2 (unsigned long*) ;
 void* FUNC_3 (unsigned long*,int,int ) ;
 int FUNC_4 (unsigned long*,unsigned long*,int) ;
 int FUNC_5 (unsigned long*,int ,int) ;
 int FUNC_6 (struct regmap*,struct regcache_rbtree_node*,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_7(struct regmap *VAR_2,
        struct regcache_rbtree_node *VAR_3,
        unsigned int VAR_4,
        unsigned int VAR_5,
        unsigned int VAR_6,
        unsigned int VAR_7)
{
 unsigned int VAR_8;
 unsigned int VAR_9, VAR_10;
 unsigned long *VAR_11;
 u8 *VAR_12;

 VAR_8 = (VAR_5 - VAR_4) / VAR_2->reg_stride + 1;
 VAR_9 = (VAR_6 - VAR_4) / VAR_2->reg_stride;
 VAR_10 = (VAR_3->base_reg - VAR_4) / VAR_2->reg_stride;

 VAR_12 = FUNC_3(VAR_3->block,
         VAR_8 * VAR_2->cache_word_size,
         VAR_1);
 if (!VAR_12)
  return -VAR_0;

 if (FUNC_0(VAR_8) > FUNC_0(VAR_3->blklen)) {
  VAR_11 = FUNC_3(VAR_3->cache_present,
       FUNC_0(VAR_8) * sizeof(*VAR_11),
       VAR_1);
  if (!VAR_11) {
   FUNC_2(VAR_12);
   return -VAR_0;
  }

  FUNC_5(VAR_11 + FUNC_0(VAR_3->blklen), 0,
         (FUNC_0(VAR_8) - FUNC_0(VAR_3->blklen))
         * sizeof(*VAR_11));
 } else {
  VAR_11 = VAR_3->cache_present;
 }


 if (VAR_9 == 0) {
  FUNC_4(VAR_12 + VAR_10 * VAR_2->cache_word_size,
   VAR_12, VAR_3->blklen * VAR_2->cache_word_size);
  FUNC_1(VAR_11, VAR_11, VAR_10, VAR_8);
 }


 VAR_3->block = VAR_12;
 VAR_3->blklen = VAR_8;
 VAR_3->base_reg = VAR_4;
 VAR_3->cache_present = VAR_11;

 FUNC_6(VAR_2, VAR_3, VAR_9, VAR_7);
 return 0;
}
