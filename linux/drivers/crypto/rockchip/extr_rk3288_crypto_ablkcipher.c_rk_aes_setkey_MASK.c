
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct rk_cipher_ctx {unsigned int keylen; TYPE_1__* dev; } ;
struct crypto_tfm {int dummy; } ;
struct crypto_ablkcipher {int dummy; } ;
struct TYPE_2__ {scalar_t__ reg; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct crypto_ablkcipher*,int ) ;
 struct crypto_tfm* FUNC_1 (struct crypto_ablkcipher*) ;
 struct rk_cipher_ctx* FUNC_2 (struct crypto_tfm*) ;
 int FUNC_3 (scalar_t__,int const*,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct crypto_ablkcipher *VAR_6,
    const u8 *VAR_7, unsigned int VAR_8)
{
 struct crypto_tfm *VAR_9 = FUNC_1(VAR_6);
 struct rk_cipher_ctx *VAR_10 = FUNC_2(VAR_9);

 if (VAR_8 != VAR_0 && VAR_8 != VAR_1 &&
     VAR_8 != VAR_2) {
  FUNC_0(VAR_6, VAR_3);
  return -VAR_4;
 }
 VAR_10->keylen = VAR_8;
 FUNC_3(VAR_10->dev->reg + VAR_5, VAR_7, VAR_8);
 return 0;
}
