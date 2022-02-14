
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct crypto_aead {int dummy; } ;
struct atmel_aes_base_ctx {unsigned int keylen; int key; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct atmel_aes_base_ctx* FUNC_0 (struct crypto_aead*) ;
 int FUNC_1 (struct crypto_aead*,int ) ;
 int FUNC_2 (int ,int const*,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct crypto_aead *VAR_5, const u8 *VAR_6,
    unsigned int VAR_7)
{
 struct atmel_aes_base_ctx *VAR_8 = FUNC_0(VAR_5);

 if (VAR_7 != VAR_2 &&
     VAR_7 != VAR_1 &&
     VAR_7 != VAR_0) {
  FUNC_1(VAR_5, VAR_3);
  return -VAR_4;
 }

 FUNC_2(VAR_8->key, VAR_6, VAR_7);
 VAR_8->keylen = VAR_7;

 return 0;
}
