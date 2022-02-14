
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct crypto_tfm {int dummy; } ;
struct crypto_aes_ctx {int dummy; } ;
struct crypto_aead {int dummy; } ;
struct chcr_gcm_ctx {int ghash_h; } ;
struct chcr_aead_ctx {unsigned int enckey_len; int key_ctx_hdr; int key; int salt; struct crypto_aead* sw_cipher; } ;
struct _key_ctx {int dummy; } ;
typedef int aes ;


 struct chcr_aead_ctx* FUNC_0 (int ) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (unsigned int,int ,int ,int ,int) ;
 struct chcr_gcm_ctx* FUNC_2 (struct chcr_aead_ctx*) ;
 int FUNC_3 (struct crypto_aead*) ;
 int FUNC_4 (struct crypto_aes_ctx*,int ,int ) ;
 int FUNC_5 (struct crypto_aes_ctx*,int const*,unsigned int) ;
 int FUNC_6 (struct crypto_aead*,int) ;
 int FUNC_7 (struct crypto_aead*) ;
 int FUNC_8 (struct crypto_aead*,int) ;
 int FUNC_9 (struct crypto_aead*,int const*,unsigned int) ;
 int FUNC_10 (struct crypto_tfm*,int ) ;
 scalar_t__ FUNC_11 (struct crypto_aead*) ;
 int FUNC_12 (int ,int const*,unsigned int) ;
 int FUNC_13 (int ,int ,int) ;
 int FUNC_14 (struct crypto_aes_ctx*,int) ;
 int FUNC_15 (char*,unsigned int) ;
 int FUNC_16 (unsigned int,int) ;

__attribute__((used)) static int FUNC_17(struct crypto_aead *VAR_13, const u8 *VAR_14,
      unsigned int VAR_15)
{
 struct chcr_aead_ctx *VAR_16 = FUNC_0(FUNC_3(VAR_13));
 struct chcr_gcm_ctx *VAR_17 = FUNC_2(VAR_16);
 unsigned int VAR_18;
 int VAR_19 = 0, VAR_20 = 0;
 struct crypto_aes_ctx VAR_21;

 VAR_16->enckey_len = 0;
 FUNC_6(VAR_16->sw_cipher, VAR_9);
 FUNC_8(VAR_16->sw_cipher, FUNC_7(VAR_13)
         & VAR_9);
 VAR_19 = FUNC_9(VAR_16->sw_cipher, VAR_14, VAR_15);
 FUNC_6(VAR_13, VAR_11);
 FUNC_8(VAR_13, FUNC_7(VAR_16->sw_cipher) &
         VAR_11);
 if (VAR_19)
  goto out;

 if (FUNC_11(VAR_13) == VAR_8 &&
     VAR_15 > 3) {
  VAR_15 -= 4;
  FUNC_12(VAR_16->salt, VAR_14 + VAR_15, 4);
 }
 if (VAR_15 == VAR_1) {
  VAR_18 = VAR_4;
 } else if (VAR_15 == VAR_2) {
  VAR_18 = VAR_5;
 } else if (VAR_15 == VAR_3) {
  VAR_18 = VAR_6;
 } else {
  FUNC_10((struct crypto_tfm *)VAR_13,
         VAR_10);
  FUNC_15("GCM: Invalid key length %d\n", VAR_15);
  VAR_19 = -VAR_12;
  goto out;
 }

 FUNC_12(VAR_16->key, VAR_14, VAR_15);
 VAR_16->enckey_len = VAR_15;
 VAR_20 = sizeof(struct _key_ctx) + FUNC_16(VAR_15, 16) +
  VAR_0;
 VAR_16->key_ctx_hdr = FUNC_1(VAR_18,
      VAR_7,
      0, 0,
      VAR_20 >> 4);



 VAR_19 = FUNC_5(&VAR_21, VAR_14, VAR_15);
 if (VAR_19) {
  VAR_16->enckey_len = 0;
  goto out;
 }
 FUNC_13(VAR_17->ghash_h, 0, VAR_0);
 FUNC_4(&VAR_21, VAR_17->ghash_h, VAR_17->ghash_h);
 FUNC_14(&VAR_21, sizeof(VAR_21));

out:
 return VAR_19;
}
