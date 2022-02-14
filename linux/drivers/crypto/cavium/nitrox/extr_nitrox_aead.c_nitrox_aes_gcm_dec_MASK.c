
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct se_crypto_request {int dummy; } ;
struct TYPE_8__ {int ctx_handle; struct flexi_crypto_context* fctx; } ;
struct nitrox_crypto_ctx {int ndev; TYPE_4__ u; } ;
struct TYPE_5__ {struct se_crypto_request creq; } ;
struct nitrox_aead_rctx {int ctrl_arg; int dst; int src; int ctx_handle; int flags; scalar_t__ ivsize; int * iv; scalar_t__ srclen; scalar_t__ dstlen; scalar_t__ assoclen; scalar_t__ cryptlen; TYPE_1__ nkreq; } ;
struct TYPE_6__ {int iv; } ;
struct flexi_crypto_context {TYPE_2__ crypto; } ;
struct crypto_aead {scalar_t__ authsize; } ;
struct TYPE_7__ {int flags; } ;
struct aead_request {int dst; int src; TYPE_3__ base; int * iv; scalar_t__ assoclen; scalar_t__ cryptlen; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 struct nitrox_aead_rctx* FUNC_0 (struct aead_request*) ;
 struct nitrox_crypto_ctx* FUNC_1 (struct crypto_aead*) ;
 struct crypto_aead* FUNC_2 (struct aead_request*) ;
 int FUNC_3 (int ,int *,size_t) ;
 int VAR_3 ;
 int FUNC_4 (int ,struct se_crypto_request*,int ,struct aead_request*) ;
 int FUNC_5 (struct nitrox_aead_rctx*) ;

__attribute__((used)) static int FUNC_6(struct aead_request *VAR_4)
{
 struct crypto_aead *VAR_5 = FUNC_2(VAR_4);
 struct nitrox_crypto_ctx *VAR_6 = FUNC_1(VAR_5);
 struct nitrox_aead_rctx *VAR_7 = FUNC_0(VAR_4);
 struct se_crypto_request *VAR_8 = &VAR_7->nkreq.creq;
 struct flexi_crypto_context *VAR_9 = VAR_6->u.fctx;
 int VAR_10;

 FUNC_3(VAR_9->crypto.iv, VAR_4->iv, VAR_2);

 VAR_7->cryptlen = VAR_4->cryptlen - VAR_5->authsize;
 VAR_7->assoclen = VAR_4->assoclen;
 VAR_7->srclen = VAR_4->cryptlen + VAR_4->assoclen;
 VAR_7->dstlen = VAR_7->srclen - VAR_5->authsize;
 VAR_7->iv = &VAR_4->iv[VAR_2];
 VAR_7->ivsize = VAR_1 - VAR_2;
 VAR_7->flags = VAR_4->base.flags;
 VAR_7->ctx_handle = VAR_6->u.ctx_handle;
 VAR_7->src = VAR_4->src;
 VAR_7->dst = VAR_4->dst;
 VAR_7->ctrl_arg = VAR_0;
 VAR_10 = FUNC_5(VAR_7);
 if (VAR_10)
  return VAR_10;


 return FUNC_4(VAR_6->ndev, VAR_8, VAR_3,
      VAR_4);
}
