
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct nx_gcm_rctx {int* iv; } ;
struct TYPE_4__ {int nonce; } ;
struct TYPE_5__ {TYPE_1__ ccm; } ;
struct nx_crypto_ctx {TYPE_2__ priv; } ;
struct blkcipher_desc {int* info; } ;
struct TYPE_6__ {int tfm; } ;
struct aead_request {scalar_t__ assoclen; int iv; TYPE_3__ base; } ;


 struct nx_gcm_rctx* FUNC_0 (struct aead_request*) ;
 int FUNC_1 (struct aead_request*,struct blkcipher_desc*,scalar_t__) ;
 struct nx_crypto_ctx* FUNC_2 (int ) ;
 int FUNC_3 (int*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct aead_request *VAR_0)
{
 struct nx_crypto_ctx *VAR_1 = FUNC_2(VAR_0->base.tfm);
 struct nx_gcm_rctx *VAR_2 = FUNC_0(VAR_0);
 struct blkcipher_desc VAR_3;
 u8 *VAR_4 = VAR_2->iv;

 VAR_4[0] = 3;
 FUNC_3(VAR_4 + 1, VAR_1->priv.ccm.nonce, 3);
 FUNC_3(VAR_4 + 4, VAR_0->iv, 8);

 VAR_3.info = VAR_4;

 return FUNC_1(VAR_0, &VAR_3, VAR_0->assoclen - 8);
}
