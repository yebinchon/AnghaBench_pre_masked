
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct stm32_cryp_reqctx {int dummy; } ;
struct TYPE_5__ {int * unprepare_request; int prepare_request; int do_one_request; } ;
struct TYPE_6__ {TYPE_2__ op; } ;
struct stm32_cryp_ctx {TYPE_3__ enginectx; } ;
struct TYPE_4__ {int reqsize; } ;
struct crypto_tfm {TYPE_1__ crt_ablkcipher; } ;


 struct stm32_cryp_ctx* FUNC_0 (struct crypto_tfm*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_1(struct crypto_tfm *VAR_2)
{
 struct stm32_cryp_ctx *VAR_3 = FUNC_0(VAR_2);

 VAR_2->crt_ablkcipher.reqsize = sizeof(struct stm32_cryp_reqctx);

 VAR_3->enginectx.op.do_one_request = VAR_0;
 VAR_3->enginectx.op.prepare_request = VAR_1;
 VAR_3->enginectx.op.unprepare_request = ((void*)0);
 return 0;
}
