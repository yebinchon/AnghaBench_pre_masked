
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct skcipher_request {int iv; } ;
struct TYPE_3__ {int iv; } ;
struct TYPE_4__ {TYPE_1__ blkcipher; } ;
struct mv_cesa_op_ctx {TYPE_2__ ctx; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct skcipher_request*,struct mv_cesa_op_ctx*) ;

__attribute__((used)) static int FUNC_2(struct skcipher_request *VAR_1,
          struct mv_cesa_op_ctx *VAR_2)
{
 FUNC_0(VAR_2->ctx.blkcipher.iv, VAR_1->iv, VAR_0);

 return FUNC_1(VAR_1, VAR_2);
}
