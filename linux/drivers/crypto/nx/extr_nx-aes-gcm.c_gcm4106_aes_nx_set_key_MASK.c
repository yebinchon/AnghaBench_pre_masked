
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {char* nonce; } ;
struct TYPE_4__ {TYPE_1__ gcm; } ;
struct nx_crypto_ctx {TYPE_2__ priv; } ;
struct crypto_aead {int dummy; } ;


 int VAR_0 ;
 struct nx_crypto_ctx* FUNC_0 (struct crypto_aead*) ;
 int FUNC_1 (struct crypto_aead*,int const*,unsigned int) ;
 int FUNC_2 (char*,int const*,int) ;

__attribute__((used)) static int FUNC_3(struct crypto_aead *VAR_1,
      const u8 *VAR_2,
      unsigned int VAR_3)
{
 struct nx_crypto_ctx *VAR_4 = FUNC_0(VAR_1);
 char *VAR_5 = VAR_4->priv.gcm.nonce;
 int VAR_6;

 if (VAR_3 < 4)
  return -VAR_0;

 VAR_3 -= 4;

 VAR_6 = FUNC_1(VAR_1, VAR_2, VAR_3);
 if (VAR_6)
  goto out;

 FUNC_2(VAR_5, VAR_2 + VAR_3, 4);
out:
 return VAR_6;
}
