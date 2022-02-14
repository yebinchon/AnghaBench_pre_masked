
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_aead {int dummy; } ;
struct cc_aead_ctx {scalar_t__ ctr_nonce; } ;
struct aead_request {scalar_t__ iv; } ;
struct aead_req_ctx {int assoclen; scalar_t__ ctr_iv; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 struct aead_req_ctx* FUNC_0 (struct aead_request*) ;
 struct cc_aead_ctx* FUNC_1 (struct crypto_aead*) ;
 struct crypto_aead* FUNC_2 (struct aead_request*) ;
 int FUNC_3 (scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct aead_request *VAR_4)
{
 struct crypto_aead *VAR_5 = FUNC_2(VAR_4);
 struct cc_aead_ctx *VAR_6 = FUNC_1(VAR_5);
 struct aead_req_ctx *VAR_7 = FUNC_0(VAR_4);

 FUNC_3(VAR_7->ctr_iv + VAR_2,
        VAR_6->ctr_nonce, VAR_3);
 FUNC_3(VAR_7->ctr_iv + VAR_0, VAR_4->iv,
        VAR_1);
 VAR_4->iv = VAR_7->ctr_iv;
 VAR_7->assoclen -= VAR_1;
}
