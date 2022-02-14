
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct crypto_ahash {int dummy; } ;
struct ccp_sha_req_ctx {int first; unsigned int buf_count; int buf; int type; } ;
struct TYPE_3__ {int ipad; scalar_t__ key_len; } ;
struct TYPE_4__ {TYPE_1__ sha; } ;
struct ccp_ctx {TYPE_2__ u; } ;
struct ccp_crypto_ahash_alg {int type; } ;
struct ahash_request {int dummy; } ;


 struct ccp_sha_req_ctx* FUNC_0 (struct ahash_request*) ;
 struct ccp_crypto_ahash_alg* FUNC_1 (int ) ;
 struct ccp_ctx* FUNC_2 (struct crypto_ahash*) ;
 struct crypto_ahash* FUNC_3 (struct ahash_request*) ;
 int FUNC_4 (struct crypto_ahash*) ;
 unsigned int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,unsigned int) ;
 int FUNC_7 (struct ccp_sha_req_ctx*,int ,int) ;

__attribute__((used)) static int FUNC_8(struct ahash_request *VAR_0)
{
 struct crypto_ahash *VAR_1 = FUNC_3(VAR_0);
 struct ccp_ctx *VAR_2 = FUNC_2(VAR_1);
 struct ccp_sha_req_ctx *VAR_3 = FUNC_0(VAR_0);
 struct ccp_crypto_ahash_alg *VAR_4 =
  FUNC_1(FUNC_4(VAR_1));
 unsigned int VAR_5 =
  FUNC_5(FUNC_4(VAR_1));

 FUNC_7(VAR_3, 0, sizeof(*VAR_3));

 VAR_3->type = VAR_4->type;
 VAR_3->first = 1;

 if (VAR_2->u.sha.key_len) {

  FUNC_6(VAR_3->buf, VAR_2->u.sha.ipad, VAR_5);
  VAR_3->buf_count = VAR_5;
 }

 return 0;
}
