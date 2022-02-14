
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dcp_async_ctx {struct crypto_sync_skcipher* fallback; } ;
struct dcp_aes_req_ctx {int dummy; } ;
struct TYPE_2__ {int reqsize; } ;
struct crypto_tfm {TYPE_1__ crt_ablkcipher; } ;
struct crypto_sync_skcipher {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct crypto_sync_skcipher*) ;
 int FUNC_1 (struct crypto_sync_skcipher*) ;
 struct crypto_sync_skcipher* FUNC_2 (char const*,int ,int ) ;
 char* FUNC_3 (struct crypto_tfm*) ;
 struct dcp_async_ctx* FUNC_4 (struct crypto_tfm*) ;

__attribute__((used)) static int FUNC_5(struct crypto_tfm *VAR_1)
{
 const char *VAR_2 = FUNC_3(VAR_1);
 struct dcp_async_ctx *VAR_3 = FUNC_4(VAR_1);
 struct crypto_sync_skcipher *VAR_4;

 VAR_4 = FUNC_2(VAR_2, 0, VAR_0);
 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);

 VAR_3->fallback = VAR_4;
 VAR_1->crt_ablkcipher.reqsize = sizeof(struct dcp_aes_req_ctx);
 return 0;
}
