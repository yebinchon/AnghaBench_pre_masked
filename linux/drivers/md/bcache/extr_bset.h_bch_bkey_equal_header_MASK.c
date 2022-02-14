
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bkey {int dummy; } ;


 scalar_t__ FUNC_0 (struct bkey const*) ;
 scalar_t__ FUNC_1 (struct bkey const*) ;
 scalar_t__ FUNC_2 (struct bkey const*) ;

__attribute__((used)) static inline bool FUNC_3(const struct bkey *VAR_0,
      const struct bkey *VAR_1)
{
 return (FUNC_1(VAR_0) == FUNC_1(VAR_1) &&
  FUNC_2(VAR_0) == FUNC_2(VAR_1) &&
  FUNC_0(VAR_0) == FUNC_0(VAR_1));
}
