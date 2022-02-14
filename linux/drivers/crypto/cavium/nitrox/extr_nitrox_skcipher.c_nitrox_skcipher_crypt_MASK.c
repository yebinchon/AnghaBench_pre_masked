
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int flags; } ;
struct skcipher_request {int cryptlen; TYPE_1__ base; } ;
struct TYPE_9__ {int ctxl; int arg; } ;
struct TYPE_10__ {TYPE_4__ s; scalar_t__ value; } ;
struct TYPE_7__ {scalar_t__ param3; void* param2; scalar_t__ param1; void* param0; } ;
struct se_crypto_request {int flags; TYPE_5__ ctrl; int ctx_handle; TYPE_2__ gph; int opcode; int gfp; } ;
struct nitrox_kcrypt_request {struct se_crypto_request creq; } ;
struct TYPE_8__ {int ctx_handle; } ;
struct nitrox_crypto_ctx {int ndev; TYPE_3__ u; } ;
struct flexi_crypto_context {int dummy; } ;
struct crypto_skcipher {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct skcipher_request*,int) ;
 int FUNC_1 (struct skcipher_request*,int) ;
 void* FUNC_2 (int) ;
 struct nitrox_crypto_ctx* FUNC_3 (struct crypto_skcipher*) ;
 int FUNC_4 (struct crypto_skcipher*) ;
 struct crypto_skcipher* FUNC_5 (struct skcipher_request*) ;
 int FUNC_6 (struct skcipher_request*) ;
 int FUNC_7 (int ,struct se_crypto_request*,int ,struct skcipher_request*) ;
 int VAR_6 ;
 struct nitrox_kcrypt_request* FUNC_8 (struct skcipher_request*) ;

__attribute__((used)) static int FUNC_9(struct skcipher_request *VAR_7, bool VAR_8)
{
 struct crypto_skcipher *VAR_9 = FUNC_5(VAR_7);
 struct nitrox_crypto_ctx *VAR_10 = FUNC_3(VAR_9);
 struct nitrox_kcrypt_request *VAR_11 = FUNC_8(VAR_7);
 int VAR_12 = FUNC_4(VAR_9);
 struct se_crypto_request *VAR_13;
 int VAR_14;

 VAR_13 = &VAR_11->creq;
 VAR_13->flags = VAR_7->base.flags;
 VAR_13->gfp = (VAR_7->base.flags & VAR_0) ?
       VAR_5 : VAR_4;


 VAR_13->ctrl.value = 0;
 VAR_13->opcode = VAR_3;
 VAR_13->ctrl.s.arg = (VAR_8 ? VAR_2 : VAR_1);

 VAR_13->gph.param0 = FUNC_2(VAR_7->cryptlen);
 VAR_13->gph.param1 = 0;

 VAR_13->gph.param2 = FUNC_2(VAR_12);
 VAR_13->gph.param3 = 0;

 VAR_13->ctx_handle = VAR_10->u.ctx_handle;
 VAR_13->ctrl.s.ctxl = sizeof(struct flexi_crypto_context);

 VAR_14 = FUNC_1(VAR_7, VAR_12);
 if (VAR_14)
  return VAR_14;

 VAR_14 = FUNC_0(VAR_7, VAR_12);
 if (VAR_14) {
  FUNC_6(VAR_7);
  return VAR_14;
 }


 return FUNC_7(VAR_10->ndev, VAR_13,
      VAR_6, VAR_7);
}
