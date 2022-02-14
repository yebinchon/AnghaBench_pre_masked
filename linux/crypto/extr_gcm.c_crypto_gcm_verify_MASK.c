
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct crypto_gcm_req_priv_ctx {int * iauth_tag; int * auth_tag; } ;
struct crypto_aead {int dummy; } ;
struct aead_request {unsigned int cryptlen; scalar_t__ assoclen; int src; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (struct crypto_aead*) ;
 struct crypto_aead* FUNC_1 (struct aead_request*) ;
 struct crypto_gcm_req_priv_ctx* FUNC_2 (struct aead_request*) ;
 scalar_t__ FUNC_3 (int *,int *,unsigned int) ;
 int FUNC_4 (int *,int *,int) ;
 int FUNC_5 (int *,int ,scalar_t__,unsigned int,int ) ;

__attribute__((used)) static int FUNC_6(struct aead_request *VAR_1)
{
 struct crypto_gcm_req_priv_ctx *VAR_2 = FUNC_2(VAR_1);
 struct crypto_aead *VAR_3 = FUNC_1(VAR_1);
 u8 *VAR_4 = VAR_2->auth_tag;
 u8 *VAR_5 = VAR_2->iauth_tag;
 unsigned int VAR_6 = FUNC_0(VAR_3);
 unsigned int VAR_7 = VAR_1->cryptlen - VAR_6;

 FUNC_4(VAR_4, VAR_5, 16);
 FUNC_5(VAR_5, VAR_1->src,
     VAR_1->assoclen + VAR_7, VAR_6, 0);
 return FUNC_3(VAR_5, VAR_4, VAR_6) ? -VAR_0 : 0;
}
