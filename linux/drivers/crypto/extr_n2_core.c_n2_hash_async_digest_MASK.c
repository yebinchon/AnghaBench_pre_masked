
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct n2_hash_req_ctx {int u; } ;
struct n2_ahash_alg {int digest_size; int hw_op_hashsz; int auth_type; int hash_init; int hash_zero; } ;
struct TYPE_2__ {int tfm; } ;
struct ahash_request {scalar_t__ nbytes; int * result; TYPE_1__ base; } ;


 struct n2_hash_req_ctx* FUNC_0 (struct ahash_request*) ;
 int FUNC_1 (int *,int ,int) ;
 struct n2_ahash_alg* FUNC_2 (int ) ;
 int FUNC_3 (struct ahash_request*,int ,int,int,int *,unsigned long,int ) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct ahash_request *VAR_0)
{
 struct n2_ahash_alg *VAR_1 = FUNC_2(VAR_0->base.tfm);
 struct n2_hash_req_ctx *VAR_2 = FUNC_0(VAR_0);
 int VAR_3;

 VAR_3 = VAR_1->digest_size;
 if (FUNC_4(VAR_0->nbytes == 0)) {
  FUNC_1(VAR_0->result, VAR_1->hash_zero, VAR_3);
  return 0;
 }
 FUNC_1(&VAR_2->u, VAR_1->hash_init, VAR_1->hw_op_hashsz);

 return FUNC_3(VAR_0, VAR_1->auth_type,
      VAR_1->hw_op_hashsz, VAR_3,
      &VAR_2->u, 0UL, 0);
}
