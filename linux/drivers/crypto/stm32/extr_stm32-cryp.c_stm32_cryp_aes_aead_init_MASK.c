
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct stm32_cryp_reqctx {int dummy; } ;
struct TYPE_3__ {int * unprepare_request; int prepare_request; int do_one_request; } ;
struct TYPE_4__ {TYPE_1__ op; } ;
struct stm32_cryp_ctx {TYPE_2__ enginectx; } ;
struct crypto_aead {int reqsize; } ;


 struct stm32_cryp_ctx* FUNC_0 (struct crypto_aead*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_1(struct crypto_aead *VAR_2)
{
 struct stm32_cryp_ctx *VAR_3 = FUNC_0(VAR_2);

 VAR_2->reqsize = sizeof(struct stm32_cryp_reqctx);

 VAR_3->enginectx.op.do_one_request = VAR_0;
 VAR_3->enginectx.op.prepare_request = VAR_1;
 VAR_3->enginectx.op.unprepare_request = ((void*)0);

 return 0;
}
