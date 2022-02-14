
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct crypto_gcm_ghash_ctx {int complete; int cryptlen; int src; } ;
struct crypto_gcm_req_priv_ctx {int dst; int src; struct crypto_gcm_ghash_ctx ghash_ctx; } ;
struct aead_request {scalar_t__ src; scalar_t__ dst; int cryptlen; } ;


 struct crypto_gcm_req_priv_ctx* FUNC_0 (struct aead_request*) ;
 int VAR_0 ;
 int FUNC_1 (struct aead_request*,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct aead_request *VAR_1, u32 VAR_2)
{
 struct crypto_gcm_req_priv_ctx *VAR_3 = FUNC_0(VAR_1);
 struct crypto_gcm_ghash_ctx *VAR_4 = &VAR_3->ghash_ctx;

 VAR_4->src = FUNC_2(VAR_1->src == VAR_1->dst ? VAR_3->src : VAR_3->dst);
 VAR_4->cryptlen = VAR_1->cryptlen;
 VAR_4->complete = VAR_0;

 return FUNC_1(VAR_1, VAR_2);
}
