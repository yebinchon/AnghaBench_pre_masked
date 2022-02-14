
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct skcipher_request {int dummy; } ;
struct TYPE_2__ {struct skcipher_request skreq; } ;
struct crypto_gcm_req_priv_ctx {TYPE_1__ u; } ;
struct aead_request {int cryptlen; } ;


 int FUNC_0 (struct aead_request*) ;
 int FUNC_1 (struct aead_request*) ;
 int FUNC_2 (struct aead_request*,int ) ;
 struct crypto_gcm_req_priv_ctx* FUNC_3 (struct aead_request*) ;
 scalar_t__ FUNC_4 (struct skcipher_request*) ;
 int FUNC_5 (struct aead_request*,int ) ;
 int VAR_0 ;
 int FUNC_6 (struct skcipher_request*,int ,int ,struct aead_request*) ;

__attribute__((used)) static int FUNC_7(struct aead_request *VAR_1)
{
 struct crypto_gcm_req_priv_ctx *VAR_2 = FUNC_3(VAR_1);
 struct skcipher_request *VAR_3 = &VAR_2->u.skreq;
 u32 VAR_4 = FUNC_0(VAR_1);

 FUNC_1(VAR_1);
 FUNC_2(VAR_1, VAR_1->cryptlen);
 FUNC_6(VAR_3, VAR_4, VAR_0, VAR_1);

 return FUNC_4(VAR_3) ?:
        FUNC_5(VAR_1, VAR_4);
}
