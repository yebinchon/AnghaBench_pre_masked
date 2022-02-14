
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct mv_cesa_tdma_desc {int flags; scalar_t__ cur_dma; struct mv_cesa_tdma_desc* next; } ;
struct TYPE_3__ {int * last; struct mv_cesa_tdma_desc* first; } ;
struct mv_cesa_engine {int lock; struct crypto_async_request* req; TYPE_1__ chain; scalar_t__ regs; } ;
struct mv_cesa_ctx {TYPE_2__* ops; } ;
struct crypto_async_request {int (* complete ) (struct crypto_async_request*,int ) ;int tfm; } ;
typedef scalar_t__ dma_addr_t ;
struct TYPE_4__ {int (* process ) (struct crypto_async_request*,int ) ;int (* complete ) (struct crypto_async_request*) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct mv_cesa_ctx* FUNC_0 (int ) ;
 struct crypto_async_request* FUNC_1 (struct mv_cesa_engine*,struct crypto_async_request**) ;
 int FUNC_2 (struct mv_cesa_engine*,struct crypto_async_request*) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct crypto_async_request*,int ) ;
 int FUNC_7 (struct crypto_async_request*) ;
 int FUNC_8 (struct crypto_async_request*,int ) ;

int FUNC_9(struct mv_cesa_engine *VAR_4, u32 VAR_5)
{
 struct crypto_async_request *VAR_6 = ((void*)0);
 struct mv_cesa_tdma_desc *VAR_7 = ((void*)0), *VAR_8 = ((void*)0);
 dma_addr_t VAR_9;
 int VAR_10 = 0;

 VAR_9 = FUNC_3(VAR_4->regs + VAR_1);

 for (VAR_7 = VAR_4->chain.first; VAR_7; VAR_7 = VAR_8) {
  FUNC_4(&VAR_4->lock);
  VAR_8 = VAR_7->next;
  FUNC_5(&VAR_4->lock);

  if (VAR_7->flags & VAR_2) {
   struct crypto_async_request *VAR_11 = ((void*)0);
   struct mv_cesa_ctx *VAR_12;
   u32 VAR_13;

   FUNC_4(&VAR_4->lock);




   if (!VAR_6)
    VAR_6 = VAR_4->req;
   else
    VAR_6 = FUNC_1(VAR_4,
         &VAR_11);


   VAR_4->chain.first = VAR_7->next;
   VAR_7->next = ((void*)0);


   if (VAR_4->chain.first == ((void*)0))
    VAR_4->chain.last = ((void*)0);
   FUNC_5(&VAR_4->lock);

   VAR_12 = FUNC_0(VAR_6->tfm);
   VAR_13 = (VAR_7->cur_dma == VAR_9) ?
       VAR_5 : VAR_0;
   VAR_10 = VAR_12->ops->process(VAR_6, VAR_13);
   VAR_12->ops->complete(VAR_6);

   if (VAR_10 == 0)
    FUNC_2(VAR_4,
         VAR_6);

   if (VAR_11)
    VAR_11->complete(VAR_11, -VAR_3);
  }

  if (VAR_10 || VAR_7->cur_dma == VAR_9)
   break;
 }



 if (VAR_10) {
  FUNC_4(&VAR_4->lock);
  VAR_4->req = VAR_6;
  FUNC_5(&VAR_4->lock);
 }

 return VAR_10;
}
