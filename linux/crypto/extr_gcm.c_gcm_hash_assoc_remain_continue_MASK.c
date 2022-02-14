
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct crypto_gcm_ghash_ctx {scalar_t__ cryptlen; int src; } ;
struct crypto_gcm_req_priv_ctx {struct crypto_gcm_ghash_ctx ghash_ctx; } ;
struct aead_request {int dummy; } ;


 struct crypto_gcm_req_priv_ctx* FUNC_0 (struct aead_request*) ;
 int FUNC_1 (struct aead_request*,int ) ;
 int VAR_0 ;
 int FUNC_2 (struct aead_request*,int ) ;
 scalar_t__ FUNC_3 (struct aead_request*,int ,int ,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_4(struct aead_request *VAR_1, u32 VAR_2)
{
 struct crypto_gcm_req_priv_ctx *VAR_3 = FUNC_0(VAR_1);
 struct crypto_gcm_ghash_ctx *VAR_4 = &VAR_3->ghash_ctx;

 if (VAR_4->cryptlen)
  return FUNC_3(VAR_1, VAR_0,
           VAR_4->src, VAR_4->cryptlen, VAR_2) ?:
         FUNC_1(VAR_1, VAR_2);

 return FUNC_2(VAR_1, VAR_2);
}
