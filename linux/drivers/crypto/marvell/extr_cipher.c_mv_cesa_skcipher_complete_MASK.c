
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct skcipher_request {int iv; int cryptlen; } ;
struct TYPE_10__ {TYPE_4__* last; } ;
struct mv_cesa_req {TYPE_5__ chain; struct mv_cesa_engine* engine; } ;
struct mv_cesa_skcipher_req {struct mv_cesa_req base; } ;
struct mv_cesa_engine {scalar_t__ sram; int load; } ;
struct crypto_async_request {int dummy; } ;
struct TYPE_9__ {TYPE_3__* op; } ;
struct TYPE_6__ {int iv; } ;
struct TYPE_7__ {TYPE_1__ blkcipher; } ;
struct TYPE_8__ {TYPE_2__ ctx; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int *) ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 (struct skcipher_request*) ;
 int FUNC_3 (int ,int ,unsigned int) ;
 int FUNC_4 (int ,scalar_t__,unsigned int) ;
 scalar_t__ FUNC_5 (struct mv_cesa_req*) ;
 struct skcipher_request* FUNC_6 (struct crypto_async_request*) ;
 struct mv_cesa_skcipher_req* FUNC_7 (struct skcipher_request*) ;

__attribute__((used)) static void
FUNC_8(struct crypto_async_request *VAR_2)
{
 struct skcipher_request *VAR_3 = FUNC_6(VAR_2);
 struct mv_cesa_skcipher_req *VAR_4 = FUNC_7(VAR_3);
 struct mv_cesa_engine *VAR_5 = VAR_4->base.engine;
 unsigned int VAR_6;

 FUNC_0(VAR_3->cryptlen, &VAR_5->load);
 VAR_6 = FUNC_1(FUNC_2(VAR_3));

 if (FUNC_5(&VAR_4->base) == VAR_0) {
  struct mv_cesa_req *VAR_7;

  VAR_7 = &VAR_4->base;
  FUNC_3(VAR_3->iv, VAR_7->chain.last->op->ctx.blkcipher.iv,
         VAR_6);
 } else {
  FUNC_4(VAR_3->iv,
         VAR_5->sram + VAR_1,
         VAR_6);
 }
}
