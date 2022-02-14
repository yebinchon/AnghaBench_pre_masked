
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct crypto_alg {int dummy; } ;
struct TYPE_3__ {struct crypto_alg* __crt_alg; } ;
struct crypto_aead {TYPE_1__ base; } ;
struct aead_request {unsigned int cryptlen; } ;
struct TYPE_4__ {int (* encrypt ) (struct aead_request*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (struct crypto_aead*) ;
 int FUNC_1 (struct crypto_aead*) ;
 struct crypto_aead* FUNC_2 (struct aead_request*) ;
 int FUNC_3 (unsigned int,struct crypto_alg*,int) ;
 int FUNC_4 (struct crypto_alg*) ;
 int FUNC_5 (struct aead_request*) ;

int FUNC_6(struct aead_request *VAR_2)
{
 struct crypto_aead *VAR_3 = FUNC_2(VAR_2);
 struct crypto_alg *VAR_4 = VAR_3->base.__crt_alg;
 unsigned int VAR_5 = VAR_2->cryptlen;
 int VAR_6;

 FUNC_4(VAR_4);
 if (FUNC_1(VAR_3) & VAR_0)
  VAR_6 = -VAR_1;
 else
  VAR_6 = FUNC_0(VAR_3)->encrypt(VAR_2);
 FUNC_3(VAR_5, VAR_4, VAR_6);
 return VAR_6;
}
