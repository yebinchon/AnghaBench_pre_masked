
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cache_set {struct cache** cache; } ;
struct cache {int dummy; } ;
struct bkey {int dummy; } ;


 size_t FUNC_0 (struct bkey const*,unsigned int) ;

__attribute__((used)) static inline struct cache *FUNC_1(struct cache_set *VAR_0,
          const struct bkey *VAR_1,
          unsigned int VAR_2)
{
 return VAR_0->cache[FUNC_0(VAR_1, VAR_2)];
}
