
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* pdev; } ;
struct uld_ctx {TYPE_2__ lldi; } ;
struct crypto_aead {int dummy; } ;
struct chcr_aead_reqctx {int op; } ;
struct aead_request {int dummy; } ;
struct TYPE_3__ {int dev; } ;


 struct uld_ctx* FUNC_0 (int ) ;
 int FUNC_1 (struct crypto_aead*) ;
 struct chcr_aead_reqctx* FUNC_2 (struct aead_request*) ;
 int FUNC_3 (int *,struct aead_request*,int ) ;
 struct crypto_aead* FUNC_4 (struct aead_request*) ;

inline void FUNC_5(struct aead_request *VAR_0)
{
 struct chcr_aead_reqctx *VAR_1 = FUNC_2(VAR_0);
 struct crypto_aead *VAR_2 = FUNC_4(VAR_0);
 struct uld_ctx *VAR_3 = FUNC_0(FUNC_1(VAR_2));

 FUNC_3(&VAR_3->lldi.pdev->dev, VAR_0, VAR_1->op);
}
