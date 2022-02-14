
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct crypto_type {int maskset; int type; int maskclear; } ;
struct crypto_alg {int dummy; } ;


 struct crypto_alg* FUNC_0 (char const*,int ,int ) ;

struct crypto_alg *FUNC_1(const char *VAR_0,
       const struct crypto_type *VAR_1,
       u32 VAR_2, u32 VAR_3)
{
 if (VAR_1) {
  VAR_2 &= VAR_1->maskclear;
  VAR_3 &= VAR_1->maskclear;
  VAR_2 |= VAR_1->type;
  VAR_3 |= VAR_1->maskset;
 }

 return FUNC_0(VAR_0, VAR_2, VAR_3);
}
