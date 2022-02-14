
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cipher_tfm {int cit_decrypt_one; int cit_encrypt_one; int cit_setkey; } ;
struct crypto_tfm {TYPE_1__* __crt_alg; struct cipher_tfm crt_cipher; } ;
struct cipher_alg {int cia_decrypt; int cia_encrypt; } ;
struct TYPE_2__ {struct cipher_alg cra_cipher; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct crypto_tfm*) ;
 int VAR_2 ;

int FUNC_1(struct crypto_tfm *VAR_3)
{
 struct cipher_tfm *VAR_4 = &VAR_3->crt_cipher;
 struct cipher_alg *VAR_5 = &VAR_3->__crt_alg->cra_cipher;

 VAR_4->cit_setkey = VAR_2;
 VAR_4->cit_encrypt_one = FUNC_0(VAR_3) ?
  VAR_1 : VAR_5->cia_encrypt;
 VAR_4->cit_decrypt_one = FUNC_0(VAR_3) ?
  VAR_0 : VAR_5->cia_decrypt;

 return 0;
}
