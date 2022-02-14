
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sahara_ctx {int fallback; } ;
struct sahara_aes_reqctx {int dummy; } ;
struct TYPE_2__ {int reqsize; } ;
struct crypto_tfm {TYPE_1__ crt_ablkcipher; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char const*,int ,int ) ;
 char* FUNC_3 (struct crypto_tfm*) ;
 struct sahara_ctx* FUNC_4 (struct crypto_tfm*) ;
 int FUNC_5 (char*,char const*) ;

__attribute__((used)) static int FUNC_6(struct crypto_tfm *VAR_1)
{
 const char *VAR_2 = FUNC_3(VAR_1);
 struct sahara_ctx *VAR_3 = FUNC_4(VAR_1);

 VAR_3->fallback = FUNC_2(VAR_2, 0,
           VAR_0);
 if (FUNC_0(VAR_3->fallback)) {
  FUNC_5("Error allocating fallback algo %s\n", VAR_2);
  return FUNC_1(VAR_3->fallback);
 }

 VAR_1->crt_ablkcipher.reqsize = sizeof(struct sahara_aes_reqctx);

 return 0;
}
