
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ahash_request {int dummy; } ;
struct TYPE_2__ {struct ahash_request ahreq; } ;
struct crypto_gcm_req_priv_ctx {TYPE_1__ u; } ;
struct crypto_gcm_ctx {int ghash; } ;
struct aead_request {int dummy; } ;


 int FUNC_0 (struct ahash_request*,int ,int ,struct aead_request*) ;
 int FUNC_1 (struct ahash_request*,int ) ;
 struct crypto_gcm_ctx* FUNC_2 (int ) ;
 int FUNC_3 (struct aead_request*) ;
 scalar_t__ FUNC_4 (struct ahash_request*) ;
 struct crypto_gcm_req_priv_ctx* FUNC_5 (struct aead_request*) ;
 int FUNC_6 (struct aead_request*,int ) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_7(struct aead_request *VAR_1, u32 VAR_2)
{
 struct crypto_gcm_req_priv_ctx *VAR_3 = FUNC_5(VAR_1);
 struct ahash_request *VAR_4 = &VAR_3->u.ahreq;
 struct crypto_gcm_ctx *VAR_5 = FUNC_2(FUNC_3(VAR_1));

 FUNC_1(VAR_4, VAR_5->ghash);

 FUNC_0(VAR_4, VAR_2, VAR_0, VAR_1);
 return FUNC_4(VAR_4) ?:
        FUNC_6(VAR_1, VAR_2);
}
