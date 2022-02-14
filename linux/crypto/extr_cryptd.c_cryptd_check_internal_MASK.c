
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rtattr {int dummy; } ;
struct crypto_attr_type {int type; int mask; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct crypto_attr_type*) ;
 struct crypto_attr_type* FUNC_1 (struct rtattr**) ;

__attribute__((used)) static inline void FUNC_2(struct rtattr **VAR_1, u32 *VAR_2,
      u32 *VAR_3)
{
 struct crypto_attr_type *VAR_4;

 VAR_4 = FUNC_1(VAR_1);
 if (FUNC_0(VAR_4))
  return;

 *VAR_2 |= VAR_4->type & VAR_0;
 *VAR_3 |= VAR_4->mask & VAR_0;
}
