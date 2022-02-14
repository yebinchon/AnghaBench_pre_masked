
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct crypto_authenc_keys {scalar_t__ enckeylen; scalar_t__ enckey; } ;
struct crypto_aead {int dummy; } ;
struct chcr_authenc_ctx {int auth_mode; int dec_rrkey; } ;
struct chcr_aead_ctx {int enckey_len; int key_ctx_hdr; int key; int nonce; struct crypto_aead* sw_cipher; } ;
struct _key_ctx {int dummy; } ;
typedef int keys ;


 struct chcr_aead_ctx* FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct chcr_authenc_ctx* FUNC_1 (struct chcr_aead_ctx*) ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int FUNC_2 (unsigned char,int ,int ,int ,int) ;
 int FUNC_3 (struct crypto_aead*) ;
 int FUNC_4 (struct crypto_aead*,int) ;
 int FUNC_5 (struct crypto_aead*) ;
 int FUNC_6 (struct crypto_aead*,int) ;
 int FUNC_7 (struct crypto_aead*,int const*,unsigned int) ;
 scalar_t__ FUNC_8 (struct crypto_authenc_keys*,int const*,unsigned int) ;
 unsigned int FUNC_9 (struct crypto_aead*) ;
 int FUNC_10 (int ,int ,int) ;
 int FUNC_11 (int ,scalar_t__,scalar_t__) ;
 int FUNC_12 (struct crypto_authenc_keys*,int) ;
 int FUNC_13 (char*,scalar_t__) ;
 int FUNC_14 (int,int) ;

__attribute__((used)) static int FUNC_15(struct crypto_aead *VAR_17,
     const u8 *VAR_18, unsigned int VAR_19)
{
 struct chcr_aead_ctx *VAR_20 = FUNC_0(FUNC_3(VAR_17));
 struct chcr_authenc_ctx *VAR_21 = FUNC_1(VAR_20);
 struct crypto_authenc_keys VAR_22;
 int VAR_23;

 unsigned int VAR_24;
 int VAR_25 = 0;
 unsigned char VAR_26 = 0;

 FUNC_4(VAR_20->sw_cipher, VAR_12);
 FUNC_6(VAR_20->sw_cipher, FUNC_5(VAR_17)
         & VAR_12);
 VAR_23 = FUNC_7(VAR_20->sw_cipher, VAR_18, VAR_19);
 FUNC_4(VAR_17, VAR_14);
 FUNC_6(VAR_17, FUNC_5(VAR_20->sw_cipher)
         & VAR_14);
 if (VAR_23)
  goto out;

 if (FUNC_8(&VAR_22, VAR_18, VAR_19) != 0) {
  FUNC_6(VAR_17, VAR_13);
  goto out;
 }
 VAR_24 = FUNC_9(VAR_17);
 if (VAR_24 == VAR_11 ||
     VAR_24 == VAR_10) {
  if (VAR_22.enckeylen < VAR_15)
   goto out;
  FUNC_11(VAR_20->nonce, VAR_22.enckey + (VAR_22.enckeylen
   - VAR_15), VAR_15);
  VAR_22.enckeylen -= VAR_15;
 }
 if (VAR_22.enckeylen == VAR_0) {
  VAR_26 = VAR_3;
 } else if (VAR_22.enckeylen == VAR_1) {
  VAR_26 = VAR_4;
 } else if (VAR_22.enckeylen == VAR_2) {
  VAR_26 = VAR_5;
 } else {
  FUNC_13("chcr : Unsupported cipher key %d\n", VAR_22.enckeylen);
  goto out;
 }
 FUNC_11(VAR_20->key, VAR_22.enckey, VAR_22.enckeylen);
 VAR_20->enckey_len = VAR_22.enckeylen;
 if (VAR_24 == VAR_9 ||
     VAR_24 == VAR_8) {
  FUNC_10(VAR_21->dec_rrkey, VAR_20->key,
    VAR_20->enckey_len << 3);
 }
 VAR_25 = sizeof(struct _key_ctx) + FUNC_14(VAR_22.enckeylen, 16);

 VAR_20->key_ctx_hdr = FUNC_2(VAR_26, VAR_6, 0,
      0, VAR_25 >> 4);
 VAR_21->auth_mode = VAR_7;
 FUNC_12(&VAR_22, sizeof(VAR_22));
 return 0;
out:
 VAR_20->enckey_len = 0;
 FUNC_12(&VAR_22, sizeof(VAR_22));
 return -VAR_16;
}
