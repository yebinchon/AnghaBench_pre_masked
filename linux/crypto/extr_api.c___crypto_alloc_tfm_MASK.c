
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct crypto_tfm {int exit; struct crypto_alg* __crt_alg; } ;
struct crypto_alg {int (* cra_init ) (struct crypto_tfm*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 struct crypto_tfm* FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (struct crypto_alg*,int ,int ) ;
 int FUNC_2 (struct crypto_tfm*) ;
 int FUNC_3 (struct crypto_tfm*,int ,int ) ;
 int FUNC_4 (struct crypto_alg*) ;
 int FUNC_5 (struct crypto_tfm*) ;
 struct crypto_tfm* FUNC_6 (unsigned int,int ) ;
 int FUNC_7 (struct crypto_tfm*) ;

struct crypto_tfm *FUNC_8(struct crypto_alg *VAR_3, u32 VAR_4,
          u32 VAR_5)
{
 struct crypto_tfm *VAR_6 = ((void*)0);
 unsigned int VAR_7;
 int VAR_8 = -VAR_1;

 VAR_7 = sizeof(*VAR_6) + FUNC_1(VAR_3, VAR_4, VAR_5);
 VAR_6 = FUNC_6(VAR_7, VAR_2);
 if (VAR_6 == ((void*)0))
  goto out_err;

 VAR_6->__crt_alg = VAR_3;

 VAR_8 = FUNC_3(VAR_6, VAR_4, VAR_5);
 if (VAR_8)
  goto out_free_tfm;

 if (!VAR_6->exit && VAR_3->cra_init && (VAR_8 = VAR_3->cra_init(VAR_6)))
  goto cra_init_failed;

 goto out;

cra_init_failed:
 FUNC_2(VAR_6);
out_free_tfm:
 if (VAR_8 == -VAR_0)
  FUNC_4(VAR_3);
 FUNC_5(VAR_6);
out_err:
 VAR_6 = FUNC_0(VAR_8);
out:
 return VAR_6;
}
