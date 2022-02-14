
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; } ;
struct skcipher_request {TYPE_1__ base; int cryptlen; } ;
struct skcipher_edesc {int dummy; } ;
struct crypto_skcipher {int dummy; } ;
struct caam_request {struct skcipher_edesc* edesc; TYPE_1__* ctx; int cbk; int flc_dma; int * flc; } ;
struct caam_ctx {int dev; int * flc_dma; int * flc; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct skcipher_edesc*) ;
 int FUNC_1 (struct skcipher_edesc*) ;
 struct caam_ctx* FUNC_2 (struct crypto_skcipher*) ;
 struct crypto_skcipher* FUNC_3 (struct skcipher_request*) ;
 int FUNC_4 (int ,struct caam_request*) ;
 int FUNC_5 (struct skcipher_edesc*) ;
 int VAR_4 ;
 struct skcipher_edesc* FUNC_6 (struct skcipher_request*) ;
 struct caam_request* FUNC_7 (struct skcipher_request*) ;
 int FUNC_8 (int ,struct skcipher_edesc*,struct skcipher_request*) ;

__attribute__((used)) static int FUNC_9(struct skcipher_request *VAR_5)
{
 struct skcipher_edesc *VAR_6;
 struct crypto_skcipher *VAR_7 = FUNC_3(VAR_5);
 struct caam_ctx *VAR_8 = FUNC_2(VAR_7);
 struct caam_request *VAR_9 = FUNC_7(VAR_5);
 int VAR_10;

 if (!VAR_5->cryptlen)
  return 0;

 VAR_6 = FUNC_6(VAR_5);
 if (FUNC_0(VAR_6))
  return FUNC_1(VAR_6);

 VAR_9->flc = &VAR_8->flc[VAR_1];
 VAR_9->flc_dma = VAR_8->flc_dma[VAR_1];
 VAR_9->cbk = VAR_4;
 VAR_9->ctx = &VAR_5->base;
 VAR_9->edesc = VAR_6;
 VAR_10 = FUNC_4(VAR_8->dev, VAR_9);
 if (VAR_10 != -VAR_3 &&
     !(VAR_10 == -VAR_2 && VAR_5->base.flags & VAR_0)) {
  FUNC_8(VAR_8->dev, VAR_6, VAR_5);
  FUNC_5(VAR_6);
 }

 return VAR_10;
}
