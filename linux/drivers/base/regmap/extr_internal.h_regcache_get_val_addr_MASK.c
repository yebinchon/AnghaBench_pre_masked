
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {unsigned int cache_word_size; } ;



__attribute__((used)) static inline const void *FUNC_0(struct regmap *VAR_0,
      const void *VAR_1,
      unsigned int VAR_2)
{
 return VAR_1 + (VAR_0->cache_word_size * VAR_2);
}
