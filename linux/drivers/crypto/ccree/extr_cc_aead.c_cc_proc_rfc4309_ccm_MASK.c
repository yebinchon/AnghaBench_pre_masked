
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_aead {int dummy; } ;
struct cc_aead_ctx {int* ctr_nonce; } ;
struct aead_request {int* iv; } ;
struct aead_req_ctx {int* ctr_iv; int assoclen; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 struct aead_req_ctx* FUNC_0 (struct aead_request*) ;
 struct cc_aead_ctx* FUNC_1 (struct crypto_aead*) ;
 struct crypto_aead* FUNC_2 (struct aead_request*) ;
 int FUNC_3 (int*,int*,scalar_t__) ;
 int FUNC_4 (int*,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct aead_request *VAR_5)
{
 struct crypto_aead *VAR_6 = FUNC_2(VAR_5);
 struct cc_aead_ctx *VAR_7 = FUNC_1(VAR_6);
 struct aead_req_ctx *VAR_8 = FUNC_0(VAR_5);


 FUNC_4(VAR_8->ctr_iv, 0, VAR_0);



 VAR_8->ctr_iv[0] = 3;




 FUNC_3(VAR_8->ctr_iv + VAR_3, VAR_7->ctr_nonce,
        VAR_4);
 FUNC_3(VAR_8->ctr_iv + VAR_1, VAR_5->iv,
        VAR_2);
 VAR_5->iv = VAR_8->ctr_iv;
 VAR_8->assoclen -= VAR_2;
}
