
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct mv_cesa_engine {int load; scalar_t__ regs; } ;
struct TYPE_11__ {TYPE_4__* last; } ;
struct TYPE_12__ {TYPE_5__ chain; struct mv_cesa_engine* engine; } ;
struct mv_cesa_ahash_req {void** state; scalar_t__ algo_le; scalar_t__ last_req; TYPE_6__ base; } ;
struct crypto_async_request {int dummy; } ;
struct ahash_request {int nbytes; scalar_t__ result; } ;
typedef void* __le32 ;
typedef int __be32 ;
struct TYPE_10__ {int flags; TYPE_3__* op; } ;
struct TYPE_7__ {void** hash; } ;
struct TYPE_8__ {TYPE_1__ hash; } ;
struct TYPE_9__ {TYPE_2__ ctx; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 struct ahash_request* FUNC_1 (struct crypto_async_request*) ;
 struct mv_cesa_ahash_req* FUNC_2 (struct ahash_request*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (void*) ;
 void* FUNC_5 (void*) ;
 unsigned int FUNC_6 (int ) ;
 int FUNC_7 (struct ahash_request*) ;
 int FUNC_8 (scalar_t__,void**,unsigned int) ;
 scalar_t__ FUNC_9 (TYPE_6__*) ;
 void* FUNC_10 (scalar_t__) ;

__attribute__((used)) static void FUNC_11(struct crypto_async_request *VAR_3)
{
 struct ahash_request *VAR_4 = FUNC_1(VAR_3);
 struct mv_cesa_ahash_req *VAR_5 = FUNC_2(VAR_4);
 struct mv_cesa_engine *VAR_6 = VAR_5->base.engine;
 unsigned int VAR_7;
 int VAR_8;

 VAR_7 = FUNC_6(FUNC_7(VAR_4));

 if (FUNC_9(&VAR_5->base) == VAR_0 &&
     (VAR_5->base.chain.last->flags & VAR_2) == VAR_1) {
  __le32 *VAR_9 = ((void*)0);





  VAR_9 = VAR_5->base.chain.last->op->ctx.hash.hash;
  for (VAR_8 = 0; VAR_8 < VAR_7 / 4; VAR_8++)
   VAR_5->state[VAR_8] = FUNC_5(VAR_9[VAR_8]);

  FUNC_8(VAR_4->result, VAR_9, VAR_7);
 } else {
  for (VAR_8 = 0; VAR_8 < VAR_7 / 4; VAR_8++)
   VAR_5->state[VAR_8] = FUNC_10(VAR_6->regs +
             FUNC_0(VAR_8));
  if (VAR_5->last_req) {




   if (VAR_5->algo_le) {
    __le32 *VAR_10 = (void *)VAR_4->result;

    for (VAR_8 = 0; VAR_8 < VAR_7 / 4; VAR_8++)
     VAR_10[VAR_8] = FUNC_5(VAR_5->state[VAR_8]);
   } else {
    __be32 *VAR_11 = (void *)VAR_4->result;

    for (VAR_8 = 0; VAR_8 < VAR_7 / 4; VAR_8++)
     VAR_11[VAR_8] = FUNC_4(VAR_5->state[VAR_8]);
   }
  }
 }

 FUNC_3(VAR_4->nbytes, &VAR_6->load);
}
