
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct crypto_gcm_ghash_ctx {int (* complete ) (struct aead_request*,int ) ;} ;
struct crypto_gcm_req_priv_ctx {struct crypto_gcm_ghash_ctx ghash_ctx; } ;
struct aead_request {int dummy; } ;


 struct crypto_gcm_req_priv_ctx* FUNC_0 (struct aead_request*) ;
 int FUNC_1 (struct aead_request*,int ) ;

__attribute__((used)) static int FUNC_2(struct aead_request *VAR_0, u32 VAR_1)
{
 struct crypto_gcm_req_priv_ctx *VAR_2 = FUNC_0(VAR_0);
 struct crypto_gcm_ghash_ctx *VAR_3 = &VAR_2->ghash_ctx;

 return VAR_3->complete(VAR_0, VAR_1);
}
