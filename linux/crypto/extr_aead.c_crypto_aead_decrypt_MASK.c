
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
struct TYPE_4__ {int (* decrypt ) (struct aead_request*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_0 (struct crypto_aead*) ;
 scalar_t__ FUNC_1 (struct crypto_aead*) ;
 int FUNC_2 (struct crypto_aead*) ;
 struct crypto_aead* FUNC_3 (struct aead_request*) ;
 int FUNC_4 (unsigned int,struct crypto_alg*,int) ;
 int FUNC_5 (struct crypto_alg*) ;
 int FUNC_6 (struct aead_request*) ;

int FUNC_7(struct aead_request *VAR_3)
{
 struct crypto_aead *VAR_4 = FUNC_3(VAR_3);
 struct crypto_alg *VAR_5 = VAR_4->base.__crt_alg;
 unsigned int VAR_6 = VAR_3->cryptlen;
 int VAR_7;

 FUNC_5(VAR_5);
 if (FUNC_2(VAR_4) & VAR_0)
  VAR_7 = -VAR_2;
 else if (VAR_3->cryptlen < FUNC_1(VAR_4))
  VAR_7 = -VAR_1;
 else
  VAR_7 = FUNC_0(VAR_4)->decrypt(VAR_3);
 FUNC_4(VAR_6, VAR_5, VAR_7);
 return VAR_7;
}
