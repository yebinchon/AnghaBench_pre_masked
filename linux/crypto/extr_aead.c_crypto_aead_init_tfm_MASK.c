
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct crypto_tfm {int dummy; } ;
struct TYPE_2__ {int exit; } ;
struct crypto_aead {TYPE_1__ base; int authsize; } ;
struct aead_alg {int (* init ) (struct crypto_aead*) ;scalar_t__ exit; int maxauthsize; } ;


 int VAR_0 ;
 struct crypto_aead* FUNC_0 (struct crypto_tfm*) ;
 struct aead_alg* FUNC_1 (struct crypto_aead*) ;
 int VAR_1 ;
 int FUNC_2 (struct crypto_aead*,int ) ;
 int FUNC_3 (struct crypto_aead*) ;

__attribute__((used)) static int FUNC_4(struct crypto_tfm *VAR_2)
{
 struct crypto_aead *VAR_3 = FUNC_0(VAR_2);
 struct aead_alg *VAR_4 = FUNC_1(VAR_3);

 FUNC_2(VAR_3, VAR_0);

 VAR_3->authsize = VAR_4->maxauthsize;

 if (VAR_4->exit)
  VAR_3->base.exit = VAR_1;

 if (VAR_4->init)
  return VAR_4->init(VAR_3);

 return 0;
}
