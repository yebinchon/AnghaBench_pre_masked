
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {struct flexi_crypto_context* fctx; } ;
struct nitrox_crypto_ctx {TYPE_1__ u; } ;
struct TYPE_5__ {int key2; } ;
struct TYPE_6__ {TYPE_2__ u; } ;
struct flexi_crypto_context {TYPE_3__ auth; } ;
struct crypto_tfm {int dummy; } ;
struct crypto_skcipher {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct crypto_skcipher*,int ) ;
 struct crypto_tfm* FUNC_1 (struct crypto_skcipher*) ;
 struct nitrox_crypto_ctx* FUNC_2 (struct crypto_tfm*) ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (int ,int const*,unsigned int) ;
 int FUNC_5 (struct crypto_skcipher*,int,int const*,unsigned int) ;
 int FUNC_6 (struct crypto_tfm*,int const*,unsigned int) ;

__attribute__((used)) static int FUNC_7(struct crypto_skcipher *VAR_2,
     const u8 *VAR_3, unsigned int VAR_4)
{
 struct crypto_tfm *VAR_5 = FUNC_1(VAR_2);
 struct nitrox_crypto_ctx *VAR_6 = FUNC_2(VAR_5);
 struct flexi_crypto_context *VAR_7;
 int VAR_8, VAR_9;

 VAR_9 = FUNC_6(VAR_5, VAR_3, VAR_4);
 if (VAR_9)
  return VAR_9;

 VAR_4 /= 2;

 VAR_8 = FUNC_3(VAR_4);
 if (VAR_8 < 0) {
  FUNC_0(VAR_2, VAR_0);
  return -VAR_1;
 }

 VAR_7 = VAR_6->u.fctx;

 FUNC_4(VAR_7->auth.u.key2, (VAR_3 + VAR_4), VAR_4);

 return FUNC_5(VAR_2, VAR_8, VAR_3, VAR_4);
}
