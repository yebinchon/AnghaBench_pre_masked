
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct skcipher_request {int dummy; } ;
struct crypto_skcipher {int dummy; } ;
struct crypto_cipher {int dummy; } ;
struct TYPE_2__ {int cia_decrypt; } ;


 TYPE_1__* FUNC_0 (struct crypto_cipher*) ;
 int FUNC_1 (struct skcipher_request*,struct crypto_cipher*,int ) ;
 struct crypto_skcipher* FUNC_2 (struct skcipher_request*) ;
 struct crypto_cipher* FUNC_3 (struct crypto_skcipher*) ;

__attribute__((used)) static int FUNC_4(struct skcipher_request *VAR_0)
{
 struct crypto_skcipher *VAR_1 = FUNC_2(VAR_0);
 struct crypto_cipher *VAR_2 = FUNC_3(VAR_1);

 return FUNC_1(VAR_0, VAR_2,
    FUNC_0(VAR_2)->cia_decrypt);
}
