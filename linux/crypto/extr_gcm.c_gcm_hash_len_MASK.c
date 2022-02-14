
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct crypto_gcm_ghash_ctx {int cryptlen; } ;
struct ahash_request {int dummy; } ;
struct TYPE_4__ {struct ahash_request ahreq; } ;
struct crypto_gcm_req_priv_ctx {int iauth_tag; int sg; struct crypto_gcm_ghash_ctx ghash_ctx; TYPE_1__ u; } ;
struct aead_request {int assoclen; } ;
typedef int lengths ;
struct TYPE_5__ {void* b; void* a; } ;
typedef TYPE_2__ be128 ;


 int FUNC_0 (struct ahash_request*,int ,int ,struct aead_request*) ;
 int FUNC_1 (struct ahash_request*,int *,int ,int) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (struct ahash_request*) ;
 struct crypto_gcm_req_priv_ctx* FUNC_4 (struct aead_request*) ;
 int VAR_0 ;
 int FUNC_5 (int ,TYPE_2__*,int) ;
 int FUNC_6 (int *,int ,int) ;

__attribute__((used)) static int FUNC_7(struct aead_request *VAR_1, u32 VAR_2)
{
 struct crypto_gcm_req_priv_ctx *VAR_3 = FUNC_4(VAR_1);
 struct ahash_request *VAR_4 = &VAR_3->u.ahreq;
 struct crypto_gcm_ghash_ctx *VAR_5 = &VAR_3->ghash_ctx;
 be128 VAR_6;

 VAR_6.a = FUNC_2(VAR_1->assoclen * 8);
 VAR_6.b = FUNC_2(VAR_5->cryptlen * 8);
 FUNC_5(VAR_3->iauth_tag, &VAR_6, 16);
 FUNC_6(&VAR_3->sg, VAR_3->iauth_tag, 16);
 FUNC_0(VAR_4, VAR_2, VAR_0, VAR_1);
 FUNC_1(VAR_4, &VAR_3->sg,
    VAR_3->iauth_tag, sizeof(VAR_6));

 return FUNC_3(VAR_4);
}
