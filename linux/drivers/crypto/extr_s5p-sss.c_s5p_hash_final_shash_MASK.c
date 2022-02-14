
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct s5p_hash_reqctx {int bufcnt; int buffer; } ;
struct s5p_hash_ctx {int fallback; } ;
struct TYPE_2__ {int flags; int tfm; } ;
struct ahash_request {int result; TYPE_1__ base; } ;


 struct s5p_hash_reqctx* FUNC_0 (struct ahash_request*) ;
 struct s5p_hash_ctx* FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct ahash_request *VAR_0)
{
 struct s5p_hash_ctx *VAR_1 = FUNC_1(VAR_0->base.tfm);
 struct s5p_hash_reqctx *VAR_2 = FUNC_0(VAR_0);

 return FUNC_2(VAR_1->fallback, VAR_0->base.flags,
         VAR_2->buffer, VAR_2->bufcnt, VAR_0->result);
}
