
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {struct flexi_crypto_context* fctx; } ;
struct nitrox_crypto_ctx {TYPE_1__ u; } ;
struct TYPE_4__ {int iv; } ;
struct flexi_crypto_context {TYPE_2__ crypto; } ;
struct crypto_tfm {int dummy; } ;
struct crypto_skcipher {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct crypto_skcipher*,int ) ;
 struct crypto_tfm* FUNC_1 (struct crypto_skcipher*) ;
 struct nitrox_crypto_ctx* FUNC_2 (struct crypto_tfm*) ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (int ,int const*,unsigned int) ;
 int FUNC_5 (struct crypto_skcipher*,int,int const*,unsigned int) ;

__attribute__((used)) static int FUNC_6(struct crypto_skcipher *VAR_3,
      const u8 *VAR_4, unsigned int VAR_5)
{
 struct crypto_tfm *VAR_6 = FUNC_1(VAR_3);
 struct nitrox_crypto_ctx *VAR_7 = FUNC_2(VAR_6);
 struct flexi_crypto_context *VAR_8;
 int VAR_9;

 if (VAR_5 < VAR_1)
  return -VAR_2;

 VAR_8 = VAR_7->u.fctx;

 FUNC_4(VAR_8->crypto.iv, VAR_4 + (VAR_5 - VAR_1),
        VAR_1);

 VAR_5 -= VAR_1;

 VAR_9 = FUNC_3(VAR_5);
 if (VAR_9 < 0) {
  FUNC_0(VAR_3, VAR_0);
  return -VAR_2;
 }
 return FUNC_5(VAR_3, VAR_9, VAR_4, VAR_5);
}
