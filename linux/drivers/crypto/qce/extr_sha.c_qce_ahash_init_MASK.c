
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct qce_sha_reqctx {int first_blk; int last_blk; int digest; int flags; } ;
struct qce_alg_template {int alg_flags; int * std_iv; } ;
struct TYPE_2__ {int tfm; } ;
struct ahash_request {TYPE_1__ base; } ;


 struct qce_sha_reqctx* FUNC_0 (struct ahash_request*) ;
 int FUNC_1 (int ,int const*,int) ;
 int FUNC_2 (struct qce_sha_reqctx*,int ,int) ;
 struct qce_alg_template* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct ahash_request *VAR_0)
{
 struct qce_sha_reqctx *VAR_1 = FUNC_0(VAR_0);
 struct qce_alg_template *VAR_2 = FUNC_3(VAR_0->base.tfm);
 const u32 *VAR_3 = VAR_2->std_iv;

 FUNC_2(VAR_1, 0, sizeof(*VAR_1));
 VAR_1->first_blk = 1;
 VAR_1->last_blk = 0;
 VAR_1->flags = VAR_2->alg_flags;
 FUNC_1(VAR_1->digest, VAR_3, sizeof(VAR_1->digest));

 return 0;
}
