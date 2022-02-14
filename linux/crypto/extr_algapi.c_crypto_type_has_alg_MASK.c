
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct crypto_type {int dummy; } ;
struct crypto_alg {int dummy; } ;


 int FUNC_0 (struct crypto_alg*) ;
 struct crypto_alg* FUNC_1 (char const*,struct crypto_type const*,int ,int ) ;
 int FUNC_2 (struct crypto_alg*) ;

int FUNC_3(const char *VAR_0, const struct crypto_type *VAR_1,
   u32 VAR_2, u32 VAR_3)
{
 int VAR_4 = 0;
 struct crypto_alg *VAR_5 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3);

 if (!FUNC_0(VAR_5)) {
  FUNC_2(VAR_5);
  VAR_4 = 1;
 }

 return VAR_4;
}
