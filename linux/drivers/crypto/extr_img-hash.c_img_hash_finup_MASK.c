
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int flags; } ;
struct TYPE_7__ {int result; int src; int nbytes; TYPE_1__ base; } ;
struct img_hash_request_ctx {TYPE_3__ fallback_req; } ;
struct img_hash_ctx {int fallback; } ;
struct crypto_ahash {int dummy; } ;
struct TYPE_6__ {int flags; } ;
struct ahash_request {int result; int src; int nbytes; TYPE_2__ base; } ;


 int VAR_0 ;
 struct img_hash_request_ctx* FUNC_0 (struct ahash_request*) ;
 int FUNC_1 (TYPE_3__*,int ) ;
 struct img_hash_ctx* FUNC_2 (struct crypto_ahash*) ;
 int FUNC_3 (TYPE_3__*) ;
 struct crypto_ahash* FUNC_4 (struct ahash_request*) ;

__attribute__((used)) static int FUNC_5(struct ahash_request *VAR_1)
{
 struct img_hash_request_ctx *VAR_2 = FUNC_0(VAR_1);
 struct crypto_ahash *VAR_3 = FUNC_4(VAR_1);
 struct img_hash_ctx *VAR_4 = FUNC_2(VAR_3);

 FUNC_1(&VAR_2->fallback_req, VAR_4->fallback);
 VAR_2->fallback_req.base.flags = VAR_1->base.flags
  & VAR_0;
 VAR_2->fallback_req.nbytes = VAR_1->nbytes;
 VAR_2->fallback_req.src = VAR_1->src;
 VAR_2->fallback_req.result = VAR_1->result;

 return FUNC_3(&VAR_2->fallback_req);
}
