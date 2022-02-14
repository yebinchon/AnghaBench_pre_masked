
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct crypto_ablkcipher {int dummy; } ;
struct TYPE_2__ {unsigned int keylen; int key; } ;
struct atmel_aes_xts_ctx {TYPE_1__ base; int key2; } ;


 struct atmel_aes_xts_ctx* FUNC_0 (struct crypto_ablkcipher*) ;
 int FUNC_1 (struct crypto_ablkcipher*) ;
 int FUNC_2 (int ,int const*,unsigned int) ;
 int FUNC_3 (int ,int const*,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct crypto_ablkcipher *VAR_0, const u8 *VAR_1,
    unsigned int VAR_2)
{
 struct atmel_aes_xts_ctx *VAR_3 = FUNC_0(VAR_0);
 int VAR_4;

 VAR_4 = FUNC_3(FUNC_1(VAR_0), VAR_1, VAR_2);
 if (VAR_4)
  return VAR_4;

 FUNC_2(VAR_3->base.key, VAR_1, VAR_2/2);
 FUNC_2(VAR_3->key2, VAR_1 + VAR_2/2, VAR_2/2);
 VAR_3->base.keylen = VAR_2/2;

 return 0;
}
