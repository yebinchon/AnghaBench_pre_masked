
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct crypto_gcm_ghash_ctx {int cryptlen; } ;
struct crypto_gcm_req_priv_ctx {struct crypto_gcm_ghash_ctx ghash_ctx; } ;
struct aead_request {int dummy; } ;


 struct crypto_gcm_req_priv_ctx* FUNC_0 (struct aead_request*) ;
 int FUNC_1 (struct aead_request*,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (struct aead_request*,unsigned int,int ,int ) ;
 unsigned int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct aead_request *VAR_1, u32 VAR_2)
{
 struct crypto_gcm_req_priv_ctx *VAR_3 = FUNC_0(VAR_1);
 struct crypto_gcm_ghash_ctx *VAR_4 = &VAR_3->ghash_ctx;
 unsigned int VAR_5;

 VAR_5 = FUNC_3(VAR_4->cryptlen);
 if (VAR_5)
  return FUNC_2(VAR_1, VAR_5,
           VAR_0, VAR_2) ?:
         FUNC_1(VAR_1, VAR_2);

 return FUNC_1(VAR_1, VAR_2);
}
