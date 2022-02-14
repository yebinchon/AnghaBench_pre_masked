
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
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct skcipher_request*,struct mv_cesa_op_ctx*) ;
 int FUNC_2 (struct mv_cesa_op_ctx*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct skcipher_request *VAR_3,
         struct mv_cesa_op_ctx *VAR_4)
{
 FUNC_2(VAR_4, VAR_1,
         VAR_2);
 FUNC_0(VAR_4->ctx.blkcipher.iv, VAR_3->iv, VAR_0);

 return FUNC_1(VAR_3, VAR_4);
}
