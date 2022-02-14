
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cache_set {int dummy; } ;
struct bkey {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct cache_set*,struct bkey const*,unsigned int) ;
 scalar_t__ FUNC_1 (struct bkey const*,unsigned int) ;

__attribute__((used)) static inline bool FUNC_2(struct cache_set *VAR_1, const struct bkey *VAR_2,
     unsigned int VAR_3)
{
 return (FUNC_1(VAR_2, VAR_3) < VAR_0) && FUNC_0(VAR_1, VAR_2, VAR_3);
}
