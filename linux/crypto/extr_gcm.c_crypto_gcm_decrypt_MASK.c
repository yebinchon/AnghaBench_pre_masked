
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct crypto_gcm_ghash_ctx {unsigned int cryptlen; int complete; int src; } ;
struct crypto_gcm_req_priv_ctx {int src; struct crypto_gcm_ghash_ctx ghash_ctx; } ;
struct crypto_aead {int dummy; } ;
struct aead_request {unsigned int cryptlen; } ;


 int FUNC_0 (struct aead_request*) ;
 unsigned int FUNC_1 (struct crypto_aead*) ;
 struct crypto_aead* FUNC_2 (struct aead_request*) ;
 int FUNC_3 (struct aead_request*) ;
 struct crypto_gcm_req_priv_ctx* FUNC_4 (struct aead_request*) ;
 int VAR_0 ;
 int FUNC_5 (struct aead_request*,int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct aead_request *VAR_1)
{
 struct crypto_aead *VAR_2 = FUNC_2(VAR_1);
 struct crypto_gcm_req_priv_ctx *VAR_3 = FUNC_4(VAR_1);
 struct crypto_gcm_ghash_ctx *VAR_4 = &VAR_3->ghash_ctx;
 unsigned int VAR_5 = FUNC_1(VAR_2);
 unsigned int VAR_6 = VAR_1->cryptlen;
 u32 VAR_7 = FUNC_0(VAR_1);

 VAR_6 -= VAR_5;

 FUNC_3(VAR_1);

 VAR_4->src = FUNC_6(VAR_3->src);
 VAR_4->cryptlen = VAR_6;
 VAR_4->complete = VAR_0;

 return FUNC_5(VAR_1, VAR_7);
}
