
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nx_gcm_rctx {char* iv; } ;
struct TYPE_3__ {char* nonce; } ;
struct TYPE_4__ {TYPE_1__ gcm; } ;
struct nx_crypto_ctx {TYPE_2__ priv; } ;
struct aead_request {char* iv; int assoclen; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct nx_gcm_rctx* FUNC_0 (struct aead_request*) ;
 struct nx_crypto_ctx* FUNC_1 (int ) ;
 int FUNC_2 (struct aead_request*) ;
 int FUNC_3 (struct aead_request*,int ,int) ;
 int FUNC_4 (char*,char*,int) ;

__attribute__((used)) static int FUNC_5(struct aead_request *VAR_2)
{
 struct nx_crypto_ctx *VAR_3 =
  FUNC_1(FUNC_2(VAR_2));
 struct nx_gcm_rctx *VAR_4 = FUNC_0(VAR_2);
 char *VAR_5 = VAR_4->iv;
 char *VAR_6 = VAR_3->priv.gcm.nonce;

 FUNC_4(VAR_5, VAR_6, VAR_1);
 FUNC_4(VAR_5 + VAR_1, VAR_2->iv, 8);

 if (VAR_2->assoclen < 8)
  return -VAR_0;

 return FUNC_3(VAR_2, 0, VAR_2->assoclen - 8);
}
