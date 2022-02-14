
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qce_cipher_reqctx {int flags; } ;
struct qce_cipher_ctx {scalar_t__ enc_keylen; int fallback; } ;
struct qce_alg_template {TYPE_1__* qce; int alg_flags; } ;
struct crypto_tfm {int dummy; } ;
struct TYPE_4__ {int flags; } ;
struct ablkcipher_request {TYPE_2__ base; int info; int nbytes; int dst; int src; } ;
struct TYPE_3__ {int (* async_req_enqueue ) (TYPE_1__*,TYPE_2__*) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ) ;
 struct qce_cipher_reqctx* FUNC_2 (struct ablkcipher_request*) ;
 int FUNC_3 (struct ablkcipher_request*) ;
 struct crypto_tfm* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 struct qce_cipher_ctx* FUNC_7 (struct crypto_tfm*) ;
 int FUNC_8 (int ,int ,int *,int *) ;
 int FUNC_9 (int ,int ,int ,int ,int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (TYPE_1__*,TYPE_2__*) ;
 int VAR_4 ;
 struct qce_alg_template* FUNC_13 (struct crypto_tfm*) ;

__attribute__((used)) static int FUNC_14(struct ablkcipher_request *VAR_5, int VAR_6)
{
 struct crypto_tfm *VAR_7 =
   FUNC_4(FUNC_3(VAR_5));
 struct qce_cipher_ctx *VAR_8 = FUNC_7(VAR_7);
 struct qce_cipher_reqctx *VAR_9 = FUNC_2(VAR_5);
 struct qce_alg_template *VAR_10 = FUNC_13(VAR_7);
 int VAR_11;

 VAR_9->flags = VAR_10->alg_flags;
 VAR_9->flags |= VAR_6 ? VAR_3 : VAR_2;

 if (FUNC_0(VAR_9->flags) && VAR_8->enc_keylen != VAR_0 &&
     VAR_8->enc_keylen != VAR_1) {
  FUNC_1(VAR_4, VAR_8->fallback);

  FUNC_10(VAR_4, VAR_8->fallback);
  FUNC_8(VAR_4, VAR_5->base.flags,
           ((void*)0), ((void*)0));
  FUNC_9(VAR_4, VAR_5->src, VAR_5->dst,
        VAR_5->nbytes, VAR_5->info);
  VAR_11 = VAR_6 ? FUNC_6(VAR_4) :
    FUNC_5(VAR_4);
  FUNC_11(VAR_4);
  return VAR_11;
 }

 return VAR_10->qce->async_req_enqueue(VAR_10->qce, &VAR_5->base);
}
