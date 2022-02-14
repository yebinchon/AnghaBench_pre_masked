
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct crypto_gcm_req_priv_ctx {int iauth_tag; int * auth_tag; } ;
struct crypto_aead {int dummy; } ;
struct aead_request {scalar_t__ cryptlen; scalar_t__ assoclen; int dst; } ;


 int FUNC_0 (struct crypto_aead*) ;
 struct crypto_aead* FUNC_1 (struct aead_request*) ;
 struct crypto_gcm_req_priv_ctx* FUNC_2 (struct aead_request*) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (int *,int ,scalar_t__,int ,int) ;

__attribute__((used)) static int FUNC_5(struct aead_request *VAR_0, u32 VAR_1)
{
 struct crypto_gcm_req_priv_ctx *VAR_2 = FUNC_2(VAR_0);
 struct crypto_aead *VAR_3 = FUNC_1(VAR_0);
 u8 *VAR_4 = VAR_2->auth_tag;

 FUNC_3(VAR_4, VAR_2->iauth_tag, 16);
 FUNC_4(VAR_4, VAR_0->dst,
     VAR_0->assoclen + VAR_0->cryptlen,
     FUNC_0(VAR_3), 1);
 return 0;
}
