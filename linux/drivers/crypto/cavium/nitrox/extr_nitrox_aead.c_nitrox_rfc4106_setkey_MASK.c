
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
struct crypto_aead {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 struct nitrox_crypto_ctx* FUNC_0 (struct crypto_aead*) ;
 int FUNC_1 (int ,int const*,unsigned int) ;
 int FUNC_2 (struct crypto_aead*,int const*,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct crypto_aead *VAR_2, const u8 *VAR_3,
     unsigned int VAR_4)
{
 struct nitrox_crypto_ctx *VAR_5 = FUNC_0(VAR_2);
 struct flexi_crypto_context *VAR_6 = VAR_5->u.fctx;
 int VAR_7;

 if (VAR_4 < VAR_1)
  return -VAR_0;

 VAR_4 -= VAR_1;
 VAR_7 = FUNC_2(VAR_2, VAR_3, VAR_4);
 if (VAR_7)
  return VAR_7;

 FUNC_1(VAR_6->crypto.iv, VAR_3 + VAR_4, VAR_1);
 return 0;
}
