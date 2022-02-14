
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct omap_aes_reqctx {int dummy; } ;
struct TYPE_5__ {int do_one_request; int * unprepare_request; int prepare_request; } ;
struct TYPE_6__ {TYPE_2__ op; } ;
struct omap_aes_ctx {TYPE_3__ enginectx; struct crypto_sync_skcipher* fallback; } ;
struct TYPE_4__ {int reqsize; } ;
struct crypto_tfm {TYPE_1__ crt_ablkcipher; } ;
struct crypto_sync_skcipher {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct crypto_sync_skcipher*) ;
 int FUNC_1 (struct crypto_sync_skcipher*) ;
 struct crypto_sync_skcipher* FUNC_2 (char const*,int ,int ) ;
 char* FUNC_3 (struct crypto_tfm*) ;
 struct omap_aes_ctx* FUNC_4 (struct crypto_tfm*) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_5(struct crypto_tfm *VAR_3)
{
 const char *VAR_4 = FUNC_3(VAR_3);
 struct omap_aes_ctx *VAR_5 = FUNC_4(VAR_3);
 struct crypto_sync_skcipher *VAR_6;

 VAR_6 = FUNC_2(VAR_4, 0, VAR_0);
 if (FUNC_0(VAR_6))
  return FUNC_1(VAR_6);

 VAR_5->fallback = VAR_6;

 VAR_3->crt_ablkcipher.reqsize = sizeof(struct omap_aes_reqctx);

 VAR_5->enginectx.op.prepare_request = VAR_2;
 VAR_5->enginectx.op.unprepare_request = ((void*)0);
 VAR_5->enginectx.op.do_one_request = VAR_1;

 return 0;
}
