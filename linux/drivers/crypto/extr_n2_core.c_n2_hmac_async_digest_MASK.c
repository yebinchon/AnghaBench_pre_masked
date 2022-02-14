
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct n2_hmac_ctx {scalar_t__ hash_key_len; int hash_key; } ;
struct TYPE_8__ {int digest_size; int hw_op_hashsz; int hmac_type; int hash_init; } ;
struct n2_hmac_alg {TYPE_3__ derived; } ;
struct TYPE_6__ {int flags; } ;
struct TYPE_9__ {scalar_t__ nbytes; int result; int src; TYPE_1__ base; } ;
struct n2_hash_req_ctx {int u; TYPE_4__ fallback_req; } ;
struct n2_hash_ctx {int fallback_tfm; } ;
struct crypto_ahash {int dummy; } ;
struct TYPE_7__ {int flags; int tfm; } ;
struct ahash_request {scalar_t__ nbytes; int result; int src; TYPE_2__ base; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 struct n2_hash_req_ctx* FUNC_1 (struct ahash_request*) ;
 int FUNC_2 (TYPE_4__*,int ) ;
 void* FUNC_3 (struct crypto_ahash*) ;
 int FUNC_4 (TYPE_4__*) ;
 struct crypto_ahash* FUNC_5 (struct ahash_request*) ;
 int FUNC_6 (int *,int ,int ) ;
 int FUNC_7 (struct ahash_request*,int ,int ,int,int *,int ,scalar_t__) ;
 struct n2_hmac_alg* FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static int FUNC_10(struct ahash_request *VAR_2)
{
 struct n2_hmac_alg *VAR_3 = FUNC_8(VAR_2->base.tfm);
 struct n2_hash_req_ctx *VAR_4 = FUNC_1(VAR_2);
 struct crypto_ahash *VAR_5 = FUNC_5(VAR_2);
 struct n2_hmac_ctx *VAR_6 = FUNC_3(VAR_5);
 int VAR_7;

 VAR_7 = VAR_3->derived.digest_size;
 if (FUNC_9(VAR_2->nbytes == 0) ||
     FUNC_9(VAR_6->hash_key_len > VAR_1)) {
  struct n2_hash_req_ctx *VAR_8 = FUNC_1(VAR_2);
  struct n2_hash_ctx *VAR_9 = FUNC_3(VAR_5);

  FUNC_2(&VAR_8->fallback_req, VAR_9->fallback_tfm);
  VAR_8->fallback_req.base.flags =
   VAR_2->base.flags & VAR_0;
  VAR_8->fallback_req.nbytes = VAR_2->nbytes;
  VAR_8->fallback_req.src = VAR_2->src;
  VAR_8->fallback_req.result = VAR_2->result;

  return FUNC_4(&VAR_8->fallback_req);
 }
 FUNC_6(&VAR_4->u, VAR_3->derived.hash_init,
        VAR_3->derived.hw_op_hashsz);

 return FUNC_7(VAR_2, VAR_3->derived.hmac_type,
      VAR_3->derived.hw_op_hashsz, VAR_7,
      &VAR_4->u,
      FUNC_0(&VAR_6->hash_key),
      VAR_6->hash_key_len);
}
