
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct spacc_req {int dummy; } ;
struct spacc_engine {int dummy; } ;
struct TYPE_4__ {int iv_offs; int key_offs; struct spacc_engine* engine; int flags; } ;
struct spacc_aead_ctx {int sw_cipher; TYPE_2__ generic; } ;
struct spacc_aead {int iv_offs; int key_offs; int type; struct spacc_engine* engine; } ;
struct crypto_aead {int dummy; } ;
struct aead_request {int dummy; } ;
struct TYPE_3__ {int cra_name; } ;
struct aead_alg {TYPE_1__ base; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct aead_alg* FUNC_2 (struct crypto_aead*) ;
 struct spacc_aead_ctx* FUNC_3 (struct crypto_aead*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct crypto_aead*,int ) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int,scalar_t__) ;
 struct spacc_aead* FUNC_8 (struct aead_alg*) ;

__attribute__((used)) static int FUNC_9(struct crypto_aead *VAR_1)
{
 struct spacc_aead_ctx *VAR_2 = FUNC_3(VAR_1);
 struct aead_alg *VAR_3 = FUNC_2(VAR_1);
 struct spacc_aead *VAR_4 = FUNC_8(VAR_3);
 struct spacc_engine *VAR_5 = VAR_4->engine;

 VAR_2->generic.flags = VAR_4->type;
 VAR_2->generic.engine = VAR_5;
 VAR_2->sw_cipher = FUNC_6(VAR_3->base.cra_name, 0,
        VAR_0);
 if (FUNC_0(VAR_2->sw_cipher))
  return FUNC_1(VAR_2->sw_cipher);
 VAR_2->generic.key_offs = VAR_4->key_offs;
 VAR_2->generic.iv_offs = VAR_4->iv_offs;

 FUNC_5(
  VAR_1,
  FUNC_7(sizeof(struct spacc_req),
      sizeof(struct aead_request) +
      FUNC_4(VAR_2->sw_cipher)));

 return 0;
}
