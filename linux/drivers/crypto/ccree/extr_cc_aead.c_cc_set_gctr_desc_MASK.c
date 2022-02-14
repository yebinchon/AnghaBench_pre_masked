
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_aead {int dummy; } ;
struct cc_hw_desc {int dummy; } ;
struct cc_aead_ctx {int enc_keylen; int enckey_dma_addr; } ;
struct aead_request {int dummy; } ;
struct aead_req_ctx {int gcm_iv_inc2_dma_addr; int plaintext_authenticate_only; scalar_t__ cryptlen; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct aead_req_ctx* FUNC_0 (struct aead_request*) ;
 struct cc_aead_ctx* FUNC_1 (struct crypto_aead*) ;
 struct crypto_aead* FUNC_2 (struct aead_request*) ;
 int FUNC_3 (struct cc_hw_desc*) ;
 int FUNC_4 (struct cc_hw_desc*,int ) ;
 int FUNC_5 (struct cc_hw_desc*,int ) ;
 int FUNC_6 (struct cc_hw_desc*,int ,int ,int ,int ) ;
 int FUNC_7 (struct cc_hw_desc*,int ) ;
 int FUNC_8 (struct cc_hw_desc*,int ) ;
 int FUNC_9 (struct cc_hw_desc*,int ) ;

__attribute__((used)) static void FUNC_10(struct aead_request *VAR_8, struct cc_hw_desc VAR_9[],
        unsigned int *VAR_10)
{
 struct crypto_aead *VAR_11 = FUNC_2(VAR_8);
 struct cc_aead_ctx *VAR_12 = FUNC_1(VAR_11);
 struct aead_req_ctx *VAR_13 = FUNC_0(VAR_8);
 unsigned int VAR_14 = *VAR_10;


 FUNC_3(&VAR_9[VAR_14]);
 FUNC_5(&VAR_9[VAR_14], VAR_2);
 FUNC_4(&VAR_9[VAR_14], VAR_3);
 FUNC_6(&VAR_9[VAR_14], VAR_1, VAR_12->enckey_dma_addr,
       VAR_12->enc_keylen, VAR_4);
 FUNC_8(&VAR_9[VAR_14], VAR_12->enc_keylen);
 FUNC_9(&VAR_9[VAR_14], VAR_5);
 FUNC_7(&VAR_9[VAR_14], VAR_7);
 VAR_14++;

 if (VAR_13->cryptlen && !VAR_13->plaintext_authenticate_only) {

  FUNC_3(&VAR_9[VAR_14]);
  FUNC_5(&VAR_9[VAR_14], VAR_2);
  FUNC_8(&VAR_9[VAR_14], VAR_12->enc_keylen);
  FUNC_6(&VAR_9[VAR_14], VAR_1,
        VAR_13->gcm_iv_inc2_dma_addr, VAR_0,
        VAR_4);
  FUNC_4(&VAR_9[VAR_14], VAR_3);
  FUNC_9(&VAR_9[VAR_14], VAR_6);
  FUNC_7(&VAR_9[VAR_14], VAR_7);
  VAR_14++;
 }

 *VAR_10 = VAR_14;
}
