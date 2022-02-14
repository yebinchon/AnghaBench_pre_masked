
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct device {int dummy; } ;
struct crypto_authenc_keys {int enckeylen; int authkeylen; int * authkey; int * enckey; } ;
struct crypto_aead {int dummy; } ;
struct cc_hw_desc {int dummy; } ;
struct cc_crypto_req {int dummy; } ;
struct TYPE_3__ {int xcbc_keys; } ;
struct TYPE_4__ {TYPE_1__ xcbc; } ;
struct cc_aead_ctx {int auth_mode; int enc_keylen; int auth_keylen; scalar_t__ cipher_mode; int drvdata; TYPE_2__ auth_state; int enckey; int ctr_nonce; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;




 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct crypto_aead*,int const*,int) ;
 int FUNC_1 (int ,struct cc_crypto_req*,struct cc_hw_desc*,unsigned int) ;
 struct cc_aead_ctx* FUNC_2 (struct crypto_aead*) ;
 int FUNC_3 (struct crypto_aead*,int ) ;
 int FUNC_4 (struct crypto_aead*) ;
 int FUNC_5 (struct crypto_authenc_keys*,int const*,unsigned int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct device*,char*,struct cc_aead_ctx*,int ,int const*,unsigned int) ;
 int FUNC_8 (struct device*,char*,int) ;
 struct device* FUNC_9 (int ) ;
 unsigned int FUNC_10 (struct cc_hw_desc*,struct cc_aead_ctx*) ;
 int FUNC_11 (int ,int const*,int) ;
 int FUNC_12 (int ,int ,scalar_t__) ;
 int FUNC_13 (struct cc_aead_ctx*) ;
 unsigned int FUNC_14 (struct cc_hw_desc*,struct cc_aead_ctx*) ;

__attribute__((used)) static int FUNC_15(struct crypto_aead *VAR_8, const u8 *VAR_9,
     unsigned int VAR_10)
{
 struct cc_aead_ctx *VAR_11 = FUNC_2(VAR_8);
 struct cc_crypto_req VAR_12 = {};
 struct cc_hw_desc VAR_13[VAR_7];
 unsigned int VAR_14 = 0;
 struct device *VAR_15 = FUNC_9(VAR_11->drvdata);
 const u8 *VAR_16, *VAR_17;
 int VAR_18;

 FUNC_7(VAR_15, "Setting key in context @%p for %s. key=%p keylen=%u\n",
  VAR_11, FUNC_6(FUNC_4(VAR_8)), VAR_9, VAR_10);



 if (VAR_11->auth_mode != 131) {
  struct crypto_authenc_keys VAR_19;

  VAR_18 = FUNC_5(&VAR_19, VAR_9, VAR_10);
  if (VAR_18)
   goto badkey;
  VAR_16 = VAR_19.enckey;
  VAR_17 = VAR_19.authkey;
  VAR_11->enc_keylen = VAR_19.enckeylen;
  VAR_11->auth_keylen = VAR_19.authkeylen;

  if (VAR_11->cipher_mode == VAR_4) {

   VAR_18 = -VAR_5;
   if (VAR_11->enc_keylen <
       (VAR_0 + VAR_3))
    goto badkey;



   FUNC_11(VAR_11->ctr_nonce, VAR_16 + VAR_11->enc_keylen -
          VAR_3, VAR_3);

   VAR_11->enc_keylen -= VAR_3;
  }
 } else {
  VAR_16 = VAR_9;
  VAR_17 = ((void*)0);
  VAR_11->enc_keylen = VAR_10;
  VAR_11->auth_keylen = 0;
 }

 VAR_18 = FUNC_13(VAR_11);
 if (VAR_18)
  goto badkey;




 FUNC_11(VAR_11->enckey, VAR_16, VAR_11->enc_keylen);
 if (VAR_11->enc_keylen == 24)
  FUNC_12(VAR_11->enckey + 24, 0, VAR_1 - 24);
 if (VAR_11->auth_mode == 128) {
  FUNC_11(VAR_11->auth_state.xcbc.xcbc_keys, VAR_17,
         VAR_11->auth_keylen);
 } else if (VAR_11->auth_mode != 131) {
  VAR_18 = FUNC_0(VAR_8, VAR_17, VAR_11->auth_keylen);
  if (VAR_18)
   goto badkey;
 }



 switch (VAR_11->auth_mode) {
 case 130:
 case 129:
  VAR_14 = FUNC_10(VAR_13, VAR_11);
  break;
 case 128:
  VAR_14 = FUNC_14(VAR_13, VAR_11);
  break;
 case 131:
  break;
 default:
  FUNC_8(VAR_15, "Unsupported authenc (%d)\n", VAR_11->auth_mode);
  VAR_18 = -VAR_6;
  goto badkey;
 }



 if (VAR_14 > 0) {
  VAR_18 = FUNC_1(VAR_11->drvdata, &VAR_12, VAR_13, VAR_14);
  if (VAR_18) {
   FUNC_8(VAR_15, "send_request() failed (rc=%d)\n", VAR_18);
   goto setkey_error;
  }
 }


 return VAR_18;

badkey:
 FUNC_3(VAR_8, VAR_2);

setkey_error:
 return VAR_18;
}
