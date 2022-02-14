
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct spacc_req {int dummy; } ;
struct spacc_engine {int dev; } ;
struct spacc_alg {int iv_offs; int key_offs; int type; struct spacc_engine* engine; } ;
struct TYPE_3__ {int iv_offs; int key_offs; struct spacc_engine* engine; int flags; } ;
struct spacc_ablk_ctx {TYPE_1__ generic; int sw_cipher; } ;
struct TYPE_4__ {int reqsize; } ;
struct crypto_tfm {TYPE_2__ crt_ablkcipher; struct crypto_alg* __crt_alg; } ;
struct crypto_alg {int cra_flags; int cra_name; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int) ;
 struct spacc_ablk_ctx* FUNC_3 (struct crypto_tfm*) ;
 int FUNC_4 (int ,char*,int ) ;
 struct spacc_alg* FUNC_5 (struct crypto_alg*) ;

__attribute__((used)) static int FUNC_6(struct crypto_tfm *VAR_1)
{
 struct spacc_ablk_ctx *VAR_2 = FUNC_3(VAR_1);
 struct crypto_alg *VAR_3 = VAR_1->__crt_alg;
 struct spacc_alg *VAR_4 = FUNC_5(VAR_3);
 struct spacc_engine *VAR_5 = VAR_4->engine;

 VAR_2->generic.flags = VAR_4->type;
 VAR_2->generic.engine = VAR_5;
 if (VAR_3->cra_flags & VAR_0) {
  VAR_2->sw_cipher = FUNC_2(
   VAR_3->cra_name, 0, VAR_0);
  if (FUNC_0(VAR_2->sw_cipher)) {
   FUNC_4(VAR_5->dev, "failed to allocate fallback for %s\n",
     VAR_3->cra_name);
   return FUNC_1(VAR_2->sw_cipher);
  }
 }
 VAR_2->generic.key_offs = VAR_4->key_offs;
 VAR_2->generic.iv_offs = VAR_4->iv_offs;

 VAR_1->crt_ablkcipher.reqsize = sizeof(struct spacc_req);

 return 0;
}
