
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct rk_cipher_ctx {unsigned int keylen; TYPE_1__* dev; } ;
struct crypto_ablkcipher {int dummy; } ;
struct TYPE_2__ {scalar_t__ reg; } ;


 scalar_t__ VAR_0 ;
 struct rk_cipher_ctx* FUNC_0 (struct crypto_ablkcipher*) ;
 int FUNC_1 (scalar_t__,int const*,unsigned int) ;
 int FUNC_2 (struct crypto_ablkcipher*,int const*) ;

__attribute__((used)) static int FUNC_3(struct crypto_ablkcipher *VAR_1,
     const u8 *VAR_2, unsigned int VAR_3)
{
 struct rk_cipher_ctx *VAR_4 = FUNC_0(VAR_1);
 int VAR_5;

 VAR_5 = FUNC_2(VAR_1, VAR_2);
 if (VAR_5)
  return VAR_5;

 VAR_4->keylen = VAR_3;
 FUNC_1(VAR_4->dev->reg + VAR_0, VAR_2, VAR_3);
 return 0;
}
