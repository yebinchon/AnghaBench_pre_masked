
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {int nonce; } ;
struct TYPE_4__ {TYPE_1__ ccm; } ;
struct nx_crypto_ctx {TYPE_2__ priv; } ;
struct crypto_aead {int base; } ;


 int VAR_0 ;
 int FUNC_0 (struct crypto_aead*,int const*,unsigned int) ;
 struct nx_crypto_ctx* FUNC_1 (int *) ;
 int FUNC_2 (int ,int const*,int) ;

__attribute__((used)) static int FUNC_3(struct crypto_aead *VAR_1,
      const u8 *VAR_2,
      unsigned int VAR_3)
{
 struct nx_crypto_ctx *VAR_4 = FUNC_1(&VAR_1->base);

 if (VAR_3 < 3)
  return -VAR_0;

 VAR_3 -= 3;

 FUNC_2(VAR_4->priv.ccm.nonce, VAR_2 + VAR_3, 3);

 return FUNC_0(VAR_1, VAR_2, VAR_3);
}
