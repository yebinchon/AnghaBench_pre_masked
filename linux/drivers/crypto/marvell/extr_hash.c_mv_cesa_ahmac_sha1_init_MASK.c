
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int iv; } ;
struct TYPE_6__ {TYPE_2__ hash; } ;
struct mv_cesa_op_ctx {TYPE_3__ ctx; } ;
struct mv_cesa_hmac_ctx {int iv; } ;
struct TYPE_4__ {int tfm; } ;
struct ahash_request {TYPE_1__ base; } ;


 int VAR_0 ;
 struct mv_cesa_hmac_ctx* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (struct ahash_request*,struct mv_cesa_op_ctx*,int) ;
 int FUNC_3 (struct mv_cesa_op_ctx*,int ) ;

__attribute__((used)) static int FUNC_4(struct ahash_request *VAR_1)
{
 struct mv_cesa_hmac_ctx *VAR_2 = FUNC_0(VAR_1->base.tfm);
 struct mv_cesa_op_ctx VAR_3 = { };

 FUNC_3(&VAR_3, VAR_0);
 FUNC_1(VAR_3.ctx.hash.iv, VAR_2->iv, sizeof(VAR_2->iv));

 FUNC_2(VAR_1, &VAR_3, 0);

 return 0;
}
