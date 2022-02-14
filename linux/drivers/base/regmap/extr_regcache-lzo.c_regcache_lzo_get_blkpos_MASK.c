
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {unsigned int reg_stride; unsigned int cache_word_size; int cache_size_raw; } ;


 unsigned int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct regmap*) ;

__attribute__((used)) static inline int FUNC_2(struct regmap *VAR_0,
       unsigned int VAR_1)
{
 return (VAR_1 / VAR_0->reg_stride) %
      (FUNC_0(VAR_0->cache_size_raw,
      FUNC_1(VAR_0)) /
       VAR_0->cache_word_size);
}
