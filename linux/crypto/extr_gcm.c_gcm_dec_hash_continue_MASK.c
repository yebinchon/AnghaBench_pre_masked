
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct skcipher_request {int dummy; } ;
struct crypto_gcm_ghash_ctx {int cryptlen; } ;
struct TYPE_2__ {struct skcipher_request skreq; } ;
struct crypto_gcm_req_priv_ctx {struct crypto_gcm_ghash_ctx ghash_ctx; TYPE_1__ u; } ;
struct aead_request {int dummy; } ;


 int FUNC_0 (struct aead_request*,int ) ;
 struct crypto_gcm_req_priv_ctx* FUNC_1 (struct aead_request*) ;
 int FUNC_2 (struct aead_request*) ;
 scalar_t__ FUNC_3 (struct skcipher_request*) ;
 int VAR_0 ;
 int FUNC_4 (struct skcipher_request*,int ,int ,struct aead_request*) ;

__attribute__((used)) static int FUNC_5(struct aead_request *VAR_1, u32 VAR_2)
{
 struct crypto_gcm_req_priv_ctx *VAR_3 = FUNC_1(VAR_1);
 struct skcipher_request *VAR_4 = &VAR_3->u.skreq;
 struct crypto_gcm_ghash_ctx *VAR_5 = &VAR_3->ghash_ctx;

 FUNC_0(VAR_1, VAR_5->cryptlen);
 FUNC_4(VAR_4, VAR_2, VAR_0, VAR_1);
 return FUNC_3(VAR_4) ?: FUNC_2(VAR_1);
}
