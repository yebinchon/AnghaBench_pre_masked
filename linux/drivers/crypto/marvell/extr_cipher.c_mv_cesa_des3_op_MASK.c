
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int tfm; } ;
struct skcipher_request {TYPE_1__ base; } ;
struct TYPE_5__ {int key; } ;
struct TYPE_6__ {TYPE_2__ blkcipher; } ;
struct mv_cesa_op_ctx {TYPE_3__ ctx; } ;
struct mv_cesa_des3_ctx {int key; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct mv_cesa_des3_ctx* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct skcipher_request*,struct mv_cesa_op_ctx*) ;
 int FUNC_3 (struct mv_cesa_op_ctx*,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct skcipher_request *VAR_3,
      struct mv_cesa_op_ctx *VAR_4)
{
 struct mv_cesa_des3_ctx *VAR_5 = FUNC_0(VAR_3->base.tfm);

 FUNC_3(VAR_4, VAR_0,
         VAR_1);

 FUNC_1(VAR_4->ctx.blkcipher.key, VAR_5->key, VAR_2);

 return FUNC_2(VAR_3, VAR_4);
}
