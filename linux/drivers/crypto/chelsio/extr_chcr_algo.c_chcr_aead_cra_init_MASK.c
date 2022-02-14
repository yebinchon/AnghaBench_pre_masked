
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct crypto_aead {int dummy; } ;
struct chcr_aead_reqctx {int dummy; } ;
struct chcr_aead_ctx {int sw_cipher; } ;
struct aead_request {int dummy; } ;
struct TYPE_2__ {int cra_name; } ;
struct aead_alg {TYPE_1__ base; } ;


 struct chcr_aead_ctx* FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct crypto_aead*) ;
 int FUNC_4 (int ) ;
 struct aead_alg* FUNC_5 (struct crypto_aead*) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (struct crypto_aead*,int ) ;
 int FUNC_8 (int ,int ,int) ;
 int FUNC_9 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_10(struct crypto_aead *VAR_2)
{
 struct chcr_aead_ctx *VAR_3 = FUNC_0(FUNC_3(VAR_2));
 struct aead_alg *VAR_4 = FUNC_5(VAR_2);

 VAR_3->sw_cipher = FUNC_8(VAR_4->base.cra_name, 0,
            VAR_1 |
            VAR_0);
 if (FUNC_1(VAR_3->sw_cipher))
  return FUNC_2(VAR_3->sw_cipher);
 FUNC_7(VAR_2, FUNC_9(sizeof(struct chcr_aead_reqctx),
     sizeof(struct aead_request) +
     FUNC_6(VAR_3->sw_cipher)));
 return FUNC_4(FUNC_3(VAR_2));
}
