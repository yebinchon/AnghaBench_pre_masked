
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct se_crypto_request {int dummy; } ;
struct TYPE_4__ {struct se_crypto_request creq; } ;
struct nitrox_aead_rctx {void* cryptlen; void* srclen; void* dstlen; int ctrl_arg; int ctx_handle; int flags; void* ivsize; int iv; void* assoclen; TYPE_1__ nkreq; } ;
struct nitrox_rfc4106_rctx {struct nitrox_aead_rctx base; } ;
struct TYPE_6__ {int ctx_handle; } ;
struct nitrox_crypto_ctx {int ndev; TYPE_3__ u; } ;
struct crypto_aead {void* authsize; } ;
struct TYPE_5__ {int flags; } ;
struct aead_request {void* cryptlen; void* assoclen; TYPE_2__ base; int iv; } ;


 int VAR_0 ;
 void* VAR_1 ;
 struct nitrox_rfc4106_rctx* FUNC_0 (struct aead_request*) ;
 struct nitrox_crypto_ctx* FUNC_1 (struct crypto_aead*) ;
 struct crypto_aead* FUNC_2 (struct aead_request*) ;
 int FUNC_3 (int ,struct se_crypto_request*,int ,struct aead_request*) ;
 int VAR_2 ;
 int FUNC_4 (struct aead_request*) ;
 int FUNC_5 (struct nitrox_aead_rctx*) ;

__attribute__((used)) static int FUNC_6(struct aead_request *VAR_3)
{
 struct crypto_aead *VAR_4 = FUNC_2(VAR_3);
 struct nitrox_crypto_ctx *VAR_5 = FUNC_1(VAR_4);
 struct nitrox_rfc4106_rctx *VAR_6 = FUNC_0(VAR_3);
 struct nitrox_aead_rctx *VAR_7 = &VAR_6->base;
 struct se_crypto_request *VAR_8 = &VAR_7->nkreq.creq;
 int VAR_9;

 VAR_7->cryptlen = VAR_3->cryptlen - VAR_4->authsize;
 VAR_7->assoclen = VAR_3->assoclen - VAR_1;
 VAR_7->srclen =
  VAR_3->cryptlen - VAR_1 + VAR_3->assoclen;
 VAR_7->dstlen = VAR_7->srclen - VAR_4->authsize;
 VAR_7->iv = VAR_3->iv;
 VAR_7->ivsize = VAR_1;
 VAR_7->flags = VAR_3->base.flags;
 VAR_7->ctx_handle = VAR_5->u.ctx_handle;
 VAR_7->ctrl_arg = VAR_0;

 VAR_9 = FUNC_4(VAR_3);
 if (VAR_9)
  return VAR_9;

 VAR_9 = FUNC_5(VAR_7);
 if (VAR_9)
  return VAR_9;


 return FUNC_3(VAR_5->ndev, VAR_8,
      VAR_2, VAR_3);
}
