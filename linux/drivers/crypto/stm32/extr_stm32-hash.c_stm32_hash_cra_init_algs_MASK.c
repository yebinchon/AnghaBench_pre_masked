
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct stm32_hash_request_ctx {int dummy; } ;
struct TYPE_3__ {int * unprepare_request; int prepare_request; int do_one_request; } ;
struct TYPE_4__ {TYPE_1__ op; } ;
struct stm32_hash_ctx {TYPE_2__ enginectx; int flags; scalar_t__ keylen; } ;
struct crypto_tfm {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct crypto_tfm*) ;
 int FUNC_1 (int ,int) ;
 struct stm32_hash_ctx* FUNC_2 (struct crypto_tfm*) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_3(struct crypto_tfm *VAR_3,
        const char *VAR_4)
{
 struct stm32_hash_ctx *VAR_5 = FUNC_2(VAR_3);

 FUNC_1(FUNC_0(VAR_3),
     sizeof(struct stm32_hash_request_ctx));

 VAR_5->keylen = 0;

 if (VAR_4)
  VAR_5->flags |= VAR_0;

 VAR_5->enginectx.op.do_one_request = VAR_1;
 VAR_5->enginectx.op.prepare_request = VAR_2;
 VAR_5->enginectx.op.unprepare_request = ((void*)0);
 return 0;
}
