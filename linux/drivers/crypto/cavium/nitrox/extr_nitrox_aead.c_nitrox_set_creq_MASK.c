
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


union gph_p3 {scalar_t__ param; scalar_t__ auth_offset; scalar_t__ iv_offset; } ;
struct TYPE_8__ {int ctxl; int arg; } ;
struct TYPE_9__ {TYPE_2__ s; scalar_t__ value; } ;
struct TYPE_7__ {void* param3; void* param2; void* param1; void* param0; } ;
struct se_crypto_request {int flags; TYPE_3__ ctrl; int ctx_handle; TYPE_1__ gph; int opcode; int gfp; } ;
struct TYPE_10__ {struct se_crypto_request creq; } ;
struct nitrox_aead_rctx {int flags; TYPE_4__ nkreq; int dstlen; scalar_t__ ivsize; int dst; int srclen; int iv; int src; int ctx_handle; scalar_t__ assoclen; scalar_t__ cryptlen; int ctrl_arg; } ;
struct flexi_crypto_context {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_4__*,int ,scalar_t__,int ) ;
 int FUNC_1 (TYPE_4__*,int ,int ,scalar_t__,int ) ;
 void* FUNC_2 (scalar_t__) ;
 int FUNC_3 (TYPE_4__*) ;

__attribute__((used)) static int FUNC_4(struct nitrox_aead_rctx *VAR_4)
{
 struct se_crypto_request *VAR_5 = &VAR_4->nkreq.creq;
 union gph_p3 VAR_6;
 int VAR_7;

 VAR_5->flags = VAR_4->flags;
 VAR_5->gfp = (VAR_4->flags & VAR_0) ? VAR_3 :
              VAR_2;

 VAR_5->ctrl.value = 0;
 VAR_5->opcode = VAR_1;
 VAR_5->ctrl.s.arg = VAR_4->ctrl_arg;

 VAR_5->gph.param0 = FUNC_2(VAR_4->cryptlen);
 VAR_5->gph.param1 = FUNC_2(VAR_4->cryptlen + VAR_4->assoclen);
 VAR_5->gph.param2 = FUNC_2(VAR_4->ivsize + VAR_4->assoclen);
 VAR_6 = 0;
 VAR_6 = VAR_4->ivsize;
 VAR_5->gph.param3 = FUNC_2(VAR_6);

 VAR_5->ctx_handle = VAR_4->ctx_handle;
 VAR_5->ctrl.s.ctxl = sizeof(struct flexi_crypto_context);

 VAR_7 = FUNC_1(&VAR_4->nkreq, VAR_4->src, VAR_4->iv, VAR_4->ivsize,
          VAR_4->srclen);
 if (VAR_7)
  return VAR_7;

 VAR_7 = FUNC_0(&VAR_4->nkreq, VAR_4->dst, VAR_4->ivsize,
          VAR_4->dstlen);
 if (VAR_7) {
  FUNC_3(&VAR_4->nkreq);
  return VAR_7;
 }

 return 0;
}
