
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct crypto_tfm {int dummy; } ;
struct crypto_aead {int dummy; } ;
struct chcr_aead_ctx {int salt; struct crypto_aead* sw_cipher; scalar_t__ enckey_len; } ;


 struct chcr_aead_ctx* FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct crypto_aead*) ;
 int FUNC_2 (struct crypto_aead*,int const*,unsigned int) ;
 int FUNC_3 (struct crypto_aead*,int) ;
 int FUNC_4 (struct crypto_aead*) ;
 int FUNC_5 (struct crypto_aead*,int) ;
 int FUNC_6 (struct crypto_aead*,int const*,unsigned int) ;
 int FUNC_7 (struct crypto_tfm*,int ) ;
 int FUNC_8 (int ,int const*,int) ;

__attribute__((used)) static int FUNC_9(struct crypto_aead *VAR_4, const u8 *VAR_5,
        unsigned int VAR_6)
{
 struct chcr_aead_ctx *VAR_7 = FUNC_0(FUNC_1(VAR_4));
 int VAR_8;

 if (VAR_6 < 3) {
  FUNC_7((struct crypto_tfm *)VAR_4,
         VAR_1);
  VAR_7->enckey_len = 0;
  return -VAR_3;
 }
 FUNC_3(VAR_7->sw_cipher, VAR_0);
 FUNC_5(VAR_7->sw_cipher, FUNC_4(VAR_4) &
         VAR_0);
 VAR_8 = FUNC_6(VAR_7->sw_cipher, VAR_5, VAR_6);
 FUNC_3(VAR_4, VAR_2);
 FUNC_5(VAR_4, FUNC_4(VAR_7->sw_cipher) &
         VAR_2);
 if (VAR_8)
  return VAR_8;
 VAR_6 -= 3;
 FUNC_8(VAR_7->salt, VAR_5 + VAR_6, 3);
 return FUNC_2(VAR_4, VAR_5, VAR_6);
}
