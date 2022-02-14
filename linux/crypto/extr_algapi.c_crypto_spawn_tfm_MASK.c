
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct crypto_tfm {int cra_flags; } ;
struct crypto_spawn {int dummy; } ;
struct crypto_alg {int cra_flags; } ;


 int VAR_0 ;
 struct crypto_tfm* FUNC_0 (struct crypto_tfm*) ;
 struct crypto_tfm* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct crypto_tfm*) ;
 struct crypto_tfm* FUNC_3 (struct crypto_tfm*,int,int) ;
 int FUNC_4 (struct crypto_tfm*) ;
 struct crypto_tfm* FUNC_5 (struct crypto_spawn*) ;
 scalar_t__ FUNC_6 (int) ;

struct crypto_tfm *FUNC_7(struct crypto_spawn *VAR_1, u32 VAR_2,
        u32 VAR_3)
{
 struct crypto_alg *VAR_4;
 struct crypto_tfm *VAR_5;

 VAR_4 = FUNC_5(VAR_1);
 if (FUNC_2(VAR_4))
  return FUNC_0(VAR_4);

 VAR_5 = FUNC_1(-VAR_0);
 if (FUNC_6((VAR_4->cra_flags ^ VAR_2) & VAR_3))
  goto out_put_alg;

 VAR_5 = FUNC_3(VAR_4, VAR_2, VAR_3);
 if (FUNC_2(VAR_5))
  goto out_put_alg;

 return VAR_5;

out_put_alg:
 FUNC_4(VAR_4);
 return VAR_5;
}
