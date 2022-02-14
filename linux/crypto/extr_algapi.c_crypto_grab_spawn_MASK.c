
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct crypto_spawn {int inst; int frontend; } ;
struct crypto_alg {int dummy; } ;


 scalar_t__ FUNC_0 (struct crypto_alg*) ;
 int FUNC_1 (struct crypto_alg*) ;
 struct crypto_alg* FUNC_2 (char const*,int ,int ,int ) ;
 int FUNC_3 (struct crypto_spawn*,struct crypto_alg*,int ,int ) ;
 int FUNC_4 (struct crypto_alg*) ;

int FUNC_5(struct crypto_spawn *VAR_0, const char *VAR_1,
        u32 VAR_2, u32 VAR_3)
{
 struct crypto_alg *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_2(VAR_1, VAR_0->frontend, VAR_2, VAR_3);
 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);

 VAR_5 = FUNC_3(VAR_0, VAR_4, VAR_0->inst, VAR_3);
 FUNC_4(VAR_4);
 return VAR_5;
}
