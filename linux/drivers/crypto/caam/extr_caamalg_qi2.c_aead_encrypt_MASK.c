
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct crypto_aead {int dummy; } ;
struct caam_request {struct aead_edesc* edesc; TYPE_1__* ctx; int cbk; int flc_dma; int * flc; } ;
struct caam_ctx {int dev; int * flc_dma; int * flc; } ;
struct TYPE_2__ {int flags; } ;
struct aead_request {TYPE_1__ base; } ;
struct aead_edesc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ FUNC_0 (struct aead_edesc*) ;
 int FUNC_1 (struct aead_edesc*) ;
 struct aead_edesc* FUNC_2 (struct aead_request*,int) ;
 int VAR_4 ;
 struct caam_request* FUNC_3 (struct aead_request*) ;
 int FUNC_4 (int ,struct aead_edesc*,struct aead_request*) ;
 struct caam_ctx* FUNC_5 (struct crypto_aead*) ;
 struct crypto_aead* FUNC_6 (struct aead_request*) ;
 int FUNC_7 (int ,struct caam_request*) ;
 int FUNC_8 (struct aead_edesc*) ;

__attribute__((used)) static int FUNC_9(struct aead_request *VAR_5)
{
 struct aead_edesc *VAR_6;
 struct crypto_aead *VAR_7 = FUNC_6(VAR_5);
 struct caam_ctx *VAR_8 = FUNC_5(VAR_7);
 struct caam_request *VAR_9 = FUNC_3(VAR_5);
 int VAR_10;


 VAR_6 = FUNC_2(VAR_5, 1);
 if (FUNC_0(VAR_6))
  return FUNC_1(VAR_6);

 VAR_9->flc = &VAR_8->flc[VAR_3];
 VAR_9->flc_dma = VAR_8->flc_dma[VAR_3];
 VAR_9->cbk = VAR_4;
 VAR_9->ctx = &VAR_5->base;
 VAR_9->edesc = VAR_6;
 VAR_10 = FUNC_7(VAR_8->dev, VAR_9);
 if (VAR_10 != -VAR_2 &&
     !(VAR_10 == -VAR_1 && VAR_5->base.flags & VAR_0)) {
  FUNC_4(VAR_8->dev, VAR_6, VAR_5);
  FUNC_8(VAR_6);
 }

 return VAR_10;
}
