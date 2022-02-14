
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct omap_aes_ctx {unsigned int keylen; int nonce; int key; } ;
struct crypto_aead {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 struct omap_aes_ctx* FUNC_0 (struct crypto_aead*) ;
 int FUNC_1 (int ,int const*,int) ;

int FUNC_2(struct crypto_aead *VAR_4, const u8 *VAR_5,
       unsigned int VAR_6)
{
 struct omap_aes_ctx *VAR_7 = FUNC_0(VAR_4);

 if (VAR_6 < 4)
  return -VAR_3;

 VAR_6 -= 4;
 if (VAR_6 != VAR_0 && VAR_6 != VAR_1 &&
     VAR_6 != VAR_2)
  return -VAR_3;

 FUNC_1(VAR_7->key, VAR_5, VAR_6);
 FUNC_1(VAR_7->nonce, VAR_5 + VAR_6, 4);
 VAR_7->keylen = VAR_6;

 return 0;
}
