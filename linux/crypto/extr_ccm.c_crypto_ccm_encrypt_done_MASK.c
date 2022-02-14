
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct crypto_ccm_req_priv_ctx {int * odata; } ;
struct crypto_async_request {struct aead_request* data; } ;
struct crypto_aead {int dummy; } ;
struct aead_request {scalar_t__ cryptlen; scalar_t__ assoclen; int dst; } ;


 int FUNC_0 (struct aead_request*,int) ;
 int FUNC_1 (struct crypto_aead*) ;
 struct crypto_aead* FUNC_2 (struct aead_request*) ;
 struct crypto_ccm_req_priv_ctx* FUNC_3 (struct aead_request*) ;
 int FUNC_4 (int *,int ,scalar_t__,int ,int) ;

__attribute__((used)) static void FUNC_5(struct crypto_async_request *VAR_0, int VAR_1)
{
 struct aead_request *VAR_2 = VAR_0->data;
 struct crypto_aead *VAR_3 = FUNC_2(VAR_2);
 struct crypto_ccm_req_priv_ctx *VAR_4 = FUNC_3(VAR_2);
 u8 *VAR_5 = VAR_4->odata;

 if (!VAR_1)
  FUNC_4(VAR_5, VAR_2->dst,
      VAR_2->assoclen + VAR_2->cryptlen,
      FUNC_1(VAR_3), 1);
 FUNC_0(VAR_2, VAR_1);
}
