
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct s5p_hash_reqctx {int op_update; } ;
struct s5p_hash_ctx {int dd; } ;
struct TYPE_2__ {int tfm; } ;
struct ahash_request {TYPE_1__ base; } ;


 struct s5p_hash_reqctx* FUNC_0 (struct ahash_request*) ;
 struct s5p_hash_ctx* FUNC_1 (int ) ;
 int FUNC_2 (int ,struct ahash_request*) ;

__attribute__((used)) static int FUNC_3(struct ahash_request *VAR_0, bool VAR_1)
{
 struct s5p_hash_reqctx *VAR_2 = FUNC_0(VAR_0);
 struct s5p_hash_ctx *VAR_3 = FUNC_1(VAR_0->base.tfm);

 VAR_2->op_update = VAR_1;

 return FUNC_2(VAR_3->dd, VAR_0);
}
